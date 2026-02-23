#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calc_miptbp
// Address: 0x1a9e50 - 0x1aa070
void calc_miptbp_0x1a9e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calc_miptbp");


    ctx->pc = 0x1a9e50u;

    // 0x1a9e50: 0x27bdff80
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a9e54: 0x7fbf0060
    ctx->pc = 0x1a9e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a9e58: 0x7fb50050
    ctx->pc = 0x1a9e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a9e5c: 0x7fb40040
    ctx->pc = 0x1a9e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a9e60: 0x7fb30030
    ctx->pc = 0x1a9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a9e64: 0x7fb20020
    ctx->pc = 0x1a9e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a9e68: 0x7fb10010
    ctx->pc = 0x1a9e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9e6c: 0x7fb00000
    ctx->pc = 0x1a9e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9e70: 0x7080ae28
    ctx->pc = 0x1a9e70u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a9e74: 0x70a0a628
    ctx->pc = 0x1a9e74u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a9e78: 0x70e09628
    ctx->pc = 0x1a9e78u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a9e7c: 0x71008e28
    ctx->pc = 0x1a9e7cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a9e80: 0x71208628
    ctx->pc = 0x1a9e80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1a9e84: 0x70c09e28
    ctx->pc = 0x1a9e84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a9e88: 0x27a40078
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1a9e8c: 0xc06a710
    ctx->pc = 0x1A9E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E94u);
    ctx->pc = 0x1A9E90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 124));
    ctx->pc = 0x1A9C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBlockSizeLog2_0x1a9c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E94u; }
        else if (ctx->pc != 0x1A9E94u) { ctx->pc = 0x1A9E94u; }
    }
    if (ctx->pc != 0x1A9E94u) { return; }
    ctx->pc = 0x1A9E94u;
    // 0x1a9e94: 0x8fa30078
    ctx->pc = 0x1a9e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9e98: 0x8fa2007c
    ctx->pc = 0x1a9e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9e9c: 0x2a31823
    ctx->pc = 0x1a9e9cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1a9ea0: 0x2821023
    ctx->pc = 0x1a9ea0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1a9ea4: 0xafa30078
    ctx->pc = 0x1a9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9ea8: 0xafa2007c
    ctx->pc = 0x1a9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a9eac: 0x8fa50078
    ctx->pc = 0x1a9eacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9eb0: 0x8fa4007c
    ctx->pc = 0x1a9eb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9eb4: 0x85082a
    ctx->pc = 0x1a9eb4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x1a9eb8: 0x10200004
    ctx->pc = 0x1A9EB8u;
    {
        const bool branch_taken_0x1a9eb8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9EBCu;
        SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9eb8) {
            ctx->pc = 0x1A9ECCu;
            goto label_1a9ecc;
        }
    }
    ctx->pc = 0x1A9EC0u;
    // 0x1a9ec0: 0x10000002
    ctx->pc = 0x1A9EC0u;
    {
        const bool branch_taken_0x1a9ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9EC4u;
        SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9ec0) {
            ctx->pc = 0x1A9ECCu;
            goto label_1a9ecc;
        }
    }
    ctx->pc = 0x1A9EC8u;
    // 0x1a9ec8: 0x70a05628
    ctx->pc = 0x1a9ec8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1a9ecc:
    // 0x1a9ecc: 0x254a0001
    ctx->pc = 0x1a9eccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a9ed0: 0x5410004
    ctx->pc = 0x1A9ED0u;
    {
        const bool branch_taken_0x1a9ed0 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1A9ED4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 4));
        if (branch_taken_0x1a9ed0) {
            ctx->pc = 0x1A9EE4u;
            goto label_1a9ee4;
        }
    }
    ctx->pc = 0x1A9ED8u;
    // 0x1a9ed8: 0x10000005
    ctx->pc = 0x1A9ED8u;
    {
        const bool branch_taken_0x1a9ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9EDCu;
        SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9ed8) {
            ctx->pc = 0x1A9EF0u;
            goto label_1a9ef0;
        }
    }
    ctx->pc = 0x1A9EE0u;
    // 0x1a9ee0: 0x29420004
    ctx->pc = 0x1a9ee0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 4));
label_1a9ee4:
    // 0x1a9ee4: 0x14400003
    ctx->pc = 0x1A9EE4u;
    {
        const bool branch_taken_0x1a9ee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9EE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 288));
        if (branch_taken_0x1a9ee4) {
            ctx->pc = 0x1A9EF4u;
            goto label_1a9ef4;
        }
    }
    ctx->pc = 0x1A9EECu;
    // 0x1a9eec: 0x240a0006
    ctx->pc = 0x1a9eecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 6));
label_1a9ef0:
    // 0x1a9ef0: 0x32220120
    ctx->pc = 0x1a9ef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 288));
