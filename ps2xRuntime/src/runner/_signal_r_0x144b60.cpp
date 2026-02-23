#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _signal_r
// Address: 0x144b60 - 0x144bec
void _signal_r_0x144b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_signal_r");


    ctx->pc = 0x144b60u;

    // 0x144b60: 0x27bdffc0
    ctx->pc = 0x144b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144b64: 0xffb10010
    ctx->pc = 0x144b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x144b68: 0xffb20020
    ctx->pc = 0x144b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x144b6c: 0xa0882d
    ctx->pc = 0x144b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b70: 0xffb00000
    ctx->pc = 0x144b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144b74: 0xc0902d
    ctx->pc = 0x144b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b78: 0xffbf0030
    ctx->pc = 0x144b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144b7c: 0x2e220020
    ctx->pc = 0x144b7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
    // 0x144b80: 0x14400006
    ctx->pc = 0x144B80u;
    {
        const bool branch_taken_0x144b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144B84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144b80) {
            ctx->pc = 0x144B9Cu;
            goto label_144b9c;
        }
    }
    ctx->pc = 0x144B88u;
    // 0x144b88: 0x24030016
    ctx->pc = 0x144b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x144b8c: 0x3c02ffff
    ctx->pc = 0x144b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x144b90: 0xae030000
    ctx->pc = 0x144b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x144b94: 0x1000000f
    ctx->pc = 0x144B94u;
    {
        const bool branch_taken_0x144b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144B98u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x144b94) {
            ctx->pc = 0x144BD4u;
            goto label_144bd4;
        }
    }
    ctx->pc = 0x144B9Cu;
label_144b9c:
    // 0x144b9c: 0x8e0201d4
    ctx->pc = 0x144b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x144ba0: 0x14400009
    ctx->pc = 0x144BA0u;
    {
        const bool branch_taken_0x144ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144BA4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x144ba0) {
            ctx->pc = 0x144BC8u;
            goto label_144bc8;
        }
    }
    ctx->pc = 0x144BA8u;
    // 0x144ba8: 0xc0512bc
    ctx->pc = 0x144BA8u;
    SET_GPR_U32(ctx, 31, 0x144BB0u);
    ctx->pc = 0x144BACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x144af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BB0u; }
        else if (ctx->pc != 0x144BB0u) { ctx->pc = 0x144BB0u; }
    }
    if (ctx->pc != 0x144BB0u) { return; }
    ctx->pc = 0x144BB0u;
    // 0x144bb0: 0x50400004
    ctx->pc = 0x144BB0u;
    {
        const bool branch_taken_0x144bb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x144bb0) {
            ctx->pc = 0x144BB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->pc = 0x144BC4u;
            goto label_144bc4;
        }
    }
    ctx->pc = 0x144BB8u;
    // 0x144bb8: 0x3c02ffff
    ctx->pc = 0x144bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x144bbc: 0x10000005
    ctx->pc = 0x144BBCu;
    {
        const bool branch_taken_0x144bbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144BC0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x144bbc) {
            ctx->pc = 0x144BD4u;
            goto label_144bd4;
        }
    }
    ctx->pc = 0x144BC4u;
label_144bc4:
    // 0x144bc4: 0x111880
    ctx->pc = 0x144bc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_144bc8:
    // 0x144bc8: 0x621821
    ctx->pc = 0x144bc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144bcc: 0x8c620000
    ctx->pc = 0x144bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144bd0: 0xac720000
    ctx->pc = 0x144bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_144bd4:
    // 0x144bd4: 0xdfbf0030
    ctx->pc = 0x144bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144bd8: 0xdfb20020
    ctx->pc = 0x144bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144bdc: 0xdfb10010
    ctx->pc = 0x144bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144be0: 0xdfb00000
    ctx->pc = 0x144be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144be4: 0x3e00008
    ctx->pc = 0x144BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144B9Cu: goto label_144b9c;
            case 0x144BC4u: goto label_144bc4;
            case 0x144BC8u: goto label_144bc8;
            case 0x144BD4u: goto label_144bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144BECu;
}
