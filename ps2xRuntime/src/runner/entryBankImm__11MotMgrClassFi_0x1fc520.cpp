#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankImm__11MotMgrClassFi
// Address: 0x1fc520 - 0x1fc758
void entryBankImm__11MotMgrClassFi_0x1fc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankImm__11MotMgrClassFi");


    ctx->pc = 0x1fc520u;

    // 0x1fc520: 0x27bdffb0
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc524: 0x7fbf0040
    ctx->pc = 0x1fc524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fc528: 0x51840
    ctx->pc = 0x1fc528u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc52c: 0x7fb30030
    ctx->pc = 0x1fc52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc530: 0x651821
    ctx->pc = 0x1fc530u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc534: 0x7fb20020
    ctx->pc = 0x1fc534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc538: 0x32080
    ctx->pc = 0x1fc538u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc53c: 0x7fb10010
    ctx->pc = 0x1fc53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc540: 0x3c030051
    ctx->pc = 0x1fc540u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fc544: 0x7fb00000
    ctx->pc = 0x1fc544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc548: 0x24631dd0
    ctx->pc = 0x1fc548u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7632));
    // 0x1fc54c: 0x648021
    ctx->pc = 0x1fc54cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc550: 0x8e060000
    ctx->pc = 0x1fc550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc554: 0x3c046000
    ctx->pc = 0x1fc554u;
    SET_GPR_U32(ctx, 4, ((uint32_t)24576 << 16));
    // 0x1fc558: 0x3c034000
    ctx->pc = 0x1fc558u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1fc55c: 0xc42024
    ctx->pc = 0x1fc55cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fc560: 0x10830076
    ctx->pc = 0x1FC560u;
    {
        const bool branch_taken_0x1fc560 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FC564u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
        if (branch_taken_0x1fc560) {
            ctx->pc = 0x1FC73Cu;
            goto label_1fc73c;
        }
    }
    ctx->pc = 0x1FC568u;
    // 0x1fc568: 0x10830074
    ctx->pc = 0x1FC568u;
    {
        const bool branch_taken_0x1fc568 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fc568) {
            ctx->pc = 0x1FC73Cu;
            goto label_1fc73c;
        }
    }
    ctx->pc = 0x1FC570u;
    // 0x1fc570: 0x50800003
    ctx->pc = 0x1FC570u;
    {
        const bool branch_taken_0x1fc570 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc570) {
            ctx->pc = 0x1FC574u;
            SET_GPR_U32(ctx, 2, ((uint32_t)40959 << 16));
            ctx->pc = 0x1FC580u;
            goto label_1fc580;
        }
    }
    ctx->pc = 0x1FC578u;
    // 0x1fc578: 0x10000071
    ctx->pc = 0x1FC578u;
    {
        const bool branch_taken_0x1fc578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC57Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1fc578) {
            ctx->pc = 0x1FC740u;
            goto label_1fc740;
        }
    }
    ctx->pc = 0x1FC580u;
label_1fc580:
    // 0x1fc580: 0x3442ffff
    ctx->pc = 0x1fc580u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1fc584: 0xc22024
    ctx->pc = 0x1fc584u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc588: 0xae040000
    ctx->pc = 0x1fc588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1fc58c: 0x8e060000
    ctx->pc = 0x1fc58cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc590: 0x3c040051
    ctx->pc = 0x1fc590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1fc594: 0x24881dda
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 7642));
    // 0x1fc598: 0x3c0101fb
    ctx->pc = 0x1fc598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1fc59c: 0x52080
    ctx->pc = 0x1fc59cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc5a0: 0x3421fc9c
    ctx->pc = 0x1fc5a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64668));
    // 0x1fc5a4: 0x819821
    ctx->pc = 0x1fc5a4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fc5a8: 0xc32025
    ctx->pc = 0x1fc5a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fc5ac: 0xae040000
    ctx->pc = 0x1fc5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1fc5b0: 0xae000004
    ctx->pc = 0x1fc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fc5b4: 0x3c010051
    ctx->pc = 0x1fc5b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fc5b8: 0x8429224c
    ctx->pc = 0x1fc5b8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8780)));
    // 0x1fc5bc: 0x3c040050
    ctx->pc = 0x1fc5bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x1fc5c0: 0x24860e30
    ctx->pc = 0x1fc5c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 3632));
    // 0x1fc5c4: 0x2407005f
    ctx->pc = 0x1fc5c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1fc5c8: 0x92040
    ctx->pc = 0x1fc5c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1fc5cc: 0x892021
    ctx->pc = 0x1fc5ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fc5d0: 0x3c010051
    ctx->pc = 0x1fc5d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fc5d4: 0x42080
    ctx->pc = 0x1fc5d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fc5d8: 0xa425224c
    ctx->pc = 0x1fc5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8780), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc5dc: 0x1042021
    ctx->pc = 0x1fc5dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1fc5e0: 0xa4850000
    ctx->pc = 0x1fc5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc5e4: 0xa6090008
    ctx->pc = 0x1fc5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x1fc5e8: 0xa607000a
    ctx->pc = 0x1fc5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 7));
    // 0x1fc5ec: 0x8e680000
    ctx->pc = 0x1fc5ecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fc5f0: 0x10000009
    ctx->pc = 0x1FC5F0u;
    {
        const bool branch_taken_0x1fc5f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC5F4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fc5f0) {
            ctx->pc = 0x1FC618u;
            goto label_1fc618;
        }
    }
    ctx->pc = 0x1FC5F8u;
