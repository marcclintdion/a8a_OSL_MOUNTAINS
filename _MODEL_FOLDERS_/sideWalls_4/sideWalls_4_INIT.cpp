//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"sideWalls_4_DOT3.png"].CGImage;      
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
        glGenTextures(1, &sideWalls_4_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, sideWalls_4_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"sideWalls_4.png"].CGImage;           
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
        glGenTextures(1, &sideWalls_4_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, sideWalls_4_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/sideWalls_4/sideWalls_4_DOT3.png",     sideWalls_4_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/sideWalls_4/sideWalls_4.png",          sideWalls_4_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_4.cpp"                                                                                         
    glGenBuffers(1,              &sideWalls_4_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_4_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(sideWalls_4), sideWalls_4, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "sideWalls_4_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &sideWalls_4_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_4_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sideWalls_4_INDICES), sideWalls_4_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    sideWalls_4_boundingBox[0] = -3.91213;
    sideWalls_4_boundingBox[1] = -3.35828;
    sideWalls_4_boundingBox[2] = 1.33227;
    sideWalls_4_boundingBox[3] = 5.24134;
    sideWalls_4_boundingBox[4] = -3.24348;
    sideWalls_4_boundingBox[5] = 3.13689;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -3.91213;
    collisionBoxArray[boxCount][1] = -3.35828;
    collisionBoxArray[boxCount][2] = 1.33227;
    collisionBoxArray[boxCount][3] = 5.24134;
    collisionBoxArray[boxCount][4] = -3.24348;
    collisionBoxArray[boxCount][5] = 3.13689;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
