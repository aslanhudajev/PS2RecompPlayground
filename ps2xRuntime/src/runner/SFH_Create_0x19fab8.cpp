#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_Create
// Address: 0x19fab8 - 0x19fb7c
void SFH_Create_0x19fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_Create");


    ctx->pc = 0x19fab8u;

    // 0x19fab8: 0x27bdff80
    ctx->pc = 0x19fab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19fabc: 0xffb40040
    ctx->pc = 0x19fabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19fac0: 0xffb60060
    ctx->pc = 0x19fac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x19fac4: 0x3c140030
    ctx->pc = 0x19fac4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)48 << 16));
    // 0x19fac8: 0xffb50050
    ctx->pc = 0x19fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19facc: 0x268320d8
    ctx->pc = 0x19faccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 8408));
    // 0x19fad0: 0xffb20020
    ctx->pc = 0x19fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19fad4: 0x80b02d
    ctx->pc = 0x19fad4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fad8: 0xffb10010
    ctx->pc = 0x19fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fadc: 0xa0a82d
    ctx->pc = 0x19fadcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fae0: 0xffbf0070
    ctx->pc = 0x19fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19fae4: 0x902d
    ctx->pc = 0x19fae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fae8: 0xffb30030
    ctx->pc = 0x19fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19faec: 0xffb00000
    ctx->pc = 0x19faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19faf0: 0x8e9120d8
    ctx->pc = 0x19faf0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 8408)));
    // 0x19faf4: 0x8c620004
    ctx->pc = 0x19faf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19faf8: 0x51102a
    ctx->pc = 0x19faf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x19fafc: 0x14400003
    ctx->pc = 0x19FAFCu;
    {
        const bool branch_taken_0x19fafc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FB00u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        if (branch_taken_0x19fafc) {
            ctx->pc = 0x19FB0Cu;
            goto label_19fb0c;
        }
    }
    ctx->pc = 0x19FB04u;
    // 0x19fb04: 0x10000013
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FB08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB54u;
            goto label_19fb54;
        }
    }
    ctx->pc = 0x19FB0Cu;
label_19fb0c:
    // 0x19fb0c: 0x802d
    ctx->pc = 0x19fb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fb10:
    // 0x19fb10: 0x211102a
    ctx->pc = 0x19fb10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x19fb14: 0x10400006
    ctx->pc = 0x19FB14u;
    {
        const bool branch_taken_0x19fb14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FB18u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x19fb14) {
            ctx->pc = 0x19FB30u;
            goto label_19fb30;
        }
    }
    ctx->pc = 0x19FB1Cu;
    // 0x19fb1c: 0x2629021
    ctx->pc = 0x19fb1cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19fb20: 0xc067f14
    ctx->pc = 0x19FB20u;
    SET_GPR_U32(ctx, 31, 0x19FB28u);
    ctx->pc = 0x19FB24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        isFreeObj_0x19fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB28u; }
        else if (ctx->pc != 0x19FB28u) { ctx->pc = 0x19FB28u; }
    }
    if (ctx->pc != 0x19FB28u) { return; }
    ctx->pc = 0x19FB28u;
    // 0x19fb28: 0x1040fff9
    ctx->pc = 0x19FB28u;
    {
        const bool branch_taken_0x19fb28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FB2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x19fb28) {
            ctx->pc = 0x19FB10u;
            goto label_19fb10;
        }
    }
    ctx->pc = 0x19FB30u;
label_19fb30:
    // 0x19fb30: 0x2c0282d
    ctx->pc = 0x19fb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb34: 0x2a0302d
    ctx->pc = 0x19fb34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb38: 0xc067efa
    ctx->pc = 0x19FB38u;
    SET_GPR_U32(ctx, 31, 0x19FB40u);
    ctx->pc = 0x19FB3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setHnCreate_0x19fbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB40u; }
        else if (ctx->pc != 0x19FB40u) { ctx->pc = 0x19FB40u; }
    }
    if (ctx->pc != 0x19FB40u) { return; }
    ctx->pc = 0x19FB40u;
    // 0x19fb40: 0x268420d8
    ctx->pc = 0x19fb40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 8408));
    // 0x19fb44: 0x240102d
    ctx->pc = 0x19fb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb48: 0x8c830004
    ctx->pc = 0x19fb48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19fb4c: 0x24630001
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19fb50: 0xac830004
    ctx->pc = 0x19fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_19fb54:
    // 0x19fb54: 0xdfbf0070
    ctx->pc = 0x19fb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fb58: 0xdfb60060
    ctx->pc = 0x19fb58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fb5c: 0xdfb50050
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fb60: 0xdfb40040
    ctx->pc = 0x19fb60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fb64: 0xdfb30030
    ctx->pc = 0x19fb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fb68: 0xdfb20020
    ctx->pc = 0x19fb68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fb6c: 0xdfb10010
    ctx->pc = 0x19fb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fb70: 0xdfb00000
    ctx->pc = 0x19fb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb74: 0x3e00008
    ctx->pc = 0x19FB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FB78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FB0Cu: goto label_19fb0c;
            case 0x19FB10u: goto label_19fb10;
            case 0x19FB30u: goto label_19fb30;
            case 0x19FB54u: goto label_19fb54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FB7Cu;
}
