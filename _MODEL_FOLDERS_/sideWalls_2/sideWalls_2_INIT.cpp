//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"sideWalls_2_DOT3.png"].CGImage;      
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
        glGenTextures(1, &sideWalls_2_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, sideWalls_2_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"sideWalls_2.png"].CGImage;           
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
        glGenTextures(1, &sideWalls_2_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, sideWalls_2_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/sideWalls_2/sideWalls_2_DOT3.png",     sideWalls_2_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/sideWalls_2/sideWalls_2.png",          sideWalls_2_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_2.cpp"                                                                                         
    glGenBuffers(1,              &sideWalls_2_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_2_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(sideWalls_2), sideWalls_2, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_2_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &sideWalls_2_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_2_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sideWalls_2_INDICES), sideWalls_2_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    sideWalls_2_boundingBox[0] = 3.35828;
    sideWalls_2_boundingBox[1] = 3.91213;
    sideWalls_2_boundingBox[2] = 1.33227;
    sideWalls_2_boundingBox[3] = 3.92737;
    sideWalls_2_boundingBox[4] = -3.24348;
    sideWalls_2_boundingBox[5] = 3.13689;
    //=====================================================   
    collisionBoxArray[boxCount][0] = 3.35828;
    collisionBoxArray[boxCount][1] = 3.91213;
    collisionBoxArray[boxCount][2] = 1.33227;
    collisionBoxArray[boxCount][3] = 3.92737;
    collisionBoxArray[boxCount][4] = -3.24348;
    collisionBoxArray[boxCount][5] = 3.13689;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
