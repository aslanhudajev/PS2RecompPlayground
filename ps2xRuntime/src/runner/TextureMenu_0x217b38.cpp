#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TextureMenu
// Address: 0x217b38 - 0x218304
void TextureMenu_0x217b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x217b38u;

    // 0x217b38: 0x27bdfee0
    ctx->pc = 0x217b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x217b3c: 0xffbf0110
    ctx->pc = 0x217b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x217b40: 0xffbe0100
    ctx->pc = 0x217b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x217b44: 0xffb700f0
    ctx->pc = 0x217b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x217b48: 0xffb600e0
    ctx->pc = 0x217b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x217b4c: 0xffb500d0
    ctx->pc = 0x217b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x217b50: 0xffb400c0
    ctx->pc = 0x217b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x217b54: 0xffb300b0
    ctx->pc = 0x217b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x217b58: 0xffb200a0
    ctx->pc = 0x217b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x217b5c: 0xffb10090
    ctx->pc = 0x217b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x217b60: 0xffb00080
    ctx->pc = 0x217b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x217b64: 0x3c020036
    ctx->pc = 0x217b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x217b68: 0x8c42dee0
    ctx->pc = 0x217b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x217b6c: 0xafa20078
    ctx->pc = 0x217b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x217b70: 0xafa0007c
    ctx->pc = 0x217b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x217b74: 0x3c10003c
    ctx->pc = 0x217b74u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217b78: 0x8e02d0b0
    ctx->pc = 0x217b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955184)));
    // 0x217b7c: 0x14400016
    ctx->pc = 0x217B7Cu;
    {
        const bool branch_taken_0x217b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217B80u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x217b7c) {
            ctx->pc = 0x217BD8u;
            goto label_217bd8;
        }
    }
    ctx->pc = 0x217B84u;
    // 0x217b84: 0x3c04003a
    ctx->pc = 0x217b84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x217b88: 0x24845bf8
    ctx->pc = 0x217b88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23544));
    // 0x217b8c: 0x282d
    ctx->pc = 0x217b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b90: 0xc0b1ba8
    ctx->pc = 0x217B90u;
    SET_GPR_U32(ctx, 31, 0x217B98u);
    ctx->pc = 0x217B94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B98u; }
    }
    if (ctx->pc != 0x217B98u) { return; }
    ctx->pc = 0x217B98u;
    // 0x217b98: 0x3c030037
    ctx->pc = 0x217b98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x217b9c: 0x8c64319c
    ctx->pc = 0x217b9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12700)));
    // 0x217ba0: 0x40282d
    ctx->pc = 0x217ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ba4: 0x302d
    ctx->pc = 0x217ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ba8: 0x382d
    ctx->pc = 0x217ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bac: 0x24080200
    ctx->pc = 0x217bacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x217bb0: 0xc0b0b54
    ctx->pc = 0x217BB0u;
    SET_GPR_U32(ctx, 31, 0x217BB8u);
    ctx->pc = 0x217BB4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BB8u; }
    }
    if (ctx->pc != 0x217BB8u) { return; }
    ctx->pc = 0x217BB8u;
    // 0x217bb8: 0xae02d0b0
    ctx->pc = 0x217bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955184), GPR_U32(ctx, 2));
    // 0x217bbc: 0x3c01bf80
    ctx->pc = 0x217bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x217bc0: 0x44816000
    ctx->pc = 0x217bc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x217bc4: 0xc0b0dd6
    ctx->pc = 0x217BC4u;
    SET_GPR_U32(ctx, 31, 0x217BCCu);
    ctx->pc = 0x217BC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BCCu; }
    }
    if (ctx->pc != 0x217BCCu) { return; }
    ctx->pc = 0x217BCCu;
    // 0x217bcc: 0x8e02d0b0
    ctx->pc = 0x217bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955184)));
    // 0x217bd0: 0x1040000c
    ctx->pc = 0x217BD0u;
    {
        const bool branch_taken_0x217bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217BD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x217bd0) {
            ctx->pc = 0x217C04u;
            goto label_217c04;
        }
    }
    ctx->pc = 0x217BD8u;
label_217bd8:
    // 0x217bd8: 0x3c04003c
    ctx->pc = 0x217bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x217bdc: 0x3c030032
    ctx->pc = 0x217bdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x217be0: 0x2463f858
    ctx->pc = 0x217be0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x217be4: 0x3c02003c
    ctx->pc = 0x217be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217be8: 0x8c42cf30
    ctx->pc = 0x217be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954800)));
    // 0x217bec: 0x21080
    ctx->pc = 0x217becu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217bf0: 0x431021
    ctx->pc = 0x217bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217bf4: 0x8c84d0b0
    ctx->pc = 0x217bf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294955184)));
    // 0x217bf8: 0xc0b0f40
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C00u; }
    }
    if (ctx->pc != 0x217C00u) { return; }
    ctx->pc = 0x217C00u;
    // 0x217c00: 0x3c020032
    ctx->pc = 0x217c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_217c04:
    // 0x217c04: 0x8c43f974
    ctx->pc = 0x217c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965620)));
    // 0x217c08: 0x10600005
    ctx->pc = 0x217C08u;
    {
        const bool branch_taken_0x217c08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x217C0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x217c08) {
            ctx->pc = 0x217C20u;
            goto label_217c20;
        }
    }
    ctx->pc = 0x217C10u;
    // 0x217c10: 0x94620008
    ctx->pc = 0x217c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217c14: 0x3042fffd
    ctx->pc = 0x217c14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65533));
    // 0x217c18: 0xa4620008
    ctx->pc = 0x217c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x217c1c: 0x3c020032
    ctx->pc = 0x217c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_217c20:
    // 0x217c20: 0x8c42f970
    ctx->pc = 0x217c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965616)));
    // 0x217c24: 0x28420002
    ctx->pc = 0x217c24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x217c28: 0x14400035
    ctx->pc = 0x217C28u;
    {
        const bool branch_taken_0x217c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217C2Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x217c28) {
            ctx->pc = 0x217D00u;
            goto label_217d00;
        }
    }
    ctx->pc = 0x217C30u;
    // 0x217c30: 0x3c02003c
    ctx->pc = 0x217c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217c34: 0x8c42d0b8
    ctx->pc = 0x217c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955192)));
    // 0x217c38: 0x1440002b
    ctx->pc = 0x217C38u;
    {
        const bool branch_taken_0x217c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217C3Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955188)));
        if (branch_taken_0x217c38) {
            ctx->pc = 0x217CE8u;
            goto label_217ce8;
        }
    }
    ctx->pc = 0x217C40u;
    // 0x217c40: 0xc0ab56c
    ctx->pc = 0x217C40u;
    SET_GPR_U32(ctx, 31, 0x217C48u);
    ctx->pc = 0x217C44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetTexMipK_0x2ad5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C48u; }
    }
    if (ctx->pc != 0x217C48u) { return; }
    ctx->pc = 0x217C48u;
    // 0x217c48: 0x882d
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c4c: 0x3c1e0037
    ctx->pc = 0x217c4cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)55 << 16));
    // 0x217c50: 0x3c020032
    ctx->pc = 0x217c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217c54: 0x2457f8e8
    ctx->pc = 0x217c54u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294965480));
    // 0x217c58: 0x3c020032
    ctx->pc = 0x217c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217c5c: 0x2455f8ea
    ctx->pc = 0x217c5cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294965482));
    // 0x217c60: 0x3c020032
    ctx->pc = 0x217c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217c64: 0x2454f958
    ctx->pc = 0x217c64u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x217c68: 0x3c020032
    ctx->pc = 0x217c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217c6c: 0x2453f95a
    ctx->pc = 0x217c6cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965594));
    // 0x217c70: 0x3c02003c
    ctx->pc = 0x217c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217c74: 0x2452d0b8
    ctx->pc = 0x217c74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294955192));
    // 0x217c78: 0x111100
    ctx->pc = 0x217c78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x217c7c: 0x0
    ctx->pc = 0x217c7cu;
    // NOP
