//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"logs_2_DOT3.png"].CGImage;      
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
        glGenTextures(1, &logs_2_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, logs_2_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"logs_2.png"].CGImage;           
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
        glGenTextures(1, &logs_2_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, logs_2_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/logs_2/logs_2_DOT3.png",     logs_2_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/logs_2/logs_2.png",          logs_2_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "logs_2.cpp"                                                                                         
    glGenBuffers(1,              &logs_2_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, logs_2_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(logs_2), logs_2, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "logs_2_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &logs_2_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_2_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(logs_2_INDICES), logs_2_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    logs_2_boundingBox[0] = -1.9936;
    logs_2_boundingBox[1] = -0.007657;
    logs_2_boundingBox[2] = 5.18699;
    logs_2_boundingBox[3] = 5.82662;
    logs_2_boundingBox[4] = -3.2622;
    logs_2_boundingBox[5] = 3.26047;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -1.9936;
    collisionBoxArray[boxCount][1] = -0.007657;
    collisionBoxArray[boxCount][2] = 5.18699;
    collisionBoxArray[boxCount][3] = 5.82662;
    collisionBoxArray[boxCount][4] = -3.2622;
    collisionBoxArray[boxCount][5] = 3.26047;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
