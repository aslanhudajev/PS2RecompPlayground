#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_StatWait
// Address: 0x17a8a8 - 0x17a9c8
void lsc_StatWait_0x17a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_StatWait");


    ctx->pc = 0x17a8a8u;

    // 0x17a8a8: 0x27bdffc0
    ctx->pc = 0x17a8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a8ac: 0xffb10010
    ctx->pc = 0x17a8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17a8b0: 0xffb00000
    ctx->pc = 0x17a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a8b4: 0xffbf0030
    ctx->pc = 0x17a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a8b8: 0x80802d
    ctx->pc = 0x17a8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8bc: 0xffb20020
    ctx->pc = 0x17a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a8c0: 0x8e020020
    ctx->pc = 0x17a8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17a8c4: 0x8e050024
    ctx->pc = 0x17a8c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17a8c8: 0x21180
    ctx->pc = 0x17a8c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17a8cc: 0x24420038
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 56));
    // 0x17a8d0: 0x18a0002d
    ctx->pc = 0x17A8D0u;
    {
        const bool branch_taken_0x17a8d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x17A8D4u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x17a8d0) {
            ctx->pc = 0x17A988u;
            goto label_17a988;
        }
    }
    ctx->pc = 0x17A8D8u;
    // 0x17a8d8: 0x8e020028
    ctx->pc = 0x17a8d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a8dc: 0x5440001a
    ctx->pc = 0x17A8DCu;
    {
        const bool branch_taken_0x17a8dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a8dc) {
            ctx->pc = 0x17A8E0u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x17A948u;
            goto label_17a948;
        }
    }
    ctx->pc = 0x17A8E4u;
    // 0x17a8e4: 0x26320004
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4));
    // 0x17a8e8: 0x8e25002c
    ctx->pc = 0x17a8e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17a8ec: 0x8e260030
    ctx->pc = 0x17a8ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17a8f0: 0x240202d
    ctx->pc = 0x17a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8f4: 0x8e270034
    ctx->pc = 0x17a8f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17a8f8: 0xc05c242
    ctx->pc = 0x17A8F8u;
    SET_GPR_U32(ctx, 31, 0x17A900u);
    ctx->pc = 0x17A8FCu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x170908u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFileRangeExRt_0x170908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A900u; }
        else if (ctx->pc != 0x17A900u) { ctx->pc = 0x17A900u; }
    }
    if (ctx->pc != 0x17A900u) { return; }
    ctx->pc = 0x17A900u;
    // 0x17a900: 0x14400005
    ctx->pc = 0x17A900u;
    {
        const bool branch_taken_0x17a900 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A904u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x17a900) {
            ctx->pc = 0x17A918u;
            goto label_17a918;
        }
    }
    ctx->pc = 0x17A908u;
    // 0x17a908: 0x3c04002c
    ctx->pc = 0x17a908u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a90c: 0x240282d
    ctx->pc = 0x17a90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a910: 0xc05e9c6
    ctx->pc = 0x17A910u;
    SET_GPR_U32(ctx, 31, 0x17A918u);
    ctx->pc = 0x17A914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949712));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A918u; }
        else if (ctx->pc != 0x17A918u) { ctx->pc = 0x17A918u; }
    }
    if (ctx->pc != 0x17A918u) { return; }
    ctx->pc = 0x17A918u;
