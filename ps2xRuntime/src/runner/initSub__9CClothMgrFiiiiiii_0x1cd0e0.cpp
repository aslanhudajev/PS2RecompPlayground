#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSub__9CClothMgrFiiiiiii
// Address: 0x1cd0e0 - 0x1cd26c
void initSub__9CClothMgrFiiiiiii_0x1cd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSub__9CClothMgrFiiiiiii");


    ctx->pc = 0x1cd0e0u;

    // 0x1cd0e0: 0x27bdff50
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cd0e4: 0x7fbf0090
    ctx->pc = 0x1cd0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1cd0e8: 0x7fbe0080
    ctx->pc = 0x1cd0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1cd0ec: 0x7fb70070
    ctx->pc = 0x1cd0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cd0f0: 0x7fb60060
    ctx->pc = 0x1cd0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cd0f4: 0x7fb50050
    ctx->pc = 0x1cd0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cd0f8: 0x7fb40040
    ctx->pc = 0x1cd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cd0fc: 0x7fb30030
    ctx->pc = 0x1cd0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd100: 0x7fb20020
    ctx->pc = 0x1cd100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd104: 0x7fb10010
    ctx->pc = 0x1cd104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd108: 0x7fb00000
    ctx->pc = 0x1cd108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd10c: 0x70809e28
    ctx->pc = 0x1cd10cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cd110: 0x70c08e28
    ctx->pc = 0x1cd110u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cd114: 0x70a09628
    ctx->pc = 0x1cd114u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd118: 0x70e08628
    ctx->pc = 0x1cd118u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cd11c: 0x7100b628
    ctx->pc = 0x1cd11cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cd120: 0x7120be28
    ctx->pc = 0x1cd120u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1cd124: 0x7140f628
    ctx->pc = 0x1cd124u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1cd128: 0xafab00ac
    ctx->pc = 0x1cd128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
    // 0x1cd12c: 0x27848c78
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
    // 0x1cd130: 0xc074b6c
    ctx->pc = 0x1CD130u;
    SET_GPR_U32(ctx, 31, 0x1CD138u);
    ctx->pc = 0x1CD134u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D2DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getAdr__13ClVtxMgrClassFi_0x1d2db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD138u; }
        else if (ctx->pc != 0x1CD138u) { ctx->pc = 0x1CD138u; }
    }
    if (ctx->pc != 0x1CD138u) { return; }
    ctx->pc = 0x1CD138u;
    // 0x1cd138: 0x7040a628
    ctx->pc = 0x1cd138u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd13c: 0x1280003f
    ctx->pc = 0x1CD13Cu;
    {
        const bool branch_taken_0x1cd13c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd13c) {
            ctx->pc = 0x1CD23Cu;
            goto label_1cd23c;
        }
    }
    ctx->pc = 0x1CD144u;
    // 0x1cd144: 0x24020001
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd148: 0xae620004
    ctx->pc = 0x1cd148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1cd14c: 0xc06878c
    ctx->pc = 0x1CD14Cu;
    SET_GPR_U32(ctx, 31, 0x1CD154u);
    ctx->pc = 0x1CD150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1424));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD154u; }
        else if (ctx->pc != 0x1CD154u) { ctx->pc = 0x1CD154u; }
    }
    if (ctx->pc != 0x1CD154u) { return; }
    ctx->pc = 0x1CD154u;
    // 0x1cd154: 0x10400008
    ctx->pc = 0x1CD154u;
    {
        const bool branch_taken_0x1cd154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD158u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd154) {
            ctx->pc = 0x1CD178u;
            goto label_1cd178;
        }
    }
    ctx->pc = 0x1CD15Cu;
    // 0x1cd15c: 0x70402628
    ctx->pc = 0x1cd15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd160: 0x70002e28
    ctx->pc = 0x1cd160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd164: 0x70003628
    ctx->pc = 0x1cd164u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd168: 0x24070040
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cd16c: 0xc071b84
    ctx->pc = 0x1CD16Cu;
    SET_GPR_U32(ctx, 31, 0x1CD174u);
    ctx->pc = 0x1CD170u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD174u; }
        else if (ctx->pc != 0x1CD174u) { ctx->pc = 0x1CD174u; }
    }
    if (ctx->pc != 0x1CD174u) { return; }
    ctx->pc = 0x1CD174u;
    // 0x1cd174: 0x7040ae28
    ctx->pc = 0x1cd174u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cd178:
    // 0x1cd178: 0x24040070
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 112));
    // 0x1cd17c: 0xc06878c
    ctx->pc = 0x1CD17Cu;
    SET_GPR_U32(ctx, 31, 0x1CD184u);
    ctx->pc = 0x1CD180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 21));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD184u; }
        else if (ctx->pc != 0x1CD184u) { ctx->pc = 0x1CD184u; }
    }
    if (ctx->pc != 0x1CD184u) { return; }
    ctx->pc = 0x1CD184u;
    // 0x1cd184: 0x7040ae28
    ctx->pc = 0x1cd184u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd188: 0x12a00003
    ctx->pc = 0x1CD188u;
    {
        const bool branch_taken_0x1cd188 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD18Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd188) {
            ctx->pc = 0x1CD198u;
            goto label_1cd198;
        }
    }
    ctx->pc = 0x1CD190u;
    // 0x1cd190: 0xc073aac
    ctx->pc = 0x1CD190u;
    SET_GPR_U32(ctx, 31, 0x1CD198u);
    ctx->pc = 0x1CEAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6CClothFv_0x1ceab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD198u; }
        else if (ctx->pc != 0x1CD198u) { ctx->pc = 0x1CD198u; }
    }
    if (ctx->pc != 0x1CD198u) { return; }
    ctx->pc = 0x1CD198u;
