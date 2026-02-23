#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gmoverInit__10PlayerTaskFv
// Address: 0x20eb20 - 0x20ec30
void gmoverInit__10PlayerTaskFv_0x20eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gmoverInit__10PlayerTaskFv");


    ctx->pc = 0x20eb20u;

    // 0x20eb20: 0x27bdfff0
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20eb24: 0x7fbf0000
    ctx->pc = 0x20eb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20eb28: 0x8f838bcc
    ctx->pc = 0x20eb28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20eb2c: 0x24020001
    ctx->pc = 0x20eb2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb30: 0x1462000d
    ctx->pc = 0x20EB30u;
    {
        const bool branch_taken_0x20eb30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20EB34u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20eb30) {
            ctx->pc = 0x20EB68u;
            goto label_20eb68;
        }
    }
    ctx->pc = 0x20EB38u;
    // 0x20eb38: 0x8cc41cb8
    ctx->pc = 0x20eb38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 7352)));
    // 0x20eb3c: 0x3c020050
    ctx->pc = 0x20eb3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20eb40: 0x2443fc82
    ctx->pc = 0x20eb40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966402));
    // 0x20eb44: 0x3c020050
    ctx->pc = 0x20eb44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20eb48: 0x2442fc83
    ctx->pc = 0x20eb48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966403));
    // 0x20eb4c: 0x42080
    ctx->pc = 0x20eb4cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20eb50: 0x641821
    ctx->pc = 0x20eb50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20eb54: 0xa0600000
    ctx->pc = 0x20eb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20eb58: 0x8cc31cb8
    ctx->pc = 0x20eb58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 7352)));
    // 0x20eb5c: 0x31880
    ctx->pc = 0x20eb5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20eb60: 0x431021
    ctx->pc = 0x20eb60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20eb64: 0xa0400000
    ctx->pc = 0x20eb64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_20eb68:
    // 0x20eb68: 0x3c010050
    ctx->pc = 0x20eb68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20eb6c: 0x8423e504
    ctx->pc = 0x20eb6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20eb70: 0x2402000b
    ctx->pc = 0x20eb70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x20eb74: 0x10620004
    ctx->pc = 0x20EB74u;
    {
        const bool branch_taken_0x20eb74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20EB78u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20eb74) {
            ctx->pc = 0x20EB88u;
            goto label_20eb88;
        }
    }
    ctx->pc = 0x20EB7Cu;
    // 0x20eb7c: 0x8cc227fc
    ctx->pc = 0x20eb7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 10236)));
    // 0x20eb80: 0x34420004
    ctx->pc = 0x20eb80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x20eb84: 0xacc227fc
    ctx->pc = 0x20eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10236), GPR_U32(ctx, 2));
label_20eb88:
    // 0x20eb88: 0x8423e3f0
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960112)));
    // 0x20eb8c: 0x24020001
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eb90: 0x14620008
    ctx->pc = 0x20EB90u;
    {
        const bool branch_taken_0x20eb90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20eb90) {
            ctx->pc = 0x20EBB4u;
            goto label_20ebb4;
        }
    }
    ctx->pc = 0x20EB98u;
    // 0x20eb98: 0x8cc20000
    ctx->pc = 0x20eb98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20eb9c: 0xac400008
    ctx->pc = 0x20eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x20eba0: 0x8cc20000
    ctx->pc = 0x20eba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20eba4: 0xac400004
    ctx->pc = 0x20eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20eba8: 0x8cc20000
    ctx->pc = 0x20eba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ebac: 0x1000000f
    ctx->pc = 0x20EBACu;
    {
        const bool branch_taken_0x20ebac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EBB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x20ebac) {
            ctx->pc = 0x20EBECu;
            goto label_20ebec;
        }
    }
    ctx->pc = 0x20EBB4u;
label_20ebb4:
    // 0x20ebb4: 0x8cc41cb8
    ctx->pc = 0x20ebb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 7352)));
    // 0x20ebb8: 0x3c020027
    ctx->pc = 0x20ebb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20ebbc: 0x24423320
    ctx->pc = 0x20ebbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13088));
    // 0x20ebc0: 0x8cc50000
    ctx->pc = 0x20ebc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ebc4: 0x41840
    ctx->pc = 0x20ebc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ebc8: 0x641821
    ctx->pc = 0x20ebc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ebcc: 0x31880
    ctx->pc = 0x20ebccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ebd0: 0x431021
    ctx->pc = 0x20ebd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ebd4: 0xc4400000
    ctx->pc = 0x20ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ebd8: 0xe4a00000
    ctx->pc = 0x20ebd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20ebdc: 0xc4400004
    ctx->pc = 0x20ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ebe0: 0xe4a00004
    ctx->pc = 0x20ebe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x20ebe4: 0xc4400008
    ctx->pc = 0x20ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ebe8: 0xe4a00008
    ctx->pc = 0x20ebe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_20ebec:
    // 0x20ebec: 0x8cc30000
    ctx->pc = 0x20ebecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ebf0: 0x3c020027
    ctx->pc = 0x20ebf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20ebf4: 0x24040064
    ctx->pc = 0x20ebf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 100));
    // 0x20ebf8: 0x24423338
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13112));
    // 0x20ebfc: 0xac60002c
    ctx->pc = 0x20ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x20ec00: 0x8cc30000
    ctx->pc = 0x20ec00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ec04: 0xac600028
    ctx->pc = 0x20ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x20ec08: 0x8cc30000
    ctx->pc = 0x20ec08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ec0c: 0xac600024
    ctx->pc = 0x20ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x20ec10: 0x8cc31cbc
    ctx->pc = 0x20ec10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 7356)));
    // 0x20ec14: 0xac640074
    ctx->pc = 0x20ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
    // 0x20ec18: 0x8cc41cb4
    ctx->pc = 0x20ec18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 7348)));
    // 0x20ec1c: 0xc068fd8
    ctx->pc = 0x20EC1Cu;
    SET_GPR_U32(ctx, 31, 0x20EC24u);
    ctx->pc = 0x20EC20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC24u; }
        else if (ctx->pc != 0x20EC24u) { ctx->pc = 0x20EC24u; }
    }
    if (ctx->pc != 0x20EC24u) { return; }
    ctx->pc = 0x20EC24u;
    // 0x20ec24: 0x7bbf0000
    ctx->pc = 0x20ec24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ec28: 0x3e00008
    ctx->pc = 0x20EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EC2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EB68u: goto label_20eb68;
            case 0x20EB88u: goto label_20eb88;
            case 0x20EBB4u: goto label_20ebb4;
            case 0x20EBECu: goto label_20ebec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EC30u;
}