label_217c80:
    // 0x217c80: 0x573021
    ctx->pc = 0x217c80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x217c84: 0x551021
    ctx->pc = 0x217c84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x217c88: 0x118080
    ctx->pc = 0x217c88u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    // 0x217c8c: 0x2141821
    ctx->pc = 0x217c8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x217c90: 0x2134821
    ctx->pc = 0x217c90u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x217c94: 0x8fc43198
    ctx->pc = 0x217c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12696)));
    // 0x217c98: 0x282d
    ctx->pc = 0x217c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c9c: 0x84c60000
    ctx->pc = 0x217c9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217ca0: 0x84470000
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217ca4: 0x84680000
    ctx->pc = 0x217ca4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217ca8: 0xc0b0b54
    ctx->pc = 0x217CA8u;
    SET_GPR_U32(ctx, 31, 0x217CB0u);
    ctx->pc = 0x217CACu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CB0u; }
    }
    if (ctx->pc != 0x217CB0u) { return; }
    ctx->pc = 0x217CB0u;
    // 0x217cb0: 0x2128021
    ctx->pc = 0x217cb0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x217cb4: 0xae020000
    ctx->pc = 0x217cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x217cb8: 0x40202d
    ctx->pc = 0x217cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cbc: 0x3c05ffff
    ctx->pc = 0x217cbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x217cc0: 0x34a5ffff
    ctx->pc = 0x217cc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x217cc4: 0x3c060100
    ctx->pc = 0x217cc4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
    // 0x217cc8: 0xc0b0caa
    ctx->pc = 0x217CC8u;
    SET_GPR_U32(ctx, 31, 0x217CD0u);
    ctx->pc = 0x217CCCu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 512));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CD0u; }
    }
    if (ctx->pc != 0x217CD0u) { return; }
    ctx->pc = 0x217CD0u;
    // 0x217cd0: 0x26310001
    ctx->pc = 0x217cd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x217cd4: 0x2a220006
    ctx->pc = 0x217cd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
    // 0x217cd8: 0x1440ffe9
    ctx->pc = 0x217CD8u;
    {
        const bool branch_taken_0x217cd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217CDCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x217cd8) {
            ctx->pc = 0x217C80u;
            goto label_217c80;
        }
    }
    ctx->pc = 0x217CE0u;
    // 0x217ce0: 0x3c10003c
    ctx->pc = 0x217ce0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217ce4: 0x8e04d0b4
    ctx->pc = 0x217ce4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955188)));
label_217ce8:
    // 0x217ce8: 0x10800029
    ctx->pc = 0x217CE8u;
    {
        const bool branch_taken_0x217ce8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x217CECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x217ce8) {
            ctx->pc = 0x217D90u;
            goto label_217d90;
        }
    }
    ctx->pc = 0x217CF0u;
    // 0x217cf0: 0xc0b0b38
    ctx->pc = 0x217CF0u;
    SET_GPR_U32(ctx, 31, 0x217CF8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217CF8u; }
    }
    if (ctx->pc != 0x217CF8u) { return; }
    ctx->pc = 0x217CF8u;
    // 0x217cf8: 0x10000024
    ctx->pc = 0x217CF8u;
    {
        const bool branch_taken_0x217cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294955188), GPR_U32(ctx, 0));
        if (branch_taken_0x217cf8) {
            ctx->pc = 0x217D8Cu;
            goto label_217d8c;
        }
    }
    ctx->pc = 0x217D00u;