label_1cd198:
    // 0x1cd198: 0xae750008
    ctx->pc = 0x1cd198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 21));
    // 0x1cd19c: 0x8e640008
    ctx->pc = 0x1cd19cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cd1a0: 0x72002e28
    ctx->pc = 0x1cd1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cd1a4: 0x72c03628
    ctx->pc = 0x1cd1a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1cd1a8: 0xc073afc
    ctx->pc = 0x1CD1A8u;
    SET_GPR_U32(ctx, 31, 0x1CD1B0u);
    ctx->pc = 0x1CD1ACu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CEBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init0__6CClothFiii_0x1cebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1B0u; }
        else if (ctx->pc != 0x1CD1B0u) { ctx->pc = 0x1CD1B0u; }
    }
    if (ctx->pc != 0x1CD1B0u) { return; }
    ctx->pc = 0x1CD1B0u;
    // 0x1cd1b0: 0x8e640008
    ctx->pc = 0x1cd1b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cd1b4: 0x1e2c3c
    ctx->pc = 0x1cd1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << (32 + 16));
    // 0x1cd1b8: 0xc073b28
    ctx->pc = 0x1CD1B8u;
    SET_GPR_U32(ctx, 31, 0x1CD1C0u);
    ctx->pc = 0x1CD1BCu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->pc = 0x1CECA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setType__6CClothFs_0x1ceca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1C0u; }
        else if (ctx->pc != 0x1CD1C0u) { ctx->pc = 0x1CD1C0u; }
    }
    if (ctx->pc != 0x1CD1C0u) { return; }
    ctx->pc = 0x1CD1C0u;
    // 0x1cd1c0: 0x8fa700ac
    ctx->pc = 0x1cd1c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1cd1c4: 0x8e640008
    ctx->pc = 0x1cd1c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cd1c8: 0x72802e28
    ctx->pc = 0x1cd1c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cd1cc: 0xc073b30
    ctx->pc = 0x1CD1CCu;
    SET_GPR_U32(ctx, 31, 0x1CD1D4u);
    ctx->pc = 0x1CD1D0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CECC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setWeightTbl2__6CClothFPcii_0x1cecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1D4u; }
        else if (ctx->pc != 0x1CD1D4u) { ctx->pc = 0x1CD1D4u; }
    }
    if (ctx->pc != 0x1CD1D4u) { return; }
    ctx->pc = 0x1CD1D4u;
    // 0x1cd1d4: 0x8e640008
    ctx->pc = 0x1cd1d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cd1d8: 0x72802e28
    ctx->pc = 0x1cd1d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cd1dc: 0xc073b40
    ctx->pc = 0x1CD1DCu;
    SET_GPR_U32(ctx, 31, 0x1CD1E4u);
    ctx->pc = 0x1CD1E0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CED00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTbl2__6CClothFPci_0x1ced00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1E4u; }
        else if (ctx->pc != 0x1CD1E4u) { ctx->pc = 0x1CD1E4u; }
    }
    if (ctx->pc != 0x1CD1E4u) { return; }
    ctx->pc = 0x1CD1E4u;
    // 0x1cd1e4: 0x8e640008
    ctx->pc = 0x1cd1e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cd1e8: 0x70002e28
    ctx->pc = 0x1cd1e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1ec: 0x70003628
    ctx->pc = 0x1cd1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1f0: 0x70003e28
    ctx->pc = 0x1cd1f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1f4: 0x70004628
    ctx->pc = 0x1cd1f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd1f8: 0xc073b50
    ctx->pc = 0x1CD1F8u;
    SET_GPR_U32(ctx, 31, 0x1CD200u);
    ctx->pc = 0x1CD1FCu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CED40u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTunagimeTbl__6CClothFPiiPiiPi_0x1ced40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD200u; }
        else if (ctx->pc != 0x1CD200u) { ctx->pc = 0x1CD200u; }
    }
    if (ctx->pc != 0x1CD200u) { return; }
    ctx->pc = 0x1CD200u;
    // 0x1cd200: 0x121403
    ctx->pc = 0x1cd200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 16));
    // 0x1cd204: 0x3042ffff
    ctx->pc = 0x1cd204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1cd208: 0x21900
    ctx->pc = 0x1cd208u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cd20c: 0x3c020050
    ctx->pc = 0x1cd20cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cd210: 0x2442ea24
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1cd214: 0x431021
    ctx->pc = 0x1cd214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd218: 0x8c420000
    ctx->pc = 0x1cd218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd21c: 0x3245ffff
    ctx->pc = 0x1cd21cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 18), 65535));
    // 0x1cd220: 0x51840
    ctx->pc = 0x1cd220u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cd224: 0x651821
    ctx->pc = 0x1cd224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cd228: 0x31880
    ctx->pc = 0x1cd228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd22c: 0x431021
    ctx->pc = 0x1cd22cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd230: 0x8c450000
    ctx->pc = 0x1cd230u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd234: 0xc0749e0
    ctx->pc = 0x1CD234u;
    SET_GPR_U32(ctx, 31, 0x1CD23Cu);
    ctx->pc = 0x1CD238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x1D2780u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPol__6CClothFPi_0x1d2780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD23Cu; }
        else if (ctx->pc != 0x1CD23Cu) { ctx->pc = 0x1CD23Cu; }
    }
    if (ctx->pc != 0x1CD23Cu) { return; }
    ctx->pc = 0x1CD23Cu;
label_1cd23c:
    // 0x1cd23c: 0x7bbf0090
    ctx->pc = 0x1cd23cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd240: 0x7bbe0080
    ctx->pc = 0x1cd240u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd244: 0x7bb70070
    ctx->pc = 0x1cd244u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd248: 0x7bb60060
    ctx->pc = 0x1cd248u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd24c: 0x7bb50050
    ctx->pc = 0x1cd24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd250: 0x7bb40040
    ctx->pc = 0x1cd250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd254: 0x7bb30030
    ctx->pc = 0x1cd254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd258: 0x7bb20020
    ctx->pc = 0x1cd258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd25c: 0x7bb10010
    ctx->pc = 0x1cd25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd260: 0x7bb00000
    ctx->pc = 0x1cd260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd264: 0x3e00008
    ctx->pc = 0x1CD264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD178u: goto label_1cd178;
            case 0x1CD198u: goto label_1cd198;
            case 0x1CD23Cu: goto label_1cd23c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD26Cu;
}