label_1fc5f8:
    // 0x1fc5f8: 0x420c0
    ctx->pc = 0x1fc5f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fc5fc: 0xc43821
    ctx->pc = 0x1fc5fcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fc600: 0xace00004
    ctx->pc = 0x1fc600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1fc604: 0x8ce40000
    ctx->pc = 0x1fc604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fc608: 0x26310001
    ctx->pc = 0x1fc608u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc60c: 0x822024
    ctx->pc = 0x1fc60cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fc610: 0xace40000
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1fc614: 0xace30000
    ctx->pc = 0x1fc614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1fc618:
    // 0x1fc618: 0x85040000
    ctx->pc = 0x1fc618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc61c: 0x481fff6
    ctx->pc = 0x1FC61Cu;
    {
        const bool branch_taken_0x1fc61c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FC620u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1fc61c) {
            ctx->pc = 0x1FC5F8u;
            goto label_1fc5f8;
        }
    }
    ctx->pc = 0x1FC624u;
    // 0x1fc624: 0x3c020027
    ctx->pc = 0x1fc624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fc628: 0x51840
    ctx->pc = 0x1fc628u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc62c: 0x2442b0e0
    ctx->pc = 0x1fc62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x1fc630: 0x431021
    ctx->pc = 0x1fc630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc634: 0x84450000
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc638: 0xc05adc4
    ctx->pc = 0x1FC638u;
    SET_GPR_U32(ctx, 31, 0x1FC640u);
    ctx->pc = 0x1FC63Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC640u; }
        else if (ctx->pc != 0x1FC640u) { ctx->pc = 0x1FC640u; }
    }
    if (ctx->pc != 0x1FC640u) { return; }
    ctx->pc = 0x1FC640u;
    // 0x1fc640: 0x3c010050
    ctx->pc = 0x1fc640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc644: 0xac220c70
    ctx->pc = 0x1fc644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3184), GPR_U32(ctx, 2));
    // 0x1fc648: 0x3c010050
    ctx->pc = 0x1fc648u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc64c: 0xc05afe2
    ctx->pc = 0x1FC64Cu;
    SET_GPR_U32(ctx, 31, 0x1FC654u);
    ctx->pc = 0x1FC650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC654u; }
        else if (ctx->pc != 0x1FC654u) { ctx->pc = 0x1FC654u; }
    }
    if (ctx->pc != 0x1FC654u) { return; }
    ctx->pc = 0x1FC654u;
    // 0x1fc654: 0x70409628
    ctx->pc = 0x1fc654u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fc658: 0x212c0
    ctx->pc = 0x1fc658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1fc65c: 0xc06878c
    ctx->pc = 0x1FC65Cu;
    SET_GPR_U32(ctx, 31, 0x1FC664u);
    ctx->pc = 0x1FC660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC664u; }
        else if (ctx->pc != 0x1FC664u) { ctx->pc = 0x1FC664u; }
    }
    if (ctx->pc != 0x1FC664u) { return; }
    ctx->pc = 0x1FC664u;
    // 0x1fc664: 0xae020004
    ctx->pc = 0x1fc664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1fc668: 0x8e030004
    ctx->pc = 0x1fc668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc66c: 0x3c010050
    ctx->pc = 0x1fc66cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc670: 0x8c240c70
    ctx->pc = 0x1fc670u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    // 0x1fc674: 0x72402e28
    ctx->pc = 0x1fc674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fc678: 0x2402ffc0
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fc67c: 0x2463003f
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fc680: 0x629024
    ctx->pc = 0x1fc680u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc684: 0xc05aeba
    ctx->pc = 0x1FC684u;
    SET_GPR_U32(ctx, 31, 0x1FC68Cu);
    ctx->pc = 0x1FC688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC68Cu; }
        else if (ctx->pc != 0x1FC68Cu) { ctx->pc = 0x1FC68Cu; }
    }
    if (ctx->pc != 0x1FC68Cu) { return; }
    ctx->pc = 0x1FC68Cu;
    // 0x1fc68c: 0x3c010050
    ctx->pc = 0x1fc68cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc690: 0xc07a6a8
    ctx->pc = 0x1FC690u;
    SET_GPR_U32(ctx, 31, 0x1FC698u);
    ctx->pc = 0x1FC694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC698u; }
        else if (ctx->pc != 0x1FC698u) { ctx->pc = 0x1FC698u; }
    }
    if (ctx->pc != 0x1FC698u) { return; }
    ctx->pc = 0x1FC698u;
    // 0x1fc698: 0x3c010050
    ctx->pc = 0x1fc698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc69c: 0xc05ae0c
    ctx->pc = 0x1FC69Cu;
    SET_GPR_U32(ctx, 31, 0x1FC6A4u);
    ctx->pc = 0x1FC6A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC6A4u; }
        else if (ctx->pc != 0x1FC6A4u) { ctx->pc = 0x1FC6A4u; }
    }
    if (ctx->pc != 0x1FC6A4u) { return; }
    ctx->pc = 0x1FC6A4u;
    // 0x1fc6a4: 0x3c010050
    ctx->pc = 0x1fc6a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc6a8: 0xac200c70
    ctx->pc = 0x1fc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3184), GPR_U32(ctx, 0));
    // 0x1fc6ac: 0x8e6b0000
    ctx->pc = 0x1fc6acu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fc6b0: 0x11082a
    ctx->pc = 0x1fc6b0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1fc6b4: 0x10200018
    ctx->pc = 0x1FC6B4u;
    {
        const bool branch_taken_0x1fc6b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC6B8u;
        SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fc6b4) {
            ctx->pc = 0x1FC718u;
            goto label_1fc718;
        }
    }
    ctx->pc = 0x1FC6BCu;
    // 0x1fc6bc: 0x72405628
    ctx->pc = 0x1fc6bcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1fc6c0: 0x3c030050
    ctx->pc = 0x1fc6c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1fc6c4: 0x24670e30
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 3632));
    // 0x1fc6c8: 0x3c039fff
    ctx->pc = 0x1fc6c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40959 << 16));
    // 0x1fc6cc: 0x3466ffff
    ctx->pc = 0x1fc6ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1fc6d0: 0x3c05c000
    ctx->pc = 0x1fc6d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49152 << 16));