label_217d00:
    // 0x217d00: 0x8e02d0b4
    ctx->pc = 0x217d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294955188)));
    // 0x217d04: 0x14400012
    ctx->pc = 0x217D04u;
    {
        const bool branch_taken_0x217d04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217D08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x217d04) {
            ctx->pc = 0x217D50u;
            goto label_217d50;
        }
    }
    ctx->pc = 0x217D0Cu;
    // 0x217d0c: 0x3c020037
    ctx->pc = 0x217d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x217d10: 0x8c443198
    ctx->pc = 0x217d10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12696)));
    // 0x217d14: 0x282d
    ctx->pc = 0x217d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d18: 0x24060100
    ctx->pc = 0x217d18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x217d1c: 0x24070040
    ctx->pc = 0x217d1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    // 0x217d20: 0x2408fffe
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x217d24: 0xc0b0b54
    ctx->pc = 0x217D24u;
    SET_GPR_U32(ctx, 31, 0x217D2Cu);
    ctx->pc = 0x217D28u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D2Cu; }
    }
    if (ctx->pc != 0x217D2Cu) { return; }
    ctx->pc = 0x217D2Cu;
    // 0x217d2c: 0xae02d0b4
    ctx->pc = 0x217d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955188), GPR_U32(ctx, 2));
    // 0x217d30: 0x40202d
    ctx->pc = 0x217d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d34: 0x3c05ffff
    ctx->pc = 0x217d34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x217d38: 0x34a5ffff
    ctx->pc = 0x217d38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x217d3c: 0xc0b0caa
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x217D40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D44u; }
    }
    if (ctx->pc != 0x217D44u) { return; }
    ctx->pc = 0x217D44u;
    // 0x217d44: 0x3c02003c
    ctx->pc = 0x217d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217d48: 0xac40cf30
    ctx->pc = 0x217d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954800), GPR_U32(ctx, 0));
    // 0x217d4c: 0x3c02003c
    ctx->pc = 0x217d4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_217d50:
    // 0x217d50: 0x8c42d0b8
    ctx->pc = 0x217d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955192)));
    // 0x217d54: 0x1040000d
    ctx->pc = 0x217D54u;
    {
        const bool branch_taken_0x217d54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217D58u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x217d54) {
            ctx->pc = 0x217D8Cu;
            goto label_217d8c;
        }
    }
    ctx->pc = 0x217D5Cu;
    // 0x217d5c: 0x3c02003c
    ctx->pc = 0x217d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217d60: 0x2450d0b8
    ctx->pc = 0x217d60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294955192));
    // 0x217d64: 0x111080
    ctx->pc = 0x217d64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_217d68:
    // 0x217d68: 0x501021
    ctx->pc = 0x217d68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217d6c: 0xc0b0b38
    ctx->pc = 0x217D6Cu;
    SET_GPR_U32(ctx, 31, 0x217D74u);
    ctx->pc = 0x217D70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217D74u; }
    }
    if (ctx->pc != 0x217D74u) { return; }
    ctx->pc = 0x217D74u;
    // 0x217d74: 0x26310001
    ctx->pc = 0x217d74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x217d78: 0x2a220006
    ctx->pc = 0x217d78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
    // 0x217d7c: 0x1440fffa
    ctx->pc = 0x217D7Cu;
    {
        const bool branch_taken_0x217d7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217D80u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x217d7c) {
            ctx->pc = 0x217D68u;
            goto label_217d68;
        }
    }
    ctx->pc = 0x217D84u;
    // 0x217d84: 0x3c02003c
    ctx->pc = 0x217d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217d88: 0xac40d0b8
    ctx->pc = 0x217d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955192), GPR_U32(ctx, 0));
label_217d8c:
    // 0x217d8c: 0x3c030032
    ctx->pc = 0x217d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_217d90:
    // 0x217d90: 0x2463f7e8
    ctx->pc = 0x217d90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965224));
    // 0x217d94: 0x3c02003c
    ctx->pc = 0x217d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217d98: 0x8c42cf30
    ctx->pc = 0x217d98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954800)));
    // 0x217d9c: 0x2404000c
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x217da0: 0x441018
    ctx->pc = 0x217da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x217da4: 0x432021
    ctx->pc = 0x217da4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217da8: 0x622821
    ctx->pc = 0x217da8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217dac: 0xa0182d
    ctx->pc = 0x217dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217db0: 0x8c840000
    ctx->pc = 0x217db0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217db4: 0x8ca50004
    ctx->pc = 0x217db4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217db8: 0xc0b1734
    ctx->pc = 0x217DB8u;
    SET_GPR_U32(ctx, 31, 0x217DC0u);
    ctx->pc = 0x217DBCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DC0u; }
    }
    if (ctx->pc != 0x217DC0u) { return; }
    ctx->pc = 0x217DC0u;
    // 0x217dc0: 0x3c110032
    ctx->pc = 0x217dc0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x217dc4: 0x3c02003c
    ctx->pc = 0x217dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217dc8: 0x202d
    ctx->pc = 0x217dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dcc: 0x282d
    ctx->pc = 0x217dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dd0: 0x8e26f8d0
    ctx->pc = 0x217dd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x217dd4: 0x382d
    ctx->pc = 0x217dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217dd8: 0xc085a1e
    ctx->pc = 0x217DD8u;
    SET_GPR_U32(ctx, 31, 0x217DE0u);
    ctx->pc = 0x217DDCu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294954824)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DE0u; }
    }
    if (ctx->pc != 0x217DE0u) { return; }
    ctx->pc = 0x217DE0u;
    // 0x217de0: 0xae22f8d0
    ctx->pc = 0x217de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965456), GPR_U32(ctx, 2));
    // 0x217de4: 0x3c03003c
    ctx->pc = 0x217de4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x217de8: 0x2470cf90
    ctx->pc = 0x217de8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x217dec: 0x21880
    ctx->pc = 0x217decu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x217df0: 0x701821
    ctx->pc = 0x217df0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x217df4: 0x8c730000
    ctx->pc = 0x217df4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217df8: 0x8fa40078
    ctx->pc = 0x217df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x217dfc: 0x8c830038
    ctx->pc = 0x217dfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x217e00: 0x21100
    ctx->pc = 0x217e00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x217e04: 0x622021
    ctx->pc = 0x217e04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217e08: 0x80182d
    ctx->pc = 0x217e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e0c: 0x8c620010
    ctx->pc = 0x217e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x217e10: 0x1440004c
    ctx->pc = 0x217E10u;
    {
        const bool branch_taken_0x217e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217E14u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x217e10) {
            ctx->pc = 0x217F44u;
            goto label_217f44;
        }
    }
    ctx->pc = 0x217E18u;
    // 0x217e18: 0x24040001
    ctx->pc = 0x217e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217e1c: 0x282d
    ctx->pc = 0x217e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e20: 0x260302d
    ctx->pc = 0x217e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e24: 0x382d
    ctx->pc = 0x217e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e28: 0xc085a1e
    ctx->pc = 0x217E28u;
    SET_GPR_U32(ctx, 31, 0x217E30u);
    ctx->pc = 0x217E2Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E30u; }
    }
    if (ctx->pc != 0x217E30u) { return; }
    ctx->pc = 0x217E30u;
    // 0x217e30: 0x8e23f8d0
    ctx->pc = 0x217e30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x217e34: 0x31880
    ctx->pc = 0x217e34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x217e38: 0x701821
    ctx->pc = 0x217e38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x217e3c: 0xac620000
    ctx->pc = 0x217e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x217e40: 0x24040004
    ctx->pc = 0x217e40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x217e44: 0x282d
    ctx->pc = 0x217e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e48: 0x40302d
    ctx->pc = 0x217e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e4c: 0x2407000a
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x217e50: 0x402d
    ctx->pc = 0x217e50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e54: 0xc0859d6
    ctx->pc = 0x217E54u;
    SET_GPR_U32(ctx, 31, 0x217E5Cu);
    ctx->pc = 0x217E58u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x216758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModD_0x216758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E5Cu; }
    }
    if (ctx->pc != 0x217E5Cu) { return; }
    ctx->pc = 0x217E5Cu;
    // 0x217e5c: 0x40282d
    ctx->pc = 0x217e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e60: 0x8e24f8d0
    ctx->pc = 0x217e60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294965456)));
    // 0x217e64: 0x41080
    ctx->pc = 0x217e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x217e68: 0x501021
    ctx->pc = 0x217e68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217e6c: 0x10b3000b
    ctx->pc = 0x217E6Cu;
    {
        const bool branch_taken_0x217e6c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 19));
        ctx->pc = 0x217E70u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x217e6c) {
            ctx->pc = 0x217E9Cu;
            goto label_217e9c;
        }
    }
    ctx->pc = 0x217E74u;
    // 0x217e74: 0x30a2ffff
    ctx->pc = 0x217e74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x217e78: 0x42400
    ctx->pc = 0x217e78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x217e7c: 0xc0b1b44
    ctx->pc = 0x217E7Cu;
    SET_GPR_U32(ctx, 31, 0x217E84u);
    ctx->pc = 0x217E80u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2C6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_GetTextureName_0x2c6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E84u; }
    }
    if (ctx->pc != 0x217E84u) { return; }
    ctx->pc = 0x217E84u;
    // 0x217e84: 0x3c04003a
    ctx->pc = 0x217e84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x217e88: 0x24846028
    ctx->pc = 0x217e88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24616));
    // 0x217e8c: 0xc0bed0a
    ctx->pc = 0x217E8Cu;
    SET_GPR_U32(ctx, 31, 0x217E94u);
    ctx->pc = 0x217E90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E94u; }
    }
    if (ctx->pc != 0x217E94u) { return; }
    ctx->pc = 0x217E94u;
    // 0x217e94: 0x3c02003c
    ctx->pc = 0x217e94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217e98: 0xac40d0fc
    ctx->pc = 0x217e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955260), GPR_U32(ctx, 0));
