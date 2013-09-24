//
//  DHFont.h
//  DHxls
//
//  Created by David Hoerl on 10/7/08.
//  Copyright 2008-2013 David Hoerl. All rights reserved.
//

@interface DHFont : NSObject

//+(DHFont *)fontWithName:(NSString *)fontName;
-(instancetype)initWithFont:(void *)ft;	// xlslib_core::CFont *
-(void *)font;

-(void)setName:(NSString *)name;
-(NSString *)name;
-(void)setHeight:(unsigned short)fntheight;
-(unsigned short)height;
-(void)setBoldStyle:(boldness_option_t)fntboldness;
-(unsigned short)boldStyle;
-(void)setUnderlineStyle:(underline_option_t)fntunderline;
-(unsigned char)underlineStyle;
-(void)SetScriptStyle:(script_option_t)fntscript;
-(unsigned short)scriptStyle;
-(void)setColorName:(color_name_t)fntcolor;
-(void)setColorIndex:(unsigned8_t)fntcolor;
-(unsigned short)colorIndex;

-(void)setItalic:(BOOL)italic;
-(BOOL)italic;
-(void)setStrikeout:(BOOL)so;
-(BOOL)strikeOut;
-(void)setOutline:(BOOL)ol;
-(BOOL)outline;

-(void)setFamily:(unsigned char)fam;
-(unsigned char)family;
-(void)setCharset:(unsigned char)fam;
-(unsigned char)charset;

@end