label_1a9ef4:
    // 0x1a9ef4: 0x14400006
    ctx->pc = 0x1A9EF4u;
    {
        const bool branch_taken_0x1a9ef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9EF8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 21)));
        if (branch_taken_0x1a9ef4) {
            ctx->pc = 0x1A9F10u;
            goto label_1a9f10;
        }
    }
    ctx->pc = 0x1A9EFCu;
    // 0x1a9efc: 0x322300e0
    ctx->pc = 0x1a9efcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 224));
    // 0x1a9f00: 0x24020040
    ctx->pc = 0x1a9f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a9f04: 0x1462000c
    ctx->pc = 0x1A9F04u;
    {
        const bool branch_taken_0x1a9f04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A9F08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a9f04) {
            ctx->pc = 0x1A9F38u;
            goto label_1a9f38;
        }
    }
    ctx->pc = 0x1A9F0Cu;
    // 0x1a9f0c: 0x295082a
    ctx->pc = 0x1a9f0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 21)));
label_1a9f10:
    // 0x1a9f10: 0x2a1a00a
    ctx->pc = 0x1a9f10u;
    if (GPR_U32(ctx, 1) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 21));
    // 0x1a9f14: 0x2694fffd
    ctx->pc = 0x1a9f14u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967293));
    // 0x1a9f18: 0x6810003
    ctx->pc = 0x1A9F18u;
    {
        const bool branch_taken_0x1a9f18 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1A9F1Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 10)));
        if (branch_taken_0x1a9f18) {
            ctx->pc = 0x1A9F28u;
            goto label_1a9f28;
        }
    }
    ctx->pc = 0x1A9F20u;
    // 0x1a9f20: 0x7000a628
    ctx->pc = 0x1a9f20u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9f24: 0x28a082a
    ctx->pc = 0x1a9f24u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 10)));
