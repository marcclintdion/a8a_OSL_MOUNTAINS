//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"sign_DOT3.png"].CGImage;      
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
        glGenTextures(1, &sign_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, sign_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"sign.png"].CGImage;           
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
        glGenTextures(1, &sign_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, sign_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/sign/sign_DOT3.png",     sign_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/sign/sign.png",          sign_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "sign.cpp"                                                                                         
    glGenBuffers(1,              &sign_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, sign_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(sign), sign, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "sign_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &sign_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sign_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sign_INDICES), sign_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    sign_boundingBox[0] = -2.38622;
    sign_boundingBox[1] = 2.05651;
    sign_boundingBox[2] = 4.18453;
    sign_boundingBox[3] = 5.07307;
    sign_boundingBox[4] = 2.79452;
    sign_boundingBox[5] = 3.01665;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -2.38622;
    collisionBoxArray[boxCount][1] = 2.05651;
    collisionBoxArray[boxCount][2] = 4.18453;
    collisionBoxArray[boxCount][3] = 5.07307;
    collisionBoxArray[boxCount][4] = 2.79452;
    collisionBoxArray[boxCount][5] = 3.01665;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
