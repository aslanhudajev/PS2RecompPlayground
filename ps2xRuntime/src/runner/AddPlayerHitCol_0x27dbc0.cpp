#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddPlayerHitCol
// Address: 0x27dbc0 - 0x27dc60
void AddPlayerHitCol_0x27dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27dbc0u;

    // 0x27dbc0: 0x27bdfff0
    ctx->pc = 0x27dbc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27dbc4: 0xffbf0000
    ctx->pc = 0x27dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27dbc8: 0x80382d
    ctx->pc = 0x27dbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dbcc: 0x3c020032
    ctx->pc = 0x27dbccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27dbd0: 0x8c420818
    ctx->pc = 0x27dbd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x27dbd4: 0x10400008
    ctx->pc = 0x27DBD4u;
    {
        const bool branch_taken_0x27dbd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DBD8u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 15));
        if (branch_taken_0x27dbd4) {
            ctx->pc = 0x27DBF8u;
            goto label_27dbf8;
        }
    }
    ctx->pc = 0x27DBDCu;
    // 0x27dbdc: 0x50c00004
    ctx->pc = 0x27DBDCu;
    {
        const bool branch_taken_0x27dbdc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x27dbdc) {
            ctx->pc = 0x27DBE0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x27DBF0u;
            goto label_27dbf0;
        }
    }
    ctx->pc = 0x27DBE4u;
    // 0x27dbe4: 0x3c030034
    ctx->pc = 0x27dbe4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27dbe8: 0x10000006
    ctx->pc = 0x27DBE8u;
    {
        const bool branch_taken_0x27dbe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DBECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3480));
        if (branch_taken_0x27dbe8) {
            ctx->pc = 0x27DC04u;
            goto label_27dc04;
        }
    }
    ctx->pc = 0x27DBF0u;
label_27dbf0:
    // 0x27dbf0: 0x10000004
    ctx->pc = 0x27DBF0u;
    {
        const bool branch_taken_0x27dbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DBF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3456));
        if (branch_taken_0x27dbf0) {
            ctx->pc = 0x27DC04u;
            goto label_27dc04;
        }
    }
    ctx->pc = 0x27DBF8u;
label_27dbf8:
    // 0x27dbf8: 0x10c0000c
    ctx->pc = 0x27DBF8u;
    {
        const bool branch_taken_0x27dbf8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DBFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27dbf8) {
            ctx->pc = 0x27DC2Cu;
            goto label_27dc2c;
        }
    }
    ctx->pc = 0x27DC00u;
    // 0x27dc00: 0x24630dc8
    ctx->pc = 0x27dc00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3528));
label_27dc04:
    // 0x27dc04: 0x51080
    ctx->pc = 0x27dc04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27dc08: 0x431021
    ctx->pc = 0x27dc08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc0c: 0x8c440000
    ctx->pc = 0x27dc0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dc10: 0xe0282d
    ctx->pc = 0x27dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc14: 0x44806000
    ctx->pc = 0x27dc14u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27dc18: 0x302d
    ctx->pc = 0x27dc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc1c: 0xc09f5fa
    ctx->pc = 0x27DC1Cu;
    SET_GPR_U32(ctx, 31, 0x27DC24u);
    ctx->pc = 0x27DC20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC24u; }
    }
    if (ctx->pc != 0x27DC24u) { return; }
    ctx->pc = 0x27DC24u;
    // 0x27dc24: 0x1000000c
    ctx->pc = 0x27DC24u;
    {
        const bool branch_taken_0x27dc24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DC28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27dc24) {
            ctx->pc = 0x27DC58u;
            goto label_27dc58;
        }
    }
    ctx->pc = 0x27DC2Cu;
label_27dc2c:
    // 0x27dc2c: 0x3c030034
    ctx->pc = 0x27dc2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27dc30: 0x24630db0
    ctx->pc = 0x27dc30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3504));
    // 0x27dc34: 0x51080
    ctx->pc = 0x27dc34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27dc38: 0x431021
    ctx->pc = 0x27dc38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dc3c: 0x8c440000
    ctx->pc = 0x27dc3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dc40: 0xe0282d
    ctx->pc = 0x27dc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc44: 0x44806000
    ctx->pc = 0x27dc44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27dc48: 0x302d
    ctx->pc = 0x27dc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc4c: 0xc09f5fa
    ctx->pc = 0x27DC4Cu;
    SET_GPR_U32(ctx, 31, 0x27DC54u);
    ctx->pc = 0x27DC50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DC54u; }
    }
    if (ctx->pc != 0x27DC54u) { return; }
    ctx->pc = 0x27DC54u;
    // 0x27dc54: 0xdfbf0000
    ctx->pc = 0x27dc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27dc58:
    // 0x27dc58: 0x3e00008
    ctx->pc = 0x27DC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DC5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DBF0u: goto label_27dbf0;
            case 0x27DBF8u: goto label_27dbf8;
            case 0x27DC04u: goto label_27dc04;
            case 0x27DC2Cu: goto label_27dc2c;
            case 0x27DC58u: goto label_27dc58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DC60u;
}