label_1a9f28:
    // 0x1a9f28: 0x10200002
    ctx->pc = 0x1A9F28u;
    {
        const bool branch_taken_0x1a9f28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9f28) {
            ctx->pc = 0x1A9F34u;
            goto label_1a9f34;
        }
    }
    ctx->pc = 0x1A9F30u;
    // 0x1a9f30: 0x72805628
    ctx->pc = 0x1a9f30u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1a9f34:
    // 0x1a9f34: 0x24020001
    ctx->pc = 0x1a9f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a9f38:
    // 0x1a9f38: 0xa21804
    ctx->pc = 0x1a9f38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a9f3c: 0x821004
    ctx->pc = 0x1a9f3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a9f40: 0xafa2007c
    ctx->pc = 0x1a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a9f44: 0x8fa2007c
    ctx->pc = 0x1a9f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9f48: 0x72603628
    ctx->pc = 0x1a9f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a9f4c: 0x72403e28
    ctx->pc = 0x1a9f4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a9f50: 0xafa30078
    ctx->pc = 0x1a9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9f54: 0x70002628
    ctx->pc = 0x1a9f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9f58: 0x70004628
    ctx->pc = 0x1a9f58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9f5c: 0x24821
    ctx->pc = 0x1a9f5cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a9f60: 0xc06a738
    ctx->pc = 0x1A9F60u;
    SET_GPR_U32(ctx, 31, 0x1A9F68u);
    ctx->pc = 0x1A9F64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F68u; }
        else if (ctx->pc != 0x1A9F68u) { ctx->pc = 0x1A9F68u; }
    }
    if (ctx->pc != 0x1A9F68u) { return; }
    ctx->pc = 0x1A9F68u;
    // 0x1a9f68: 0x8e030000
    ctx->pc = 0x1a9f68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9f6c: 0x621021
    ctx->pc = 0x1a9f6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9f70: 0xae020004
    ctx->pc = 0x1a9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a9f74: 0x8fa30078
    ctx->pc = 0x1a9f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9f78: 0x8fa2007c
    ctx->pc = 0x1a9f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9f7c: 0x31843
    ctx->pc = 0x1a9f7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a9f80: 0x21043
    ctx->pc = 0x1a9f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9f84: 0xafa30078
    ctx->pc = 0x1a9f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9f88: 0xafa2007c
    ctx->pc = 0x1a9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a9f8c: 0x8fa20078
    ctx->pc = 0x1a9f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9f90: 0x1024021
    ctx->pc = 0x1a9f90u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a9f94: 0xc06a738
    ctx->pc = 0x1A9F94u;
    SET_GPR_U32(ctx, 31, 0x1A9F9Cu);
    ctx->pc = 0x1A9F98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
        else if (ctx->pc != 0x1A9F9Cu) { ctx->pc = 0x1A9F9Cu; }
    }
    if (ctx->pc != 0x1A9F9Cu) { return; }
    ctx->pc = 0x1A9F9Cu;
    // 0x1a9f9c: 0x8e030000
    ctx->pc = 0x1a9f9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9fa0: 0x621021
    ctx->pc = 0x1a9fa0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9fa4: 0xae020008
    ctx->pc = 0x1a9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a9fa8: 0x8fa2007c
    ctx->pc = 0x1a9fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9fac: 0x8fa30078
    ctx->pc = 0x1a9facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9fb0: 0x21043
    ctx->pc = 0x1a9fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9fb4: 0xafa2007c
    ctx->pc = 0x1a9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a9fb8: 0x8fa2007c
    ctx->pc = 0x1a9fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9fbc: 0x31843
    ctx->pc = 0x1a9fbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a9fc0: 0xafa30078
    ctx->pc = 0x1a9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9fc4: 0x1224821
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a9fc8: 0xc06a738
    ctx->pc = 0x1A9FC8u;
    SET_GPR_U32(ctx, 31, 0x1A9FD0u);
    ctx->pc = 0x1A9FCCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD0u; }
        else if (ctx->pc != 0x1A9FD0u) { ctx->pc = 0x1A9FD0u; }
    }
    if (ctx->pc != 0x1A9FD0u) { return; }
    ctx->pc = 0x1A9FD0u;
    // 0x1a9fd0: 0x8e030000
    ctx->pc = 0x1a9fd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9fd4: 0x621021
    ctx->pc = 0x1a9fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9fd8: 0xae02000c
    ctx->pc = 0x1a9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a9fdc: 0x8fa30078
    ctx->pc = 0x1a9fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9fe0: 0x8fa2007c
    ctx->pc = 0x1a9fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9fe4: 0x31843
    ctx->pc = 0x1a9fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a9fe8: 0x21043
    ctx->pc = 0x1a9fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a9fec: 0xafa30078
    ctx->pc = 0x1a9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9ff0: 0xafa2007c
    ctx->pc = 0x1a9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a9ff4: 0x8fa20078
    ctx->pc = 0x1a9ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9ff8: 0xc06a738
    ctx->pc = 0x1A9FF8u;
    SET_GPR_U32(ctx, 31, 0x1AA000u);
    ctx->pc = 0x1A9FFCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA000u; }
        else if (ctx->pc != 0x1AA000u) { ctx->pc = 0x1AA000u; }
    }
    if (ctx->pc != 0x1AA000u) { return; }
    ctx->pc = 0x1AA000u;
    // 0x1aa000: 0x8e030000
    ctx->pc = 0x1aa000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa004: 0x71002628
    ctx->pc = 0x1aa004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1aa008: 0x621021
    ctx->pc = 0x1aa008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa00c: 0xae020010
    ctx->pc = 0x1aa00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1aa010: 0x8fa2007c
    ctx->pc = 0x1aa010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1aa014: 0xc06a738
    ctx->pc = 0x1AA014u;
    SET_GPR_U32(ctx, 31, 0x1AA01Cu);
    ctx->pc = 0x1AA018u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA01Cu; }
        else if (ctx->pc != 0x1AA01Cu) { ctx->pc = 0x1AA01Cu; }
    }
    if (ctx->pc != 0x1AA01Cu) { return; }
    ctx->pc = 0x1AA01Cu;
    // 0x1aa01c: 0x8e030000
    ctx->pc = 0x1aa01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa020: 0x621021
    ctx->pc = 0x1aa020u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa024: 0xae020014
    ctx->pc = 0x1aa024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1aa028: 0x8fa30078
    ctx->pc = 0x1aa028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1aa02c: 0x8fa2007c
    ctx->pc = 0x1aa02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1aa030: 0x1032021
    ctx->pc = 0x1aa030u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1aa034: 0xc06a738
    ctx->pc = 0x1AA034u;
    SET_GPR_U32(ctx, 31, 0x1AA03Cu);
    ctx->pc = 0x1AA038u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetBpFromPos_0x1a9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA03Cu; }
        else if (ctx->pc != 0x1AA03Cu) { ctx->pc = 0x1AA03Cu; }
    }
    if (ctx->pc != 0x1AA03Cu) { return; }
    ctx->pc = 0x1AA03Cu;
    // 0x1aa03c: 0x8e030000
    ctx->pc = 0x1aa03cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa040: 0x621021
    ctx->pc = 0x1aa040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa044: 0xae020018
    ctx->pc = 0x1aa044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1aa048: 0x7bbf0060
    ctx->pc = 0x1aa048u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aa04c: 0x7bb50050
    ctx->pc = 0x1aa04cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa050: 0x7bb40040
    ctx->pc = 0x1aa050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa054: 0x7bb30030
    ctx->pc = 0x1aa054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa058: 0x7bb20020
    ctx->pc = 0x1aa058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa05c: 0x7bb10010
    ctx->pc = 0x1aa05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa060: 0x7bb00000
    ctx->pc = 0x1aa060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa064: 0x71401628
    ctx->pc = 0x1aa064u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1aa068: 0x3e00008
    ctx->pc = 0x1AA068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA06Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9ECCu: goto label_1a9ecc;
            case 0x1A9EE4u: goto label_1a9ee4;
            case 0x1A9EF0u: goto label_1a9ef0;
            case 0x1A9EF4u: goto label_1a9ef4;
            case 0x1A9F10u: goto label_1a9f10;
            case 0x1A9F28u: goto label_1a9f28;
            case 0x1A9F34u: goto label_1a9f34;
            case 0x1A9F38u: goto label_1a9f38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA070u;
}