label_17a918:
    // 0x17a918: 0xc05c442
    ctx->pc = 0x17A918u;
    SET_GPR_U32(ctx, 31, 0x17A920u);
    ctx->pc = 0x17A91Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x171108u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetFileLen_0x171108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A920u; }
        else if (ctx->pc != 0x17A920u) { ctx->pc = 0x17A920u; }
    }
    if (ctx->pc != 0x17A920u) { return; }
    ctx->pc = 0x17A920u;
    // 0x17a920: 0x244407ff
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x17a924: 0x2403ffff
    ctx->pc = 0x17a924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a928: 0x24420ffe
    ctx->pc = 0x17a928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x17a92c: 0x64182a
    ctx->pc = 0x17a92cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x17a930: 0x83100b
    ctx->pc = 0x17a930u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x17a934: 0xa2000002
    ctx->pc = 0x17a934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17a938: 0x212c3
    ctx->pc = 0x17a938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x17a93c: 0xae02002c
    ctx->pc = 0x17a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x17a940: 0xae20003c
    ctx->pc = 0x17a940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x17a944: 0x82020002
    ctx->pc = 0x17a944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_17a948:
    // 0x17a948: 0x1440000d
    ctx->pc = 0x17A948u;
    {
        const bool branch_taken_0x17a948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A94Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17a948) {
            ctx->pc = 0x17A980u;
            goto label_17a980;
        }
    }
    ctx->pc = 0x17A950u;
    // 0x17a950: 0x8e040028
    ctx->pc = 0x17a950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a954: 0x8e050014
    ctx->pc = 0x17a954u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17a958: 0xc05c438
    ctx->pc = 0x17A958u;
    SET_GPR_U32(ctx, 31, 0x17A960u);
    ctx->pc = 0x17A95Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1710E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetBufSize_0x1710e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A960u; }
        else if (ctx->pc != 0x17A960u) { ctx->pc = 0x17A960u; }
    }
    if (ctx->pc != 0x17A960u) { return; }
    ctx->pc = 0x17A960u;
    // 0x17a960: 0x8e040028
    ctx->pc = 0x17a960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a964: 0xc05c2e2
    ctx->pc = 0x17A964u;
    SET_GPR_U32(ctx, 31, 0x17A96Cu);
    ctx->pc = 0x17A968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A96Cu; }
        else if (ctx->pc != 0x17A96Cu) { ctx->pc = 0x17A96Cu; }
    }
    if (ctx->pc != 0x17A96Cu) { return; }
    ctx->pc = 0x17A96Cu;
    // 0x17a96c: 0xc05c304
    ctx->pc = 0x17A96Cu;
    SET_GPR_U32(ctx, 31, 0x17A974u);
    ctx->pc = 0x17A970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x170C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Start_0x170c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A974u; }
        else if (ctx->pc != 0x17A974u) { ctx->pc = 0x17A974u; }
    }
    if (ctx->pc != 0x17A974u) { return; }
    ctx->pc = 0x17A974u;
    // 0x17a974: 0x24030001
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a978: 0xa2030002
    ctx->pc = 0x17a978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17a97c: 0x24020001
    ctx->pc = 0x17a97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17a980:
    // 0x17a980: 0x1000000b
    ctx->pc = 0x17A980u;
    {
        const bool branch_taken_0x17a980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A984u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x17a980) {
            ctx->pc = 0x17A9B0u;
            goto label_17a9b0;
        }
    }
    ctx->pc = 0x17A988u;
label_17a988:
    // 0x17a988: 0x8e060028
    ctx->pc = 0x17a988u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a98c: 0x10c00009
    ctx->pc = 0x17A98Cu;
    {
        const bool branch_taken_0x17a98c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A990u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17a98c) {
            ctx->pc = 0x17A9B4u;
            goto label_17a9b4;
        }
    }
    ctx->pc = 0x17A994u;
    // 0x17a994: 0x3c04002c
    ctx->pc = 0x17a994u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a998: 0xdfb20020
    ctx->pc = 0x17a998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a99c: 0x2484bb70
    ctx->pc = 0x17a99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949744));
    // 0x17a9a0: 0xdfb10010
    ctx->pc = 0x17a9a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9a4: 0xdfb00000
    ctx->pc = 0x17a9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9a8: 0x805e9c6
    ctx->pc = 0x17A9A8u;
    ctx->pc = 0x17A9ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17A9B0u;
label_17a9b0:
    // 0x17a9b0: 0xdfbf0030
    ctx->pc = 0x17a9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17a9b4:
    // 0x17a9b4: 0xdfb20020
    ctx->pc = 0x17a9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9b8: 0xdfb10010
    ctx->pc = 0x17a9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9bc: 0xdfb00000
    ctx->pc = 0x17a9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9c0: 0x3e00008
    ctx->pc = 0x17A9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A918u: goto label_17a918;
            case 0x17A948u: goto label_17a948;
            case 0x17A980u: goto label_17a980;
            case 0x17A988u: goto label_17a988;
            case 0x17A9B0u: goto label_17a9b0;
            case 0x17A9B4u: goto label_17a9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A9C8u;
}
