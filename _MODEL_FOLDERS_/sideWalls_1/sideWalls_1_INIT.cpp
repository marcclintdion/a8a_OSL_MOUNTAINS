//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"sideWalls_1_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &sideWalls_1_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, sideWalls_1_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"sideWalls_1.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &sideWalls_1_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, sideWalls_1_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/sideWalls_1/sideWalls_1_DOT3.png",     sideWalls_1_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/sideWalls_1/sideWalls_1.png",          sideWalls_1_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_1.cpp"                                                                                         
    glGenBuffers(1,              &sideWalls_1_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_1_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(sideWalls_1), sideWalls_1, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_1_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &sideWalls_1_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_1_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sideWalls_1_INDICES), sideWalls_1_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    sideWalls_1_boundingBox[0] = 3.36438;
    sideWalls_1_boundingBox[1] = 3.91727;
    sideWalls_1_boundingBox[2] = 0.030988;
    sideWalls_1_boundingBox[3] = 5.22896;
    sideWalls_1_boundingBox[4] = -3.24415;
    sideWalls_1_boundingBox[5] = 3.10969;
    //=====================================================   
    collisionBoxArray[boxCount][0] = 3.36438;
    collisionBoxArray[boxCount][1] = 3.91727;
    collisionBoxArray[boxCount][2] = 0.030988;
    collisionBoxArray[boxCount][3] = 5.22896;
    collisionBoxArray[boxCount][4] = -3.24415;
    collisionBoxArray[boxCount][5] = 3.10969;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
