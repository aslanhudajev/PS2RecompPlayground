#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop0__11OverLapTaskFv
// Address: 0x215900 - 0x215b64
void loop0__11OverLapTaskFv_0x215900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop0__11OverLapTaskFv");


    ctx->pc = 0x215900u;

    // 0x215900: 0x27bdff90
    ctx->pc = 0x215900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x215904: 0x7fbf0020
    ctx->pc = 0x215904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x215908: 0x7fb10010
    ctx->pc = 0x215908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21590c: 0x70808e28
    ctx->pc = 0x21590cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215910: 0xc069558
    ctx->pc = 0x215910u;
    SET_GPR_U32(ctx, 31, 0x215918u);
    ctx->pc = 0x215914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215918u; }
        else if (ctx->pc != 0x215918u) { ctx->pc = 0x215918u; }
    }
    if (ctx->pc != 0x215918u) { return; }
    ctx->pc = 0x215918u;
    // 0x215918: 0x70408628
    ctx->pc = 0x215918u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21591c: 0x16000003
    ctx->pc = 0x21591Cu;
    {
        const bool branch_taken_0x21591c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21591c) {
            ctx->pc = 0x21592Cu;
            goto label_21592c;
        }
    }
    ctx->pc = 0x215924u;
    // 0x215924: 0xc0694bc
    ctx->pc = 0x215924u;
    SET_GPR_U32(ctx, 31, 0x21592Cu);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21592Cu; }
        else if (ctx->pc != 0x21592Cu) { ctx->pc = 0x21592Cu; }
    }
    if (ctx->pc != 0x21592Cu) { return; }
    ctx->pc = 0x21592Cu;
label_21592c:
    // 0x21592c: 0x3c020029
    ctx->pc = 0x21592cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215930: 0x2444a610
    ctx->pc = 0x215930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x215934: 0x70002e28
    ctx->pc = 0x215934u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215938: 0x70003628
    ctx->pc = 0x215938u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21593c: 0x70003e28
    ctx->pc = 0x21593cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215940: 0xc06a81c
    ctx->pc = 0x215940u;
    SET_GPR_U32(ctx, 31, 0x215948u);
    ctx->pc = 0x215944u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AA070u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutUpdateTexInfoPoly2_0x1aa070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215948u; }
        else if (ctx->pc != 0x215948u) { ctx->pc = 0x215948u; }
    }
    if (ctx->pc != 0x215948u) { return; }
    ctx->pc = 0x215948u;
    // 0x215948: 0x86230004
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21594c: 0x24020002
    ctx->pc = 0x21594cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x215950: 0x10620058
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x215950) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x215958u;
    // 0x215958: 0x24020001
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21595c: 0x1062000b
    ctx->pc = 0x21595Cu;
    {
        const bool branch_taken_0x21595c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21595c) {
            ctx->pc = 0x21598Cu;
            goto label_21598c;
        }
    }
    ctx->pc = 0x215964u;
    // 0x215964: 0x3c020029
    ctx->pc = 0x215964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215968: 0x2444a610
    ctx->pc = 0x215968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21596c: 0x3c020021
    ctx->pc = 0x21596cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x215970: 0x24455700
    ctx->pc = 0x215970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22272));
    // 0x215974: 0x3c020021
    ctx->pc = 0x215974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x215978: 0x24465750
    ctx->pc = 0x215978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22352));
    // 0x21597c: 0xc06ab38
    ctx->pc = 0x21597Cu;
    SET_GPR_U32(ctx, 31, 0x215984u);
    ctx->pc = 0x215980u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215984u; }
        else if (ctx->pc != 0x215984u) { ctx->pc = 0x215984u; }
    }
    if (ctx->pc != 0x215984u) { return; }
    ctx->pc = 0x215984u;
    // 0x215984: 0x10000064
    ctx->pc = 0x215984u;
    {
        const bool branch_taken_0x215984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x215984) {
            ctx->pc = 0x215B18u;
            goto label_215b18;
        }
    }
    ctx->pc = 0x21598Cu;
