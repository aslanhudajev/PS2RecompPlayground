#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossInit
// Address: 0x29db50 - 0x29dbe4
void BossInit_0x29db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29db50u;

    // 0x29db50: 0x3c020036
    ctx->pc = 0x29db50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29db54: 0xac40d800
    ctx->pc = 0x29db54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957056), GPR_U32(ctx, 0));
    // 0x29db58: 0x3c020036
    ctx->pc = 0x29db58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29db5c: 0xac40d930
    ctx->pc = 0x29db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957360), GPR_U32(ctx, 0));
    // 0x29db60: 0x3c020036
    ctx->pc = 0x29db60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29db64: 0xac40d804
    ctx->pc = 0x29db64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957060), GPR_U32(ctx, 0));
    // 0x29db68: 0x3c020036
    ctx->pc = 0x29db68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29db6c: 0xac40d808
    ctx->pc = 0x29db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957064), GPR_U32(ctx, 0));
    // 0x29db70: 0x3c030036
    ctx->pc = 0x29db70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29db74: 0x2402ffff
    ctx->pc = 0x29db74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29db78: 0xac62d94c
    ctx->pc = 0x29db78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957388), GPR_U32(ctx, 2));
    // 0x29db7c: 0x3c020036
    ctx->pc = 0x29db7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29db80: 0xac40d950
    ctx->pc = 0x29db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957392), GPR_U32(ctx, 0));
    // 0x29db84: 0x302d
    ctx->pc = 0x29db84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db88: 0x3c02003c
    ctx->pc = 0x29db88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29db8c: 0x24484188
    ctx->pc = 0x29db8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 16776));
    // 0x29db90: 0x3c02003c
    ctx->pc = 0x29db90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29db94: 0x244741a0
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29db98: 0x202d
    ctx->pc = 0x29db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db9c: 0x0
    ctx->pc = 0x29db9cu;
    // NOP
label_29dba0:
    // 0x29dba0: 0x628c0
    ctx->pc = 0x29dba0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x29dba4: 0x41080
    ctx->pc = 0x29dba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_29dba8:
    // 0x29dba8: 0x451021
    ctx->pc = 0x29dba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29dbac: 0x481821
    ctx->pc = 0x29dbacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29dbb0: 0xac600000
    ctx->pc = 0x29dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29dbb4: 0x471021
    ctx->pc = 0x29dbb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29dbb8: 0xac400000
    ctx->pc = 0x29dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29dbbc: 0x24840001
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x29dbc0: 0x28820002
    ctx->pc = 0x29dbc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x29dbc4: 0x1440fff8
    ctx->pc = 0x29DBC4u;
    {
        const bool branch_taken_0x29dbc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DBC8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x29dbc4) {
            ctx->pc = 0x29DBA8u;
            goto label_29dba8;
        }
    }
    ctx->pc = 0x29DBCCu;
    // 0x29dbcc: 0x24c60001
    ctx->pc = 0x29dbccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x29dbd0: 0x28c20003
    ctx->pc = 0x29dbd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 3));
    // 0x29dbd4: 0x1440fff2
    ctx->pc = 0x29DBD4u;
    {
        const bool branch_taken_0x29dbd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DBD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29dbd4) {
            ctx->pc = 0x29DBA0u;
            goto label_29dba0;
        }
    }
    ctx->pc = 0x29DBDCu;
    // 0x29dbdc: 0x3e00008
    ctx->pc = 0x29DBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DBA0u: goto label_29dba0;
            case 0x29DBA8u: goto label_29dba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DBE4u;
}