label_1fc6d4:
    // 0x1fc6d4: 0x85680000
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fc6d8: 0x8e440000
    ctx->pc = 0x1fc6d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fc6dc: 0x25290001
    ctx->pc = 0x1fc6dcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc6e0: 0x131182a
    ctx->pc = 0x1fc6e0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 17)));
    // 0x1fc6e4: 0x840c0
    ctx->pc = 0x1fc6e4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1fc6e8: 0xe84021
    ctx->pc = 0x1fc6e8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1fc6ec: 0x1442021
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fc6f0: 0xad040004
    ctx->pc = 0x1fc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1fc6f4: 0x8d040000
    ctx->pc = 0x1fc6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc6f8: 0x256b0002
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
    // 0x1fc6fc: 0x26520004
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1fc700: 0x862024
    ctx->pc = 0x1fc700u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fc704: 0xad040000
    ctx->pc = 0x1fc704u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1fc708: 0x8d040000
    ctx->pc = 0x1fc708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc70c: 0x852025
    ctx->pc = 0x1fc70cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fc710: 0x1460fff0
    ctx->pc = 0x1FC710u;
    {
        const bool branch_taken_0x1fc710 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC714u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x1fc710) {
            ctx->pc = 0x1FC6D4u;
            goto label_1fc6d4;
        }
    }
    ctx->pc = 0x1FC718u;
label_1fc718:
    // 0x1fc718: 0x8e050000
    ctx->pc = 0x1fc718u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc71c: 0x3c039fff
    ctx->pc = 0x1fc71cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)40959 << 16));
    // 0x1fc720: 0x3464ffff
    ctx->pc = 0x1fc720u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1fc724: 0x3c03c000
    ctx->pc = 0x1fc724u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49152 << 16));
    // 0x1fc728: 0xa42024
    ctx->pc = 0x1fc728u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fc72c: 0xae040000
    ctx->pc = 0x1fc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1fc730: 0x8e040000
    ctx->pc = 0x1fc730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc734: 0x831825
    ctx->pc = 0x1fc734u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc738: 0xae030000
    ctx->pc = 0x1fc738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fc73c:
    // 0x1fc73c: 0x7bbf0040
    ctx->pc = 0x1fc73cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc740:
    // 0x1fc740: 0x7bb30030
    ctx->pc = 0x1fc740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc744: 0x7bb20020
    ctx->pc = 0x1fc744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc748: 0x7bb10010
    ctx->pc = 0x1fc748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc74c: 0x7bb00000
    ctx->pc = 0x1fc74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc750: 0x3e00008
    ctx->pc = 0x1FC750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC580u: goto label_1fc580;
            case 0x1FC5F8u: goto label_1fc5f8;
            case 0x1FC618u: goto label_1fc618;
            case 0x1FC6D4u: goto label_1fc6d4;
            case 0x1FC718u: goto label_1fc718;
            case 0x1FC73Cu: goto label_1fc73c;
            case 0x1FC740u: goto label_1fc740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC758u;
}