label_21598c:
    // 0x21598c: 0x3c020050
    ctx->pc = 0x21598cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215990: 0x2444e540
    ctx->pc = 0x215990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x215994: 0x3c050005
    ctx->pc = 0x215994u;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x215998: 0xc086850
    ctx->pc = 0x215998u;
    SET_GPR_U32(ctx, 31, 0x2159A0u);
    ctx->pc = 0x21599Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159A0u; }
        else if (ctx->pc != 0x2159A0u) { ctx->pc = 0x2159A0u; }
    }
    if (ctx->pc != 0x2159A0u) { return; }
    ctx->pc = 0x2159A0u;
    // 0x2159a0: 0xae220014
    ctx->pc = 0x2159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2159a4: 0x8e220014
    ctx->pc = 0x2159a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2159a8: 0x14400007
    ctx->pc = 0x2159A8u;
    {
        const bool branch_taken_0x2159a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2159ACu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x2159a8) {
            ctx->pc = 0x2159C8u;
            goto label_2159c8;
        }
    }
    ctx->pc = 0x2159B0u;
    // 0x2159b0: 0x3c020029
    ctx->pc = 0x2159b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x2159b4: 0xc05114a
    ctx->pc = 0x2159B4u;
    SET_GPR_U32(ctx, 31, 0x2159BCu);
    ctx->pc = 0x2159B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944864));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159BCu; }
        else if (ctx->pc != 0x2159BCu) { ctx->pc = 0x2159BCu; }
    }
    if (ctx->pc != 0x2159BCu) { return; }
    ctx->pc = 0x2159BCu;
label_2159bc:
    // 0x2159bc: 0x1000ffff
    ctx->pc = 0x2159BCu;
    {
        const bool branch_taken_0x2159bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2159bc) {
            ctx->pc = 0x2159BCu;
            goto label_2159bc;
        }
    }
    ctx->pc = 0x2159C4u;
    // 0x2159c4: 0x24470008
    ctx->pc = 0x2159c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8));
label_2159c8:
    // 0x2159c8: 0x3c020029
    ctx->pc = 0x2159c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x2159cc: 0x2444a610
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2159d0: 0x3c020021
    ctx->pc = 0x2159d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x2159d4: 0x24455780
    ctx->pc = 0x2159d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22400));
    // 0x2159d8: 0x3c020021
    ctx->pc = 0x2159d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x2159dc: 0xc06ab38
    ctx->pc = 0x2159DCu;
    SET_GPR_U32(ctx, 31, 0x2159E4u);
    ctx->pc = 0x2159E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22512));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159E4u; }
        else if (ctx->pc != 0x2159E4u) { ctx->pc = 0x2159E4u; }
    }
    if (ctx->pc != 0x2159E4u) { return; }
    ctx->pc = 0x2159E4u;
    // 0x2159e4: 0xc06bdec
    ctx->pc = 0x2159E4u;
    SET_GPR_U32(ctx, 31, 0x2159ECu);
    ctx->pc = 0x1AF7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetFrameCnt_0x1af7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159ECu; }
        else if (ctx->pc != 0x2159ECu) { ctx->pc = 0x2159ECu; }
    }
    if (ctx->pc != 0x2159ECu) { return; }
    ctx->pc = 0x2159ECu;
    // 0x2159ec: 0x30420001
    ctx->pc = 0x2159ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2159f0: 0x1040000a
    ctx->pc = 0x2159F0u;
    {
        const bool branch_taken_0x2159f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2159f0) {
            ctx->pc = 0x215A1Cu;
            goto label_215a1c;
        }
    }
    ctx->pc = 0x2159F8u;
    // 0x2159f8: 0xc06c490
    ctx->pc = 0x2159F8u;
    SET_GPR_U32(ctx, 31, 0x215A00u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A00u; }
        else if (ctx->pc != 0x215A00u) { ctx->pc = 0x215A00u; }
    }
    if (ctx->pc != 0x215A00u) { return; }
    ctx->pc = 0x215A00u;
    // 0x215a00: 0x94420160
    ctx->pc = 0x215a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x215a04: 0x304201ff
    ctx->pc = 0x215a04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x215a08: 0x2143c
    ctx->pc = 0x215a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x215a0c: 0x2143f
    ctx->pc = 0x215a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x215a10: 0x21140
    ctx->pc = 0x215a10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x215a14: 0x10000009
    ctx->pc = 0x215A14u;
    {
        const bool branch_taken_0x215a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215A18u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x215a14) {
            ctx->pc = 0x215A3Cu;
            goto label_215a3c;
        }
    }
    ctx->pc = 0x215A1Cu;
label_215a1c:
    // 0x215a1c: 0xc06c490
    ctx->pc = 0x215A1Cu;
    SET_GPR_U32(ctx, 31, 0x215A24u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A24u; }
        else if (ctx->pc != 0x215A24u) { ctx->pc = 0x215A24u; }
    }
    if (ctx->pc != 0x215A24u) { return; }
    ctx->pc = 0x215A24u;
    // 0x215a24: 0x94420070
    ctx->pc = 0x215a24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x215a28: 0x304201ff
    ctx->pc = 0x215a28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x215a2c: 0x2143c
    ctx->pc = 0x215a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x215a30: 0x2143f
    ctx->pc = 0x215a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x215a34: 0x21140
    ctx->pc = 0x215a34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x215a38: 0xa7a20034
    ctx->pc = 0x215a38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