label_217e9c:
    // 0x217e9c: 0x3c020032
    ctx->pc = 0x217e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217ea0: 0x8c42f970
    ctx->pc = 0x217ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965616)));
    // 0x217ea4: 0x28420002
    ctx->pc = 0x217ea4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x217ea8: 0x14400019
    ctx->pc = 0x217EA8u;
    {
        const bool branch_taken_0x217ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217EACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x217ea8) {
            ctx->pc = 0x217F10u;
            goto label_217f10;
        }
    }
    ctx->pc = 0x217EB0u;
    // 0x217eb0: 0x882d
    ctx->pc = 0x217eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217eb4: 0x3c02003c
    ctx->pc = 0x217eb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217eb8: 0x2454d0b8
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294955192));
    // 0x217ebc: 0x3c02003c
    ctx->pc = 0x217ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217ec0: 0x2453cf90
    ctx->pc = 0x217ec0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x217ec4: 0x3c100032
    ctx->pc = 0x217ec4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x217ec8: 0x111880
    ctx->pc = 0x217ec8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x217ecc: 0x0
    ctx->pc = 0x217eccu;
    // NOP
label_217ed0:
    // 0x217ed0: 0x741821
    ctx->pc = 0x217ed0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x217ed4: 0x8e05f8d0
    ctx->pc = 0x217ed4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294965456)));
    // 0x217ed8: 0x51080
    ctx->pc = 0x217ed8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x217edc: 0x531021
    ctx->pc = 0x217edcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x217ee0: 0x94420000
    ctx->pc = 0x217ee0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217ee4: 0x52c00
    ctx->pc = 0x217ee4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x217ee8: 0x8c640000
    ctx->pc = 0x217ee8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217eec: 0x452825
    ctx->pc = 0x217eecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x217ef0: 0xc0b0ed6
    ctx->pc = 0x217EF0u;
    SET_GPR_U32(ctx, 31, 0x217EF8u);
    ctx->pc = 0x217EF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF8u; }
    }
    if (ctx->pc != 0x217EF8u) { return; }
    ctx->pc = 0x217EF8u;
    // 0x217ef8: 0x26310001
    ctx->pc = 0x217ef8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x217efc: 0x2a220006
    ctx->pc = 0x217efcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
    // 0x217f00: 0x1440fff3
    ctx->pc = 0x217F00u;
    {
        const bool branch_taken_0x217f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217F04u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x217f00) {
            ctx->pc = 0x217ED0u;
            goto label_217ed0;
        }
    }
    ctx->pc = 0x217F08u;
    // 0x217f08: 0x1000000f
    ctx->pc = 0x217F08u;
    {
        const bool branch_taken_0x217f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217F0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x217f08) {
            ctx->pc = 0x217F48u;
            goto label_217f48;
        }
    }
    ctx->pc = 0x217F10u;
label_217f10:
    // 0x217f10: 0x8c44d0b4
    ctx->pc = 0x217f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955188)));
    // 0x217f14: 0x1080000b
    ctx->pc = 0x217F14u;
    {
        const bool branch_taken_0x217f14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x217F18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x217f14) {
            ctx->pc = 0x217F44u;
            goto label_217f44;
        }
    }
    ctx->pc = 0x217F1Cu;
    // 0x217f1c: 0x2463cf90
    ctx->pc = 0x217f1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x217f20: 0x3c020032
    ctx->pc = 0x217f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217f24: 0x8c45f8d0
    ctx->pc = 0x217f24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x217f28: 0x51080
    ctx->pc = 0x217f28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x217f2c: 0x431021
    ctx->pc = 0x217f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217f30: 0x94420000
    ctx->pc = 0x217f30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217f34: 0x52c00
    ctx->pc = 0x217f34u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x217f38: 0x452825
    ctx->pc = 0x217f38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x217f3c: 0xc0b0ed6
    ctx->pc = 0x217F3Cu;
    SET_GPR_U32(ctx, 31, 0x217F44u);
    ctx->pc = 0x217F40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F44u; }
    }
    if (ctx->pc != 0x217F44u) { return; }
    ctx->pc = 0x217F44u;
label_217f44:
    // 0x217f44: 0x3c02003c
    ctx->pc = 0x217f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_217f48:
    // 0x217f48: 0x8c42cf48
    ctx->pc = 0x217f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954824)));
    // 0x217f4c: 0x1840001c
    ctx->pc = 0x217F4Cu;
    {
        const bool branch_taken_0x217f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x217F50u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x217f4c) {
            ctx->pc = 0x217FC0u;
            goto label_217fc0;
        }
    }
    ctx->pc = 0x217F54u;
    // 0x217f54: 0x3c15003a
    ctx->pc = 0x217f54u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x217f58: 0x3c140032
    ctx->pc = 0x217f58u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x217f5c: 0x3c1300ff
    ctx->pc = 0x217f5cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)255 << 16));
    // 0x217f60: 0x3673ff00
    ctx->pc = 0x217f60u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65280));
    // 0x217f64: 0x3c10003c
    ctx->pc = 0x217f64u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217f68: 0x3a0202d
    ctx->pc = 0x217f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f6c: 0x0
    ctx->pc = 0x217f6cu;
    // NOP
