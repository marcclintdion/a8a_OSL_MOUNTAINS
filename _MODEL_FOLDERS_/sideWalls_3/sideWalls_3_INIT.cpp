//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"sideWalls_3_DOT3.png"].CGImage;      
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
        glGenTextures(1, &sideWalls_3_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, sideWalls_3_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"sideWalls_3.png"].CGImage;           
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
        glGenTextures(1, &sideWalls_3_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, sideWalls_3_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/sideWalls_3/sideWalls_3_DOT3.png",     sideWalls_3_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/sideWalls_3/sideWalls_3.png",          sideWalls_3_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_3.cpp"                                                                                         
    glGenBuffers(1,              &sideWalls_3_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_3_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(sideWalls_3), sideWalls_3, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_3_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &sideWalls_3_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_3_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sideWalls_3_INDICES), sideWalls_3_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    sideWalls_3_boundingBox[0] = -3.91727;
    sideWalls_3_boundingBox[1] = -3.36438;
    sideWalls_3_boundingBox[2] = 0.030988;
    sideWalls_3_boundingBox[3] = 3.94289;
    sideWalls_3_boundingBox[4] = -3.24415;
    sideWalls_3_boundingBox[5] = 3.10969;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -3.91727;
    collisionBoxArray[boxCount][1] = -3.36438;
    collisionBoxArray[boxCount][2] = 0.030988;
    collisionBoxArray[boxCount][3] = 3.94289;
    collisionBoxArray[boxCount][4] = -3.24415;
    collisionBoxArray[boxCount][5] = 3.10969;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
