#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initLibWork
// Address: 0x19fc00 - 0x19fc50
void initLibWork_0x19fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initLibWork");


    ctx->pc = 0x19fc00u;

    // 0x19fc00: 0x27bdffd0
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fc04: 0x80102d
    ctx->pc = 0x19fc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc08: 0xffbf0020
    ctx->pc = 0x19fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fc0c: 0xa0202d
    ctx->pc = 0x19fc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc10: 0xffb10010
    ctx->pc = 0x19fc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fc14: 0x18400009
    ctx->pc = 0x19FC14u;
    {
        const bool branch_taken_0x19fc14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19FC18u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x19fc14) {
            ctx->pc = 0x19FC3Cu;
            goto label_19fc3c;
        }
    }
    ctx->pc = 0x19FC1Cu;
    // 0x19fc1c: 0x80882d
    ctx->pc = 0x19fc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc20: 0x40802d
    ctx->pc = 0x19fc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc24: 0x0
    ctx->pc = 0x19fc24u;
    // NOP
label_19fc28:
    // 0x19fc28: 0x220202d
    ctx->pc = 0x19fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc2c: 0xc067ef4
    ctx->pc = 0x19FC2Cu;
    SET_GPR_U32(ctx, 31, 0x19FC34u);
    ctx->pc = 0x19FC30u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x19FBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSfhObj_0x19fbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC34u; }
        else if (ctx->pc != 0x19FC34u) { ctx->pc = 0x19FC34u; }
    }
    if (ctx->pc != 0x19FC34u) { return; }
    ctx->pc = 0x19FC34u;
    // 0x19fc34: 0x1600fffc
    ctx->pc = 0x19FC34u;
    {
        const bool branch_taken_0x19fc34 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FC38u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x19fc34) {
            ctx->pc = 0x19FC28u;
            goto label_19fc28;
        }
    }
    ctx->pc = 0x19FC3Cu;
label_19fc3c:
    // 0x19fc3c: 0xdfbf0020
    ctx->pc = 0x19fc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fc40: 0xdfb10010
    ctx->pc = 0x19fc40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fc44: 0xdfb00000
    ctx->pc = 0x19fc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc48: 0x3e00008
    ctx->pc = 0x19FC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FC28u: goto label_19fc28;
            case 0x19FC3Cu: goto label_19fc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FC50u;
}