label_215a3c:
    // 0x215a3c: 0x2402000a
    ctx->pc = 0x215a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x215a40: 0xa7a20036
    ctx->pc = 0x215a40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a44: 0xa7a00038
    ctx->pc = 0x215a44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x215a48: 0xa7a0003a
    ctx->pc = 0x215a48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x215a4c: 0xa7a0003c
    ctx->pc = 0x215a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x215a50: 0x24020280
    ctx->pc = 0x215a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
    // 0x215a54: 0xa7a2003e
    ctx->pc = 0x215a54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a58: 0x24020100
    ctx->pc = 0x215a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x215a5c: 0xa7a20040
    ctx->pc = 0x215a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a60: 0x8e220014
    ctx->pc = 0x215a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x215a64: 0x8c430008
    ctx->pc = 0x215a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215a68: 0x4610003
    ctx->pc = 0x215A68u;
    {
        const bool branch_taken_0x215a68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x215A6Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
        if (branch_taken_0x215a68) {
            ctx->pc = 0x215A78u;
            goto label_215a78;
        }
    }
    ctx->pc = 0x215A70u;
    // 0x215a70: 0x246200ff
    ctx->pc = 0x215a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 255));
    // 0x215a74: 0x21203
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_215a78:
    // 0x215a78: 0xa7a20054
    ctx->pc = 0x215a78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a7c: 0x2403000a
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x215a80: 0xa7a30056
    ctx->pc = 0x215a80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x215a84: 0xa7a0005a
    ctx->pc = 0x215a84u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x215a88: 0xa7a0005c
    ctx->pc = 0x215a88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x215a8c: 0x24020280
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
    // 0x215a90: 0xa7a2005e
    ctx->pc = 0x215a90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a94: 0x24020100
    ctx->pc = 0x215a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x215a98: 0xa7a20060
    ctx->pc = 0x215a98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x215a9c: 0xa7a30058
    ctx->pc = 0x215a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x215aa0: 0x27a40030
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x215aa4: 0xc069d14
    ctx->pc = 0x215AA4u;
    SET_GPR_U32(ctx, 31, 0x215AACu);
    ctx->pc = 0x215AA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1A7450u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlConvImageLocalMem_0x1a7450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AACu; }
        else if (ctx->pc != 0x215AACu) { ctx->pc = 0x215AACu; }
    }
    if (ctx->pc != 0x215AACu) { return; }
    ctx->pc = 0x215AACu;
    // 0x215aac: 0x1000001a
    ctx->pc = 0x215AACu;
    {
        const bool branch_taken_0x215aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x215aac) {
            ctx->pc = 0x215B18u;
            goto label_215b18;
        }
    }
    ctx->pc = 0x215AB4u;
label_215ab4:
    // 0x215ab4: 0x3c020050
    ctx->pc = 0x215ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215ab8: 0x2444e540
    ctx->pc = 0x215ab8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x215abc: 0x3c050005
    ctx->pc = 0x215abcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x215ac0: 0xc086850
    ctx->pc = 0x215AC0u;
    SET_GPR_U32(ctx, 31, 0x215AC8u);
    ctx->pc = 0x215AC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AC8u; }
        else if (ctx->pc != 0x215AC8u) { ctx->pc = 0x215AC8u; }
    }
    if (ctx->pc != 0x215AC8u) { return; }
    ctx->pc = 0x215AC8u;
    // 0x215ac8: 0xae220014
    ctx->pc = 0x215ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x215acc: 0x8e220014
    ctx->pc = 0x215accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x215ad0: 0x14400007
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215AD4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215AF0u;
            goto label_215af0;
        }
    }
    ctx->pc = 0x215AD8u;
    // 0x215ad8: 0x3c020029
    ctx->pc = 0x215ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215adc: 0xc05114a
    ctx->pc = 0x215ADCu;
    SET_GPR_U32(ctx, 31, 0x215AE4u);
    ctx->pc = 0x215AE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944864));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AE4u; }
        else if (ctx->pc != 0x215AE4u) { ctx->pc = 0x215AE4u; }
    }
    if (ctx->pc != 0x215AE4u) { return; }
    ctx->pc = 0x215AE4u;