label_217f70:
    // 0x217f70: 0x26a55c10
    ctx->pc = 0x217f70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 23568));
    // 0x217f74: 0xc0b6252
    ctx->pc = 0x217F74u;
    SET_GPR_U32(ctx, 31, 0x217F7Cu);
    ctx->pc = 0x217F78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217F7Cu; }
    }
    if (ctx->pc != 0x217F7Cu) { return; }
    ctx->pc = 0x217F7Cu;
    // 0x217f7c: 0x8e82f8d0
    ctx->pc = 0x217f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294965456)));
    // 0x217f80: 0x3c0400ff
    ctx->pc = 0x217f80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x217f84: 0x3484ffff
    ctx->pc = 0x217f84u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x217f88: 0x2221026
    ctx->pc = 0x217f88u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x217f8c: 0x262200a
    ctx->pc = 0x217f8cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 19));
    // 0x217f90: 0x8fa5007c
    ctx->pc = 0x217f90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x217f94: 0x24060002
    ctx->pc = 0x217f94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x217f98: 0xc0b4724
    ctx->pc = 0x217F98u;
    SET_GPR_U32(ctx, 31, 0x217FA0u);
    ctx->pc = 0x217F9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FA0u; }
    }
    if (ctx->pc != 0x217FA0u) { return; }
    ctx->pc = 0x217FA0u;
    // 0x217fa0: 0x8fa2007c
    ctx->pc = 0x217fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x217fa4: 0x24420004
    ctx->pc = 0x217fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x217fa8: 0xafa2007c
    ctx->pc = 0x217fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x217fac: 0x26310001
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x217fb0: 0x8e02cf48
    ctx->pc = 0x217fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954824)));
    // 0x217fb4: 0x222102a
    ctx->pc = 0x217fb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x217fb8: 0x1440ffed
    ctx->pc = 0x217FB8u;
    {
        const bool branch_taken_0x217fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x217FBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x217fb8) {
            ctx->pc = 0x217F70u;
            goto label_217f70;
        }
    }
    ctx->pc = 0x217FC0u;
label_217fc0:
    // 0x217fc0: 0x82420020
    ctx->pc = 0x217fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x217fc4: 0x1040000a
    ctx->pc = 0x217FC4u;
    {
        const bool branch_taken_0x217fc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217FC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x217fc4) {
            ctx->pc = 0x217FF0u;
            goto label_217ff0;
        }
    }
    ctx->pc = 0x217FCCu;
    // 0x217fcc: 0xc0bf306
    ctx->pc = 0x217FCCu;
    SET_GPR_U32(ctx, 31, 0x217FD4u);
    ctx->pc = 0x217FD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FD4u; }
    }
    if (ctx->pc != 0x217FD4u) { return; }
    ctx->pc = 0x217FD4u;
    // 0x217fd4: 0x2405003d
    ctx->pc = 0x217fd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 61));
    // 0x217fd8: 0x3c0400ff
    ctx->pc = 0x217fd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x217fdc: 0x3484ff00
    ctx->pc = 0x217fdcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x217fe0: 0xa22823
    ctx->pc = 0x217fe0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217fe4: 0x24060003
    ctx->pc = 0x217fe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x217fe8: 0xc0b4724
    ctx->pc = 0x217FE8u;
    SET_GPR_U32(ctx, 31, 0x217FF0u);
    ctx->pc = 0x217FECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217FF0u; }
    }
    if (ctx->pc != 0x217FF0u) { return; }
    ctx->pc = 0x217FF0u;
label_217ff0:
    // 0x217ff0: 0x3c02003c
    ctx->pc = 0x217ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217ff4: 0x2451cf90
    ctx->pc = 0x217ff4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294954896));
    // 0x217ff8: 0x3c100032
    ctx->pc = 0x217ff8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x217ffc: 0x8e05f8d0
    ctx->pc = 0x217ffcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294965456)));
    // 0x218000: 0x8fa30078
    ctx->pc = 0x218000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x218004: 0x8c620038
    ctx->pc = 0x218004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x218008: 0x51900
    ctx->pc = 0x218008u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x21800c: 0x431021
    ctx->pc = 0x21800cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218010: 0x8c420010
    ctx->pc = 0x218010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x218014: 0x14400032
    ctx->pc = 0x218014u;
    {
        const bool branch_taken_0x218014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218018u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218014) {
            ctx->pc = 0x2180E0u;
            goto label_2180e0;
        }
    }
    ctx->pc = 0x21801Cu;
    // 0x21801c: 0xc085e3e
    ctx->pc = 0x21801Cu;
    SET_GPR_U32(ctx, 31, 0x218024u);
    ctx->pc = 0x218020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2178F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispTexMenu_0x2178f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218024u; }
    }
    if (ctx->pc != 0x218024u) { return; }
    ctx->pc = 0x218024u;
    // 0x218024: 0x3c0400ff
    ctx->pc = 0x218024u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218028: 0xc0b46e2
    ctx->pc = 0x218028u;
    SET_GPR_U32(ctx, 31, 0x218030u);
    ctx->pc = 0x21802Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218030u; }
    }
    if (ctx->pc != 0x218030u) { return; }
    ctx->pc = 0x218030u;
    // 0x218030: 0x40982d
    ctx->pc = 0x218030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218034: 0x8e420048
    ctx->pc = 0x218034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x218038: 0x10400008
    ctx->pc = 0x218038u;
    {
        const bool branch_taken_0x218038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21803Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965456)));
        if (branch_taken_0x218038) {
            ctx->pc = 0x21805Cu;
            goto label_21805c;
        }
    }
    ctx->pc = 0x218040u;
    // 0x218040: 0x21080
    ctx->pc = 0x218040u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x218044: 0x511021
    ctx->pc = 0x218044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x218048: 0x8c420000
    ctx->pc = 0x218048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21804c: 0x21180
    ctx->pc = 0x21804cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x218050: 0x8e430058
    ctx->pc = 0x218050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x218054: 0x10000002
    ctx->pc = 0x218054u;
    {
        const bool branch_taken_0x218054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218058u;
        SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x218054) {
            ctx->pc = 0x218060u;
            goto label_218060;
        }
    }
    ctx->pc = 0x21805Cu;
