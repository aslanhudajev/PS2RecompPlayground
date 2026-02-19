#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuMsgf
// Address: 0x2bbb48 - 0x2bbc30
void pbVuMsgf_0x2bbb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bbb48u;

    // 0x2bbb48: 0x27bdff50
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bbb4c: 0xffbf0030
    ctx->pc = 0x2bbb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bbb50: 0xffb20020
    ctx->pc = 0x2bbb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbb54: 0xffb10010
    ctx->pc = 0x2bbb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbb58: 0xffb00000
    ctx->pc = 0x2bbb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbb5c: 0x80882d
    ctx->pc = 0x2bbb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb60: 0xffa60080
    ctx->pc = 0x2bbb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x2bbb64: 0xffa70088
    ctx->pc = 0x2bbb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2bbb68: 0xffa80090
    ctx->pc = 0x2bbb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2bbb6c: 0xffa90098
    ctx->pc = 0x2bbb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2bbb70: 0xffaa00a0
    ctx->pc = 0x2bbb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2bbb74: 0xffab00a8
    ctx->pc = 0x2bbb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2bbb78: 0x8e240020
    ctx->pc = 0x2bbb78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bbb7c: 0xc0b5d5e
    ctx->pc = 0x2BBB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BBB84u);
    ctx->pc = 0x2BBB80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB84u; }
    }
    if (ctx->pc != 0x2BBB84u) { return; }
    ctx->pc = 0x2BBB84u;
    // 0x2bbb84: 0x40902d
    ctx->pc = 0x2bbb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb88: 0x8e230020
    ctx->pc = 0x2bbb88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bbb8c: 0x2431821
    ctx->pc = 0x2bbb8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2bbb90: 0x8e220028
    ctx->pc = 0x2bbb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2bbb94: 0x43102b
    ctx->pc = 0x2bbb94u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bbb98: 0x1040000e
    ctx->pc = 0x2BBB98u;
    {
        const bool branch_taken_0x2bbb98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBB9Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb98) {
            ctx->pc = 0x2BBBD4u;
            goto label_2bbbd4;
        }
    }
    ctx->pc = 0x2BBBA0u;
    // 0x2bbba0: 0x3c04003b
    ctx->pc = 0x2bbba0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bbba4: 0xc0b4a34
    ctx->pc = 0x2BBBA4u;
    SET_GPR_U32(ctx, 31, 0x2BBBACu);
    ctx->pc = 0x2BBBA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24680));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBACu; }
    }
    if (ctx->pc != 0x2BBBACu) { return; }
    ctx->pc = 0x2BBBACu;
    // 0x2bbbac: 0x3c04003b
    ctx->pc = 0x2bbbacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bbbb0: 0xc0b4a34
    ctx->pc = 0x2BBBB0u;
    SET_GPR_U32(ctx, 31, 0x2BBBB8u);
    ctx->pc = 0x2BBBB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24696));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBB8u; }
    }
    if (ctx->pc != 0x2BBBB8u) { return; }
    ctx->pc = 0x2BBBB8u;
label_2bbbb8:
    // 0x2bbbb8: 0x0
    ctx->pc = 0x2bbbb8u;
    // NOP
    // 0x2bbbbc: 0x0
    ctx->pc = 0x2bbbbcu;
    // NOP
    // 0x2bbbc0: 0x0
    ctx->pc = 0x2bbbc0u;
    // NOP
    // 0x2bbbc4: 0x0
    ctx->pc = 0x2bbbc4u;
    // NOP
    // 0x2bbbc8: 0x0
    ctx->pc = 0x2bbbc8u;
    // NOP
    // 0x2bbbcc: 0x1200fffa
    ctx->pc = 0x2BBBCCu;
    {
        const bool branch_taken_0x2bbbcc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bbbcc) {
            ctx->pc = 0x2BBBB8u;
            goto label_2bbbb8;
        }
    }
    ctx->pc = 0x2BBBD4u;
label_2bbbd4:
    // 0x2bbbd4: 0x3c100037
    ctx->pc = 0x2bbbd4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2bbbd8: 0x8e0320ac
    ctx->pc = 0x2bbbd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2bbbdc: 0x8c620044
    ctx->pc = 0x2bbbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2bbbe0: 0x2421021
    ctx->pc = 0x2bbbe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bbbe4: 0xac620044
    ctx->pc = 0x2bbbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x2bbbe8: 0x8e240020
    ctx->pc = 0x2bbbe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bbbec: 0xc0ad070
    ctx->pc = 0x2BBBECu;
    SET_GPR_U32(ctx, 31, 0x2BBBF4u);
    ctx->pc = 0x2BBBF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2B41C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrrchr_0x2b41c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBF4u; }
    }
    if (ctx->pc != 0x2BBBF4u) { return; }
    ctx->pc = 0x2BBBF4u;
    // 0x2bbbf4: 0x10400005
    ctx->pc = 0x2BBBF4u;
    {
        const bool branch_taken_0x2bbbf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBBF8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
        if (branch_taken_0x2bbbf4) {
            ctx->pc = 0x2BBC0Cu;
            goto label_2bbc0c;
        }
    }
    ctx->pc = 0x2BBBFCu;
    // 0x2bbbfc: 0xc0bf306
    ctx->pc = 0x2BBBFCu;
    SET_GPR_U32(ctx, 31, 0x2BBC04u);
    ctx->pc = 0x2BBC00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC04u; }
    }
    if (ctx->pc != 0x2BBC04u) { return; }
    ctx->pc = 0x2BBC04u;
    // 0x2bbc04: 0x2442ffff
    ctx->pc = 0x2bbc04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bbc08: 0xae020044
    ctx->pc = 0x2bbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2bbc0c:
    // 0x2bbc0c: 0x8e220020
    ctx->pc = 0x2bbc0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bbc10: 0x2421021
    ctx->pc = 0x2bbc10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bbc14: 0xae220020
    ctx->pc = 0x2bbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2bbc18: 0xdfbf0030
    ctx->pc = 0x2bbc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbc1c: 0xdfb20020
    ctx->pc = 0x2bbc1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbc20: 0xdfb10010
    ctx->pc = 0x2bbc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc24: 0xdfb00000
    ctx->pc = 0x2bbc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc28: 0x3e00008
    ctx->pc = 0x2BBC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BBBB8u: goto label_2bbbb8;
            case 0x2BBBD4u: goto label_2bbbd4;
            case 0x2BBC0Cu: goto label_2bbc0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BBC30u;
}
