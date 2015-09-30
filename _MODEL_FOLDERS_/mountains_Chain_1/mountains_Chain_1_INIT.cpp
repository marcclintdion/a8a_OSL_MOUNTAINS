//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_1_DOT3.png"].CGImage;      
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
        glGenTextures(1, &mountains_Chain_1_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_1_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_1.png"].CGImage;           
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
        glGenTextures(1, &mountains_Chain_1_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_1_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_1/mountains_Chain_1_DOT3.png",     mountains_Chain_1_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_1/mountains_Chain_1.png",          mountains_Chain_1_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_1.cpp"                                                                                         
    glGenBuffers(1,              &mountains_Chain_1_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, mountains_Chain_1_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(mountains_Chain_1), mountains_Chain_1, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_1_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &mountains_Chain_1_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mountains_Chain_1_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(mountains_Chain_1_INDICES), mountains_Chain_1_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    mountains_Chain_1_boundingBox[0] = -36.4348;
    mountains_Chain_1_boundingBox[1] = 35.6478;
    mountains_Chain_1_boundingBox[2] = -1.16497;
    mountains_Chain_1_boundingBox[3] = 21.048;
    mountains_Chain_1_boundingBox[4] = -31.7529;
    mountains_Chain_1_boundingBox[5] = 0;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -36.4348;
    collisionBoxArray[boxCount][1] = 35.6478;
    collisionBoxArray[boxCount][2] = -1.16497;
    collisionBoxArray[boxCount][3] = 21.048;
    collisionBoxArray[boxCount][4] = -31.7529;
    collisionBoxArray[boxCount][5] = 0;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