label_21805c:
    // 0x21805c: 0xb02d
    ctx->pc = 0x21805cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218060:
    // 0x218060: 0x12c0001c
    ctx->pc = 0x218060u;
    {
        const bool branch_taken_0x218060 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x218060) {
            ctx->pc = 0x2180D4u;
            goto label_2180d4;
        }
    }
    ctx->pc = 0x218068u;
    // 0x218068: 0x96d00016
    ctx->pc = 0x218068u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
    // 0x21806c: 0x96d10018
    ctx->pc = 0x21806cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x218070: 0x82d20001
    ctx->pc = 0x218070u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x218074: 0xc085e8e
    ctx->pc = 0x218074u;
    SET_GPR_U32(ctx, 31, 0x21807Cu);
    ctx->pc = 0x218078u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x217A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        tex_fmt_desc_0x217a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21807Cu; }
    }
    if (ctx->pc != 0x21807Cu) { return; }
    ctx->pc = 0x21807Cu;
    // 0x21807c: 0x3c0400ff
    ctx->pc = 0x21807cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218080: 0x3484ffff
    ctx->pc = 0x218080u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x218084: 0x24050008
    ctx->pc = 0x218084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x218088: 0x2406002a
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 42));
    // 0x21808c: 0x3c07003a
    ctx->pc = 0x21808cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x218090: 0x24e76030
    ctx->pc = 0x218090u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24624));
    // 0x218094: 0x200402d
    ctx->pc = 0x218094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218098: 0x220482d
    ctx->pc = 0x218098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21809c: 0x240502d
    ctx->pc = 0x21809cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180a0: 0xc0b4724
    ctx->pc = 0x2180A0u;
    SET_GPR_U32(ctx, 31, 0x2180A8u);
    ctx->pc = 0x2180A4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180A8u; }
    }
    if (ctx->pc != 0x2180A8u) { return; }
    ctx->pc = 0x2180A8u;
    // 0x2180a8: 0x3c020032
    ctx->pc = 0x2180a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2180ac: 0x8c42f974
    ctx->pc = 0x2180acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965620)));
    // 0x2180b0: 0x10400008
    ctx->pc = 0x2180B0u;
    {
        const bool branch_taken_0x2180b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2180b0) {
            ctx->pc = 0x2180D4u;
            goto label_2180d4;
        }
    }
    ctx->pc = 0x2180B8u;
    // 0x2180b8: 0xc0b46e2
    ctx->pc = 0x2180B8u;
    SET_GPR_U32(ctx, 31, 0x2180C0u);
    ctx->pc = 0x2180BCu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180C0u; }
    }
    if (ctx->pc != 0x2180C0u) { return; }
    ctx->pc = 0x2180C0u;
    // 0x2180c0: 0x2404001e
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2180c4: 0x2405002b
    ctx->pc = 0x2180c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 43));
    // 0x2180c8: 0x3c06003a
    ctx->pc = 0x2180c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2180cc: 0xc0b46ea
    ctx->pc = 0x2180CCu;
    SET_GPR_U32(ctx, 31, 0x2180D4u);
    ctx->pc = 0x2180D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24656));
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180D4u; }
    }
    if (ctx->pc != 0x2180D4u) { return; }
    ctx->pc = 0x2180D4u;
label_2180d4:
    // 0x2180d4: 0xc0b46e2
    ctx->pc = 0x2180D4u;
    SET_GPR_U32(ctx, 31, 0x2180DCu);
    ctx->pc = 0x2180D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_set_color_0x2d1b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180DCu; }
    }
    if (ctx->pc != 0x2180DCu) { return; }
    ctx->pc = 0x2180DCu;
    // 0x2180dc: 0x3c02003c
    ctx->pc = 0x2180dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2180e0:
    // 0x2180e0: 0x8c44d0b4
    ctx->pc = 0x2180e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955188)));
    // 0x2180e4: 0x10800027
    ctx->pc = 0x2180E4u;
    {
        const bool branch_taken_0x2180e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2180E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
        if (branch_taken_0x2180e4) {
            ctx->pc = 0x218184u;
            goto label_218184;
        }
    }
    ctx->pc = 0x2180ECu;
    // 0x2180ec: 0x27a60074
    ctx->pc = 0x2180ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 116));
    // 0x2180f0: 0xc0b0e24
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3890u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetPos_0x2c3890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2180F8u; }
    }
    if (ctx->pc != 0x2180F8u) { return; }
    ctx->pc = 0x2180F8u;
    // 0x2180f8: 0x3c02003c
    ctx->pc = 0x2180f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2180fc: 0x8c42cefc
    ctx->pc = 0x2180fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954748)));
    // 0x218100: 0x30420003
    ctx->pc = 0x218100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x218104: 0x10400003
    ctx->pc = 0x218104u;
    {
        const bool branch_taken_0x218104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218108u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x218104) {
            ctx->pc = 0x218114u;
            goto label_218114;
        }
    }
    ctx->pc = 0x21810Cu;
    // 0x21810c: 0x2442ffff
    ctx->pc = 0x21810cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218110: 0xafa20070
    ctx->pc = 0x218110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_218114:
    // 0x218114: 0x3c02003c
    ctx->pc = 0x218114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218118: 0x8c42cefc
    ctx->pc = 0x218118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954748)));
    // 0x21811c: 0x3042000c
    ctx->pc = 0x21811cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x218120: 0x10400003
    ctx->pc = 0x218120u;
    {
        const bool branch_taken_0x218120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218124u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x218120) {
            ctx->pc = 0x218130u;
            goto label_218130;
        }
    }
    ctx->pc = 0x218128u;
    // 0x218128: 0x24420001
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21812c: 0xafa20070
    ctx->pc = 0x21812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_218130:
    // 0x218130: 0x3c02003c
    ctx->pc = 0x218130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218134: 0x8c42cefc
    ctx->pc = 0x218134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954748)));
    // 0x218138: 0x30420030
    ctx->pc = 0x218138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x21813c: 0x10400003
    ctx->pc = 0x21813Cu;
    {
        const bool branch_taken_0x21813c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218140u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 116)));
        if (branch_taken_0x21813c) {
            ctx->pc = 0x21814Cu;
            goto label_21814c;
        }
    }
    ctx->pc = 0x218144u;
    // 0x218144: 0x24420001
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x218148: 0xafa20074
    ctx->pc = 0x218148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_21814c:
    // 0x21814c: 0x3c02003c
    ctx->pc = 0x21814cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218150: 0x8c42cefc
    ctx->pc = 0x218150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954748)));
    // 0x218154: 0x304200c0
    ctx->pc = 0x218154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x218158: 0x10400003
    ctx->pc = 0x218158u;
    {
        const bool branch_taken_0x218158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21815Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 116)));
        if (branch_taken_0x218158) {
            ctx->pc = 0x218168u;
            goto label_218168;
        }
    }
    ctx->pc = 0x218160u;
    // 0x218160: 0x2442ffff
    ctx->pc = 0x218160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218164: 0xafa20074
    ctx->pc = 0x218164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_218168:
    // 0x218168: 0x3c02003c
    ctx->pc = 0x218168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21816c: 0x8c44d0b4
    ctx->pc = 0x21816cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955188)));
    // 0x218170: 0x8fa50070
    ctx->pc = 0x218170u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218174: 0x3c01bf80
    ctx->pc = 0x218174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x218178: 0x44816000
    ctx->pc = 0x218178u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x21817c: 0xc0b0df2
    ctx->pc = 0x21817Cu;
    SET_GPR_U32(ctx, 31, 0x218184u);
    ctx->pc = 0x218180u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218184u; }
    }
    if (ctx->pc != 0x218184u) { return; }
    ctx->pc = 0x218184u;
