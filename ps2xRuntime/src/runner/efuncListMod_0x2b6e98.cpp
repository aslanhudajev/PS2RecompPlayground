#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncListMod
// Address: 0x2b6e98 - 0x2b6f58
void efuncListMod_0x2b6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6e98u;

    // 0x2b6e98: 0x27bdffb0
    ctx->pc = 0x2b6e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6e9c: 0xffbf0040
    ctx->pc = 0x2b6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b6ea0: 0xffb30030
    ctx->pc = 0x2b6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b6ea4: 0xffb20020
    ctx->pc = 0x2b6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b6ea8: 0xffb10010
    ctx->pc = 0x2b6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6eac: 0xffb00000
    ctx->pc = 0x2b6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6eb0: 0x8c930000
    ctx->pc = 0x2b6eb0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6eb4: 0x8c900010
    ctx->pc = 0x2b6eb4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b6eb8: 0xc0ad1a2
    ctx->pc = 0x2B6EB8u;
    SET_GPR_U32(ctx, 31, 0x2B6EC0u);
    ctx->pc = 0x2B6EBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EC0u; }
    }
    if (ctx->pc != 0x2B6EC0u) { return; }
    ctx->pc = 0x2B6EC0u;
    // 0x2b6ec0: 0x40882d
    ctx->pc = 0x2b6ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ec4: 0xc0ad1a2
    ctx->pc = 0x2B6EC4u;
    SET_GPR_U32(ctx, 31, 0x2B6ECCu);
    ctx->pc = 0x2B6EC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6ECCu; }
    }
    if (ctx->pc != 0x2B6ECCu) { return; }
    ctx->pc = 0x2B6ECCu;
    // 0x2b6ecc: 0x40902d
    ctx->pc = 0x2b6eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ed0: 0xc0ad1a2
    ctx->pc = 0x2B6ED0u;
    SET_GPR_U32(ctx, 31, 0x2B6ED8u);
    ctx->pc = 0x2B6ED4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6ED8u; }
    }
    if (ctx->pc != 0x2B6ED8u) { return; }
    ctx->pc = 0x2B6ED8u;
    // 0x2b6ed8: 0x40202d
    ctx->pc = 0x2b6ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6edc: 0x232102a
    ctx->pc = 0x2b6edcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2b6ee0: 0x1040000b
    ctx->pc = 0x2B6EE0u;
    {
        const bool branch_taken_0x2b6ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6EE4u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        if (branch_taken_0x2b6ee0) {
            ctx->pc = 0x2B6F10u;
            goto label_2b6f10;
        }
    }
    ctx->pc = 0x2B6EE8u;
label_2b6ee8:
    // 0x2b6ee8: 0x2238821
    ctx->pc = 0x2b6ee8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2b6eec: 0x232102a
    ctx->pc = 0x2b6eecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2b6ef0: 0x0
    ctx->pc = 0x2b6ef0u;
    // NOP
    // 0x2b6ef4: 0x0
    ctx->pc = 0x2b6ef4u;
    // NOP
    // 0x2b6ef8: 0x0
    ctx->pc = 0x2b6ef8u;
    // NOP
    // 0x2b6efc: 0x1440fffa
    ctx->pc = 0x2B6EFCu;
    {
        const bool branch_taken_0x2b6efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b6efc) {
            ctx->pc = 0x2B6EE8u;
            goto label_2b6ee8;
        }
    }
    ctx->pc = 0x2B6F04u;
    // 0x2b6f04: 0x10000008
    ctx->pc = 0x2B6F04u;
    {
        const bool branch_taken_0x2b6f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6F08u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
        if (branch_taken_0x2b6f04) {
            ctx->pc = 0x2B6F28u;
            goto label_2b6f28;
        }
    }
    ctx->pc = 0x2B6F0Cu;
    // 0x2b6f0c: 0x0
    ctx->pc = 0x2b6f0cu;
    // NOP
label_2b6f10:
    // 0x2b6f10: 0x224102a
    ctx->pc = 0x2b6f10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x2b6f14: 0x0
    ctx->pc = 0x2b6f14u;
    // NOP
    // 0x2b6f18: 0x0
    ctx->pc = 0x2b6f18u;
    // NOP
    // 0x2b6f1c: 0x0
    ctx->pc = 0x2b6f1cu;
    // NOP
    // 0x2b6f20: 0x0
    ctx->pc = 0x2b6f20u;
    // NOP
    // 0x2b6f24: 0x0
    ctx->pc = 0x2b6f24u;
    // NOP
label_2b6f28:
    // 0x2b6f28: 0x5040fff9
    ctx->pc = 0x2B6F28u;
    {
        const bool branch_taken_0x2b6f28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6f28) {
            ctx->pc = 0x2B6F2Cu;
            SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
            ctx->pc = 0x2B6F10u;
            goto label_2b6f10;
        }
    }
    ctx->pc = 0x2B6F30u;
    // 0x2b6f30: 0xae710010
    ctx->pc = 0x2b6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x2b6f34: 0x24020001
    ctx->pc = 0x2b6f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6f38: 0xae620000
    ctx->pc = 0x2b6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b6f3c: 0xdfbf0040
    ctx->pc = 0x2b6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6f40: 0xdfb30030
    ctx->pc = 0x2b6f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6f44: 0xdfb20020
    ctx->pc = 0x2b6f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6f48: 0xdfb10010
    ctx->pc = 0x2b6f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6f4c: 0xdfb00000
    ctx->pc = 0x2b6f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6f50: 0x3e00008
    ctx->pc = 0x2B6F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6EE8u: goto label_2b6ee8;
            case 0x2B6F10u: goto label_2b6f10;
            case 0x2B6F28u: goto label_2b6f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B6F58u;
}