label_215ae4:
    // 0x215ae4: 0x1000ffff
    ctx->pc = 0x215AE4u;
    {
        const bool branch_taken_0x215ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x215ae4) {
            ctx->pc = 0x215AE4u;
            goto label_215ae4;
        }
    }
    ctx->pc = 0x215AECu;
    // 0x215aec: 0x24470008
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8));
label_215af0:
    // 0x215af0: 0x3c020029
    ctx->pc = 0x215af0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215af4: 0x2444a610
    ctx->pc = 0x215af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x215af8: 0x3c020021
    ctx->pc = 0x215af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x215afc: 0x24455780
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22400));
    // 0x215b00: 0x3c020021
    ctx->pc = 0x215b00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x215b04: 0xc06ab38
    ctx->pc = 0x215B04u;
    SET_GPR_U32(ctx, 31, 0x215B0Cu);
    ctx->pc = 0x215B08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22512));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B0Cu; }
        else if (ctx->pc != 0x215B0Cu) { ctx->pc = 0x215B0Cu; }
    }
    if (ctx->pc != 0x215B0Cu) { return; }
    ctx->pc = 0x215B0Cu;
    // 0x215b0c: 0x8e220014
    ctx->pc = 0x215b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x215b10: 0xc0806f0
    ctx->pc = 0x215B10u;
    SET_GPR_U32(ctx, 31, 0x215B18u);
    ctx->pc = 0x215B14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x201BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartOverLap1__Fi_0x201bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B18u; }
        else if (ctx->pc != 0x215B18u) { ctx->pc = 0x215B18u; }
    }
    if (ctx->pc != 0x215B18u) { return; }
    ctx->pc = 0x215B18u;
label_215b18:
    // 0x215b18: 0x16000005
    ctx->pc = 0x215B18u;
    {
        const bool branch_taken_0x215b18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x215B1Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215b18) {
            ctx->pc = 0x215B30u;
            goto label_215b30;
        }
    }
    ctx->pc = 0x215B20u;
    // 0x215b20: 0x70002628
    ctx->pc = 0x215b20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215b24: 0xc0694e8
    ctx->pc = 0x215B24u;
    SET_GPR_U32(ctx, 31, 0x215B2Cu);
    ctx->pc = 0x215B28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B2Cu; }
        else if (ctx->pc != 0x215B2Cu) { ctx->pc = 0x215B2Cu; }
    }
    if (ctx->pc != 0x215B2Cu) { return; }
    ctx->pc = 0x215B2Cu;
    // 0x215b2c: 0x70002628
    ctx->pc = 0x215b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_215b30:
    // 0x215b30: 0xc0552d8
    ctx->pc = 0x215B30u;
    SET_GPR_U32(ctx, 31, 0x215B38u);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B38u; }
        else if (ctx->pc != 0x215B38u) { ctx->pc = 0x215B38u; }
    }
    if (ctx->pc != 0x215B38u) { return; }
    ctx->pc = 0x215B38u;
    // 0x215b38: 0x3c020029
    ctx->pc = 0x215b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x215b3c: 0x2442a850
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x215b40: 0x8c450008
    ctx->pc = 0x215b40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215b44: 0x8e240000
    ctx->pc = 0x215b44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215b48: 0xc068fd8
    ctx->pc = 0x215B48u;
    SET_GPR_U32(ctx, 31, 0x215B50u);
    ctx->pc = 0x215B4Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B50u; }
        else if (ctx->pc != 0x215B50u) { ctx->pc = 0x215B50u; }
    }
    if (ctx->pc != 0x215B50u) { return; }
    ctx->pc = 0x215B50u;
    // 0x215b50: 0x7bbf0020
    ctx->pc = 0x215b50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215b54: 0x7bb10010
    ctx->pc = 0x215b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215b58: 0x7bb00000
    ctx->pc = 0x215b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215b5c: 0x3e00008
    ctx->pc = 0x215B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215B60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21592Cu: goto label_21592c;
            case 0x21598Cu: goto label_21598c;
            case 0x2159BCu: goto label_2159bc;
            case 0x2159C8u: goto label_2159c8;
            case 0x215A1Cu: goto label_215a1c;
            case 0x215A3Cu: goto label_215a3c;
            case 0x215A78u: goto label_215a78;
            case 0x215AB4u: goto label_215ab4;
            case 0x215AE4u: goto label_215ae4;
            case 0x215AF0u: goto label_215af0;
            case 0x215B18u: goto label_215b18;
            case 0x215B30u: goto label_215b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215B64u;
}
