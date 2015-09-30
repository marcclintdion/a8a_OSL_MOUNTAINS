//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"logs_4_DOT3.png"].CGImage;      
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
        glGenTextures(1, &logs_4_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, logs_4_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"logs_4.png"].CGImage;           
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
        glGenTextures(1, &logs_4_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, logs_4_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/logs_4/logs_4_DOT3.png",     logs_4_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/logs_4/logs_4.png",          logs_4_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "logs_4.cpp"                                                                                         
    glGenBuffers(1,              &logs_4_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, logs_4_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(logs_4), logs_4, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "logs_4_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &logs_4_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_4_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(logs_4_INDICES), logs_4_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    logs_4_boundingBox[0] = 2.03817;
    logs_4_boundingBox[1] = 4.02411;
    logs_4_boundingBox[2] = 5.18699;
    logs_4_boundingBox[3] = 5.82662;
    logs_4_boundingBox[4] = -3.2622;
    logs_4_boundingBox[5] = 3.26047;
    //=====================================================   
    collisionBoxArray[boxCount][0] = 2.03817;
    collisionBoxArray[boxCount][1] = 4.02411;
    collisionBoxArray[boxCount][2] = 5.18699;
    collisionBoxArray[boxCount][3] = 5.82662;
    collisionBoxArray[boxCount][4] = -3.2622;
    collisionBoxArray[boxCount][5] = 3.26047;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
