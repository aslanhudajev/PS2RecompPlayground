#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlBlurSetFrameBuffer
// Address: 0x1b0f60 - 0x1b10d4
void nlBlurSetFrameBuffer_0x1b0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlBlurSetFrameBuffer");


    ctx->pc = 0x1b0f60u;

    // 0x1b0f60: 0x27bdffa0
    ctx->pc = 0x1b0f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0f64: 0x7fbf0010
    ctx->pc = 0x1b0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b0f68: 0x7fb00000
    ctx->pc = 0x1b0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0f6c: 0xaf848aec
    ctx->pc = 0x1b0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 4));
    // 0x1b0f70: 0x10800054
    ctx->pc = 0x1B0F70u;
    {
        const bool branch_taken_0x1b0f70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0F74u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U32(ctx, 5));
        if (branch_taken_0x1b0f70) {
            ctx->pc = 0x1B10C4u;
            goto label_1b10c4;
        }
    }
    ctx->pc = 0x1B0F78u;
    // 0x1b0f78: 0x8f868a10
    ctx->pc = 0x1b0f78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1b0f7c: 0x8f828a0c
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1b0f80: 0x24c30070
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 112));
    // 0x1b0f84: 0x30420001
    ctx->pc = 0x1b0f84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1b0f88: 0x10400005
    ctx->pc = 0x1B0F88u;
    {
        const bool branch_taken_0x1b0f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0F8Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
        if (branch_taken_0x1b0f88) {
            ctx->pc = 0x1B0FA0u;
            goto label_1b0fa0;
        }
    }
    ctx->pc = 0x1B0F90u;
    // 0x1b0f90: 0x94c20000
    ctx->pc = 0x1b0f90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b0f94: 0x304201ff
    ctx->pc = 0x1b0f94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1b0f98: 0x10000004
    ctx->pc = 0x1B0F98u;
    {
        const bool branch_taken_0x1b0f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0F9Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x1b0f98) {
            ctx->pc = 0x1B0FACu;
            goto label_1b0fac;
        }
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x94620000
    ctx->pc = 0x1b0fa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0fa4: 0x304201ff
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x1b0fa8: 0x21140
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
label_1b0fac:
    // 0x1b0fac: 0xa7a20024
    ctx->pc = 0x1b0facu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0fb0: 0x90620002
    ctx->pc = 0x1b0fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0fb4: 0x27a60026
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 38));
    // 0x1b0fb8: 0x27a70028
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b0fbc: 0x3c010030
    ctx->pc = 0x1b0fbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0fc0: 0x27a8002e
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 46));
    // 0x1b0fc4: 0x3042003f
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x1b0fc8: 0xa4c20000
    ctx->pc = 0x1b0fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0fcc: 0x90620003
    ctx->pc = 0x1b0fccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b0fd0: 0x3042003f
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x1b0fd4: 0xa4e20000
    ctx->pc = 0x1b0fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0fd8: 0x84225834
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1b0fdc: 0xa7a0002a
    ctx->pc = 0x1b0fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0fe0: 0xa7a0002c
    ctx->pc = 0x1b0fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0fe4: 0xa5020000
    ctx->pc = 0x1b0fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0fe8: 0x3c010030
    ctx->pc = 0x1b0fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0fec: 0x84235836
    ctx->pc = 0x1b0fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1b0ff0: 0x3c010030
    ctx->pc = 0x1b0ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1b0ff4: 0x84225838
    ctx->pc = 0x1b0ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1b0ff8: 0x14400002
    ctx->pc = 0x1B0FF8u;
    {
        const bool branch_taken_0x1b0ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0FFCu;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1b0ff8) {
            ctx->pc = 0x1B1004u;
            goto label_1b1004;
        }
    }
    ctx->pc = 0x1B1000u;
    // 0x1b1000: 0x1cd
    ctx->pc = 0x1b1000u;
    runtime->handleBreak(rdram, ctx);
label_1b1004:
    // 0x1b1004: 0x1812
    ctx->pc = 0x1b1004u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1b1008: 0x27a90030
    ctx->pc = 0x1b1008u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b100c: 0x41203
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1b1010: 0x4810003
    ctx->pc = 0x1B1010u;
    {
        const bool branch_taken_0x1b1010 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B1014u;
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b1010) {
            ctx->pc = 0x1B1020u;
            goto label_1b1020;
        }
    }
    ctx->pc = 0x1B1018u;
    // 0x1b1018: 0x248200ff
    ctx->pc = 0x1b1018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 255));
    // 0x1b101c: 0x21203
    ctx->pc = 0x1b101cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1b1020:
    // 0x1b1020: 0xa7a20044
    ctx->pc = 0x1b1020u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b1024: 0x84c20000
    ctx->pc = 0x1b1024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1028: 0x10a00004
    ctx->pc = 0x1B1028u;
    {
        const bool branch_taken_0x1b1028 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B102Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b1028) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B1030u;
    // 0x1b1030: 0x2402000a
    ctx->pc = 0x1b1030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b1034: 0x10000003
    ctx->pc = 0x1B1034u;
    {
        const bool branch_taken_0x1b1034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1038u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b1034) {
            ctx->pc = 0x1B1044u;
            goto label_1b1044;
        }
    }
    ctx->pc = 0x1B103Cu;
label_1b103c:
    // 0x1b103c: 0x84e20000
    ctx->pc = 0x1b103cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b1040: 0xa7a20048
    ctx->pc = 0x1b1040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 2));
