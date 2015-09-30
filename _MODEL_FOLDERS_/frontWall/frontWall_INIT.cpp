//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"frontWall_DOT3.png"].CGImage;      
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
        glGenTextures(1, &frontWall_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, frontWall_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"frontWall.png"].CGImage;           
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
        glGenTextures(1, &frontWall_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, frontWall_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/frontWall/frontWall_DOT3.png",     frontWall_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/frontWall/frontWall.png",          frontWall_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "frontWall.cpp"                                                                                         
    glGenBuffers(1,              &frontWall_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, frontWall_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(frontWall), frontWall, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "frontWall_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &frontWall_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, frontWall_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(frontWall_INDICES), frontWall_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    frontWall_boundingBox[0] = -3.66312;
    frontWall_boundingBox[1] = 3.35383;
    frontWall_boundingBox[2] = 0.029209;
    frontWall_boundingBox[3] = 5.2187;
    frontWall_boundingBox[4] = -3.24233;
    frontWall_boundingBox[5] = 2.2797;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -3.66312;
    collisionBoxArray[boxCount][1] = 3.35383;
    collisionBoxArray[boxCount][2] = 0.029209;
    collisionBoxArray[boxCount][3] = 5.2187;
    collisionBoxArray[boxCount][4] = -3.24233;
    collisionBoxArray[boxCount][5] = 2.2797;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