label_218184:
    // 0x218184: 0x3c02003c
    ctx->pc = 0x218184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218188: 0x8c42cef8
    ctx->pc = 0x218188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
    // 0x21818c: 0x3c030100
    ctx->pc = 0x21818cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x218190: 0x431024
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218194: 0x1040000b
    ctx->pc = 0x218194u;
    {
        const bool branch_taken_0x218194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218198u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x218194) {
            ctx->pc = 0x2181C4u;
            goto label_2181c4;
        }
    }
    ctx->pc = 0x21819Cu;
    // 0x21819c: 0x8c83f970
    ctx->pc = 0x21819cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965616)));
    // 0x2181a0: 0x24020001
    ctx->pc = 0x2181a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2181a4: 0x14620003
    ctx->pc = 0x2181A4u;
    {
        const bool branch_taken_0x2181a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2181A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2181a4) {
            ctx->pc = 0x2181B4u;
            goto label_2181b4;
        }
    }
    ctx->pc = 0x2181ACu;
    // 0x2181ac: 0x10000010
    ctx->pc = 0x2181ACu;
    {
        const bool branch_taken_0x2181ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2181B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2181ac) {
            ctx->pc = 0x2181F0u;
            goto label_2181f0;
        }
    }
    ctx->pc = 0x2181B4u;
label_2181b4:
    // 0x2181b4: 0x5062000f
    ctx->pc = 0x2181B4u;
    {
        const bool branch_taken_0x2181b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2181b4) {
            ctx->pc = 0x2181B8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294965616), GPR_U32(ctx, 0));
            ctx->pc = 0x2181F4u;
            goto label_2181f4;
        }
    }
    ctx->pc = 0x2181BCu;
    // 0x2181bc: 0x1000000e
    ctx->pc = 0x2181BCu;
    {
        const bool branch_taken_0x2181bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2181C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2181bc) {
            ctx->pc = 0x2181F8u;
            goto label_2181f8;
        }
    }
    ctx->pc = 0x2181C4u;
label_2181c4:
    // 0x2181c4: 0x3c030032
    ctx->pc = 0x2181c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2181c8: 0x8c62f970
    ctx->pc = 0x2181c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965616)));
    // 0x2181cc: 0x54400004
    ctx->pc = 0x2181CCu;
    {
        const bool branch_taken_0x2181cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2181cc) {
            ctx->pc = 0x2181D0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965616)));
            ctx->pc = 0x2181E0u;
            goto label_2181e0;
        }
    }
    ctx->pc = 0x2181D4u;
    // 0x2181d4: 0x24020001
    ctx->pc = 0x2181d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2181d8: 0x10000006
    ctx->pc = 0x2181D8u;
    {
        const bool branch_taken_0x2181d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2181DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965616), GPR_U32(ctx, 2));
        if (branch_taken_0x2181d8) {
            ctx->pc = 0x2181F4u;
            goto label_2181f4;
        }
    }
    ctx->pc = 0x2181E0u;
label_2181e0:
    // 0x2181e0: 0x24020002
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2181e4: 0x14620004
    ctx->pc = 0x2181E4u;
    {
        const bool branch_taken_0x2181e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2181E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2181e4) {
            ctx->pc = 0x2181F8u;
            goto label_2181f8;
        }
    }
    ctx->pc = 0x2181ECu;
    // 0x2181ec: 0x24020003
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2181f0:
    // 0x2181f0: 0xac82f970
    ctx->pc = 0x2181f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965616), GPR_U32(ctx, 2));
label_2181f4:
    // 0x2181f4: 0x3c02003c
    ctx->pc = 0x2181f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2181f8:
    // 0x2181f8: 0x8c42cf0c
    ctx->pc = 0x2181f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
    // 0x2181fc: 0x3c030400
    ctx->pc = 0x2181fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x218200: 0x431024
    ctx->pc = 0x218200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218204: 0x1040000b
    ctx->pc = 0x218204u;
    {
        const bool branch_taken_0x218204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218208u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x218204) {
            ctx->pc = 0x218234u;
            goto label_218234;
        }
    }
    ctx->pc = 0x21820Cu;
    // 0x21820c: 0x8e04d0b4
    ctx->pc = 0x21820cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955188)));
    // 0x218210: 0x10800009
    ctx->pc = 0x218210u;
    {
        const bool branch_taken_0x218210 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x218214u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x218210) {
            ctx->pc = 0x218238u;
            goto label_218238;
        }
    }
    ctx->pc = 0x218218u;
    // 0x218218: 0xc0b0ce6
    ctx->pc = 0x218218u;
    SET_GPR_U32(ctx, 31, 0x218220u);
    ctx->pc = 0x2C3398u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetFlags_0x2c3398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218220u; }
    }
    if (ctx->pc != 0x218220u) { return; }
    ctx->pc = 0x218220u;
    // 0x218220: 0x8e04d0b4
    ctx->pc = 0x218220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294955188)));
    // 0x218224: 0x3c05ffff
    ctx->pc = 0x218224u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x218228: 0x34a5ffff
    ctx->pc = 0x218228u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x21822c: 0xc0b0caa
    ctx->pc = 0x21822Cu;
    SET_GPR_U32(ctx, 31, 0x218234u);
    ctx->pc = 0x218230u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 2), 256));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218234u; }
    }
    if (ctx->pc != 0x218234u) { return; }
    ctx->pc = 0x218234u;