label_1b1044:
    // 0x1b1044: 0xa7a0004a
    ctx->pc = 0x1b1044u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1048: 0xa7a0004c
    ctx->pc = 0x1b1048u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b104c: 0x85020000
    ctx->pc = 0x1b104cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b1050: 0xa7a2004e
    ctx->pc = 0x1b1050u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b1054: 0x85220000
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b1058: 0xc069558
    ctx->pc = 0x1B1058u;
    SET_GPR_U32(ctx, 31, 0x1B1060u);
    ctx->pc = 0x1B105Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1060u; }
        else if (ctx->pc != 0x1B1060u) { ctx->pc = 0x1B1060u; }
    }
    if (ctx->pc != 0x1B1060u) { return; }
    ctx->pc = 0x1B1060u;
    // 0x1b1060: 0x70408628
    ctx->pc = 0x1b1060u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b1064: 0x16000003
    ctx->pc = 0x1B1064u;
    {
        const bool branch_taken_0x1b1064 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1064) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B106Cu;
    // 0x1b106c: 0xc0694bc
    ctx->pc = 0x1B106Cu;
    SET_GPR_U32(ctx, 31, 0x1B1074u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1074u; }
        else if (ctx->pc != 0x1B1074u) { ctx->pc = 0x1B1074u; }
    }
    if (ctx->pc != 0x1B1074u) { return; }
    ctx->pc = 0x1B1074u;
label_1b1074:
    // 0x1b1074: 0x8f828ae8
    ctx->pc = 0x1b1074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x1b1078: 0x1040000b
    ctx->pc = 0x1B1078u;
    {
        const bool branch_taken_0x1b1078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B107Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x1b1078) {
            ctx->pc = 0x1B10A8u;
            goto label_1b10a8;
        }
    }
    ctx->pc = 0x1B1080u;
    // 0x1b1080: 0x27a40020
    ctx->pc = 0x1b1080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b1084: 0xc069d14
    ctx->pc = 0x1B1084u;
    SET_GPR_U32(ctx, 31, 0x1B108Cu);
    ctx->pc = 0x1B1088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1A7450u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlConvImageLocalMem_0x1a7450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B108Cu; }
        else if (ctx->pc != 0x1B108Cu) { ctx->pc = 0x1B108Cu; }
    }
    if (ctx->pc != 0x1B108Cu) { return; }
    ctx->pc = 0x1B108Cu;
    // 0x1b108c: 0x70002628
    ctx->pc = 0x1b108cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1090: 0xc06bcc4
    ctx->pc = 0x1B1090u;
    SET_GPR_U32(ctx, 31, 0x1B1098u);
    ctx->pc = 0x1B1094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1098u; }
        else if (ctx->pc != 0x1B1098u) { ctx->pc = 0x1B1098u; }
    }
    if (ctx->pc != 0x1B1098u) { return; }
    ctx->pc = 0x1B1098u;
    // 0x1b1098: 0xc06bd64
    ctx->pc = 0x1B1098u;
    SET_GPR_U32(ctx, 31, 0x1B10A0u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10A0u; }
        else if (ctx->pc != 0x1B10A0u) { ctx->pc = 0x1B10A0u; }
    }
    if (ctx->pc != 0x1B10A0u) { return; }
    ctx->pc = 0x1B10A0u;
    // 0x1b10a0: 0x10000004
    ctx->pc = 0x1B10A0u;
    {
        const bool branch_taken_0x1b10a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b10a0) {
            ctx->pc = 0x1B10B4u;
            goto label_1b10b4;
        }
    }
    ctx->pc = 0x1B10A8u;
label_1b10a8:
    // 0x1b10a8: 0x27a50040
    ctx->pc = 0x1b10a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b10ac: 0xc069ca4
    ctx->pc = 0x1B10ACu;
    SET_GPR_U32(ctx, 31, 0x1B10B4u);
    ctx->pc = 0x1B10B0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTransLocalMem_0x1a7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10B4u; }
        else if (ctx->pc != 0x1B10B4u) { ctx->pc = 0x1B10B4u; }
    }
    if (ctx->pc != 0x1B10B4u) { return; }
    ctx->pc = 0x1B10B4u;
label_1b10b4:
    // 0x1b10b4: 0x16000003
    ctx->pc = 0x1B10B4u;
    {
        const bool branch_taken_0x1b10b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B10B8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b10b4) {
            ctx->pc = 0x1B10C4u;
            goto label_1b10c4;
        }
    }
    ctx->pc = 0x1B10BCu;
    // 0x1b10bc: 0xc0694e8
    ctx->pc = 0x1B10BCu;
    SET_GPR_U32(ctx, 31, 0x1B10C4u);
    ctx->pc = 0x1B10C0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10C4u; }
        else if (ctx->pc != 0x1B10C4u) { ctx->pc = 0x1B10C4u; }
    }
    if (ctx->pc != 0x1B10C4u) { return; }
    ctx->pc = 0x1B10C4u;
label_1b10c4:
    // 0x1b10c4: 0x7bbf0010
    ctx->pc = 0x1b10c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b10c8: 0x7bb00000
    ctx->pc = 0x1b10c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b10cc: 0x3e00008
    ctx->pc = 0x1B10CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B10D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0FA0u: goto label_1b0fa0;
            case 0x1B0FACu: goto label_1b0fac;
            case 0x1B1004u: goto label_1b1004;
            case 0x1B1020u: goto label_1b1020;
            case 0x1B103Cu: goto label_1b103c;
            case 0x1B1044u: goto label_1b1044;
            case 0x1B1074u: goto label_1b1074;
            case 0x1B10A8u: goto label_1b10a8;
            case 0x1B10B4u: goto label_1b10b4;
            case 0x1B10C4u: goto label_1b10c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B10D4u;
}
