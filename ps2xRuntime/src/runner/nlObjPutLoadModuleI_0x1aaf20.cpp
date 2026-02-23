#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLoadModuleI
// Address: 0x1aaf20 - 0x1ab01c
void nlObjPutLoadModuleI_0x1aaf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLoadModuleI");


    ctx->pc = 0x1aaf20u;

    // 0x1aaf20: 0x27bdffb0
    ctx->pc = 0x1aaf20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aaf24: 0x7fbf0040
    ctx->pc = 0x1aaf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1aaf28: 0x7fb30030
    ctx->pc = 0x1aaf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aaf2c: 0x7fb20020
    ctx->pc = 0x1aaf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aaf30: 0x7fb10010
    ctx->pc = 0x1aaf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aaf34: 0x2403fff0
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aaf38: 0x7fb00000
    ctx->pc = 0x1aaf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aaf3c: 0xc39024
    ctx->pc = 0x1aaf3cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aaf40: 0x70808628
    ctx->pc = 0x1aaf40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aaf44: 0x70a08e28
    ctx->pc = 0x1aaf44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1aaf48: 0x1a40002d
    ctx->pc = 0x1AAF48u;
    {
        const bool branch_taken_0x1aaf48 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1AAF4Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2048));
        if (branch_taken_0x1aaf48) {
            ctx->pc = 0x1AB000u;
            goto label_1ab000;
        }
    }
    ctx->pc = 0x1AAF50u;
label_1aaf50:
    // 0x1aaf50: 0x253082a
    ctx->pc = 0x1aaf50u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x1aaf54: 0x10200003
    ctx->pc = 0x1AAF54u;
    {
        const bool branch_taken_0x1aaf54 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        if (branch_taken_0x1aaf54) {
            ctx->pc = 0x1AAF64u;
            goto label_1aaf64;
        }
    }
    ctx->pc = 0x1AAF5Cu;
    // 0x1aaf5c: 0x72409e28
    ctx->pc = 0x1aaf5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1aaf60:
    // 0x1aaf60: 0x3c011001
    ctx->pc = 0x1aaf60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1aaf64:
    // 0x1aaf64: 0x8c22d000
    ctx->pc = 0x1aaf64u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1aaf68: 0x30420100
    ctx->pc = 0x1aaf68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1aaf6c: 0x0
    ctx->pc = 0x1aaf6cu;
    // NOP
    // 0x1aaf70: 0x0
    ctx->pc = 0x1aaf70u;
    // NOP
    // 0x1aaf74: 0x1440fffa
    ctx->pc = 0x1AAF74u;
    {
        const bool branch_taken_0x1aaf74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aaf74) {
            ctx->pc = 0x1AAF60u;
            goto label_1aaf60;
        }
    }
    ctx->pc = 0x1AAF7Cu;
    // 0x1aaf7c: 0xc069528
    ctx->pc = 0x1AAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF84u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF84u; }
        else if (ctx->pc != 0x1AAF84u) { ctx->pc = 0x1AAF84u; }
    }
    if (ctx->pc != 0x1AAF84u) { return; }
    ctx->pc = 0x1AAF84u;
    // 0x1aaf84: 0x6610003
    ctx->pc = 0x1AAF84u;
    {
        const bool branch_taken_0x1aaf84 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1AAF88u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x1aaf84) {
            ctx->pc = 0x1AAF94u;
            goto label_1aaf94;
        }
    }
    ctx->pc = 0x1AAF8Cu;
    // 0x1aaf8c: 0x2663000f
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 15));
    // 0x1aaf90: 0x32103
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1aaf94:
    // 0x1aaf94: 0x3c033000
    ctx->pc = 0x1aaf94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x1aaf98: 0x831825
    ctx->pc = 0x1aaf98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aaf9c: 0xac430000
    ctx->pc = 0x1aaf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1aafa0: 0xac500004
    ctx->pc = 0x1aafa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1aafa4: 0x3c031000
    ctx->pc = 0x1aafa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1aafa8: 0xac430008
    ctx->pc = 0x1aafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1aafac: 0x6610003
    ctx->pc = 0x1AAFACu;
    {
        const bool branch_taken_0x1aafac = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1AAFB0u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 3));
        if (branch_taken_0x1aafac) {
            ctx->pc = 0x1AAFBCu;
            goto label_1aafbc;
        }
    }
    ctx->pc = 0x1AAFB4u;
    // 0x1aafb4: 0x26630007
    ctx->pc = 0x1aafb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 7));
    // 0x1aafb8: 0x318c3
    ctx->pc = 0x1aafb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1aafbc:
    // 0x1aafbc: 0x306300ff
    ctx->pc = 0x1aafbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1aafc0: 0x32400
    ctx->pc = 0x1aafc0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1aafc4: 0x6210003
    ctx->pc = 0x1AAFC4u;
    {
        const bool branch_taken_0x1aafc4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AAFC8u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 3));
        if (branch_taken_0x1aafc4) {
            ctx->pc = 0x1AAFD4u;
            goto label_1aafd4;
        }
    }
    ctx->pc = 0x1AAFCCu;
    // 0x1aafcc: 0x26230007
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 7));
    // 0x1aafd0: 0x318c3
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1aafd4:
    // 0x1aafd4: 0x642025
    ctx->pc = 0x1aafd4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aafd8: 0x3c034a00
    ctx->pc = 0x1aafd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18944 << 16));
    // 0x1aafdc: 0x831825
    ctx->pc = 0x1aafdcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aafe0: 0xac43000c
    ctx->pc = 0x1aafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1aafe4: 0xc06952c
    ctx->pc = 0x1AAFE4u;
    SET_GPR_U32(ctx, 31, 0x1AAFECu);
    ctx->pc = 0x1AAFE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFECu; }
        else if (ctx->pc != 0x1AAFECu) { ctx->pc = 0x1AAFECu; }
    }
    if (ctx->pc != 0x1AAFECu) { return; }
    ctx->pc = 0x1AAFECu;
    // 0x1aafec: 0x2539023
    ctx->pc = 0x1aafecu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1aaff0: 0x2138021
    ctx->pc = 0x1aaff0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1aaff4: 0x1e40ffd6
    ctx->pc = 0x1AAFF4u;
    {
        const bool branch_taken_0x1aaff4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1AAFF8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        if (branch_taken_0x1aaff4) {
            ctx->pc = 0x1AAF50u;
            goto label_1aaf50;
        }
    }
    ctx->pc = 0x1AAFFCu;
    // 0x1aaffc: 0x0
    ctx->pc = 0x1aaffcu;
    // NOP
label_1ab000:
    // 0x1ab000: 0x7bbf0040
    ctx->pc = 0x1ab000u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab004: 0x7bb30030
    ctx->pc = 0x1ab004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab008: 0x7bb20020
    ctx->pc = 0x1ab008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab00c: 0x7bb10010
    ctx->pc = 0x1ab00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab010: 0x7bb00000
    ctx->pc = 0x1ab010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab014: 0x3e00008
    ctx->pc = 0x1AB014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AAF50u: goto label_1aaf50;
            case 0x1AAF60u: goto label_1aaf60;
            case 0x1AAF64u: goto label_1aaf64;
            case 0x1AAF94u: goto label_1aaf94;
            case 0x1AAFBCu: goto label_1aafbc;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AB000u: goto label_1ab000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB01Cu;
}