label_218234:
    // 0x218234: 0x3c02003c
    ctx->pc = 0x218234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_218238:
    // 0x218238: 0x8c42cf0c
    ctx->pc = 0x218238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
    // 0x21823c: 0x3c030200
    ctx->pc = 0x21823cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x218240: 0x431024
    ctx->pc = 0x218240u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218244: 0x10400007
    ctx->pc = 0x218244u;
    {
        const bool branch_taken_0x218244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218248u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x218244) {
            ctx->pc = 0x218264u;
            goto label_218264;
        }
    }
    ctx->pc = 0x21824Cu;
    // 0x21824c: 0x8c62f974
    ctx->pc = 0x21824cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965620)));
    // 0x218250: 0x10400003
    ctx->pc = 0x218250u;
    {
        const bool branch_taken_0x218250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x218250) {
            ctx->pc = 0x218260u;
            goto label_218260;
        }
    }
    ctx->pc = 0x218258u;
    // 0x218258: 0x10000002
    ctx->pc = 0x218258u;
    {
        const bool branch_taken_0x218258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21825Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965620), GPR_U32(ctx, 0));
        if (branch_taken_0x218258) {
            ctx->pc = 0x218264u;
            goto label_218264;
        }
    }
    ctx->pc = 0x218260u;
label_218260:
    // 0x218260: 0xac56f974
    ctx->pc = 0x218260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965620), GPR_U32(ctx, 22));
label_218264:
    // 0x218264: 0x3c02003c
    ctx->pc = 0x218264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218268: 0x8c42cef8
    ctx->pc = 0x218268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
    // 0x21826c: 0x3c030800
    ctx->pc = 0x21826cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x218270: 0x431024
    ctx->pc = 0x218270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218274: 0x1040000f
    ctx->pc = 0x218274u;
    {
        const bool branch_taken_0x218274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x218278u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x218274) {
            ctx->pc = 0x2182B4u;
            goto label_2182b4;
        }
    }
    ctx->pc = 0x21827Cu;
    // 0x21827c: 0xc0b4026
    ctx->pc = 0x21827Cu;
    SET_GPR_U32(ctx, 31, 0x218284u);
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218284u; }
    }
    if (ctx->pc != 0x218284u) { return; }
    ctx->pc = 0x218284u;
    // 0x218284: 0x3c02003c
    ctx->pc = 0x218284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218288: 0xac40d0b4
    ctx->pc = 0x218288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955188), GPR_U32(ctx, 0));
    // 0x21828c: 0x3c02003c
    ctx->pc = 0x21828cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218290: 0xac40d0b0
    ctx->pc = 0x218290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955184), GPR_U32(ctx, 0));
    // 0x218294: 0x3c02003c
    ctx->pc = 0x218294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x218298: 0xac40d0d8
    ctx->pc = 0x218298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955224), GPR_U32(ctx, 0));
    // 0x21829c: 0x3c02003c
    ctx->pc = 0x21829cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2182a0: 0xac40d0b8
    ctx->pc = 0x2182a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955192), GPR_U32(ctx, 0));
    // 0x2182a4: 0x3c020032
    ctx->pc = 0x2182a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2182a8: 0xac40f974
    ctx->pc = 0x2182a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965620), GPR_U32(ctx, 0));
    // 0x2182ac: 0x10000009
    ctx->pc = 0x2182ACu;
    {
        const bool branch_taken_0x2182ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2182B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2182ac) {
            ctx->pc = 0x2182D4u;
            goto label_2182d4;
        }
    }
    ctx->pc = 0x2182B4u;
label_2182b4:
    // 0x2182b4: 0x8c62f974
    ctx->pc = 0x2182b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965620)));
    // 0x2182b8: 0x10400006
    ctx->pc = 0x2182B8u;
    {
        const bool branch_taken_0x2182b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2182BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2182b8) {
            ctx->pc = 0x2182D4u;
            goto label_2182d4;
        }
    }
    ctx->pc = 0x2182C0u;
    // 0x2182c0: 0xac76f974
    ctx->pc = 0x2182c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965620), GPR_U32(ctx, 22));
    // 0x2182c4: 0x96c20008
    ctx->pc = 0x2182c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2182c8: 0x34420002
    ctx->pc = 0x2182c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2182cc: 0xa6c20008
    ctx->pc = 0x2182ccu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2182d0: 0x102d
    ctx->pc = 0x2182d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2182d4:
    // 0x2182d4: 0xdfbf0110
    ctx->pc = 0x2182d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2182d8: 0xdfbe0100
    ctx->pc = 0x2182d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2182dc: 0xdfb700f0
    ctx->pc = 0x2182dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2182e0: 0xdfb600e0
    ctx->pc = 0x2182e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2182e4: 0xdfb500d0
    ctx->pc = 0x2182e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2182e8: 0xdfb400c0
    ctx->pc = 0x2182e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2182ec: 0xdfb300b0
    ctx->pc = 0x2182ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2182f0: 0xdfb200a0
    ctx->pc = 0x2182f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2182f4: 0xdfb10090
    ctx->pc = 0x2182f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2182f8: 0xdfb00080
    ctx->pc = 0x2182f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2182fc: 0x3e00008
    ctx->pc = 0x2182FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217BD8u: goto label_217bd8;
            case 0x217C04u: goto label_217c04;
            case 0x217C20u: goto label_217c20;
            case 0x217C80u: goto label_217c80;
            case 0x217CE8u: goto label_217ce8;
            case 0x217D00u: goto label_217d00;
            case 0x217D50u: goto label_217d50;
            case 0x217D68u: goto label_217d68;
            case 0x217D8Cu: goto label_217d8c;
            case 0x217D90u: goto label_217d90;
            case 0x217E9Cu: goto label_217e9c;
            case 0x217ED0u: goto label_217ed0;
            case 0x217F10u: goto label_217f10;
            case 0x217F44u: goto label_217f44;
            case 0x217F48u: goto label_217f48;
            case 0x217F70u: goto label_217f70;
            case 0x217FC0u: goto label_217fc0;
            case 0x217FF0u: goto label_217ff0;
            case 0x21805Cu: goto label_21805c;
            case 0x218060u: goto label_218060;
            case 0x2180D4u: goto label_2180d4;
            case 0x2180E0u: goto label_2180e0;
            case 0x218114u: goto label_218114;
            case 0x218130u: goto label_218130;
            case 0x21814Cu: goto label_21814c;
            case 0x218168u: goto label_218168;
            case 0x218184u: goto label_218184;
            case 0x2181B4u: goto label_2181b4;
            case 0x2181C4u: goto label_2181c4;
            case 0x2181E0u: goto label_2181e0;
            case 0x2181F0u: goto label_2181f0;
            case 0x2181F4u: goto label_2181f4;
            case 0x2181F8u: goto label_2181f8;
            case 0x218234u: goto label_218234;
            case 0x218238u: goto label_218238;
            case 0x218260u: goto label_218260;
            case 0x218264u: goto label_218264;
            case 0x2182B4u: goto label_2182b4;
            case 0x2182D4u: goto label_2182d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218304u;
}
