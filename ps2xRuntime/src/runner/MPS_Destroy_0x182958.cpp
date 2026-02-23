#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_Destroy
// Address: 0x182958 - 0x1829a4
void MPS_Destroy_0x182958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_Destroy");


    ctx->pc = 0x182958u;

    // 0x182958: 0x27bdffe0
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18295c: 0xffb00000
    ctx->pc = 0x18295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182960: 0xffbf0010
    ctx->pc = 0x182960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182964: 0xc0609f0
    ctx->pc = 0x182964u;
    SET_GPR_U32(ctx, 31, 0x18296Cu);
    ctx->pc = 0x182968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18296Cu; }
        else if (ctx->pc != 0x18296Cu) { ctx->pc = 0x18296Cu; }
    }
    if (ctx->pc != 0x18296Cu) { return; }
    ctx->pc = 0x18296Cu;
    // 0x18296c: 0x10400006
    ctx->pc = 0x18296Cu;
    {
        const bool branch_taken_0x18296c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182970u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18296c) {
            ctx->pc = 0x182988u;
            goto label_182988;
        }
    }
    ctx->pc = 0x182974u;
    // 0x182974: 0x3c05ff02
    ctx->pc = 0x182974u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x182978: 0xc060986
    ctx->pc = 0x182978u;
    SET_GPR_U32(ctx, 31, 0x182980u);
    ctx->pc = 0x18297Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 259));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182980u; }
        else if (ctx->pc != 0x182980u) { ctx->pc = 0x182980u; }
    }
    if (ctx->pc != 0x182980u) { return; }
    ctx->pc = 0x182980u;
    // 0x182980: 0x10000005
    ctx->pc = 0x182980u;
    {
        const bool branch_taken_0x182980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182984u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x182980) {
            ctx->pc = 0x182998u;
            goto label_182998;
        }
    }
    ctx->pc = 0x182988u;
label_182988:
    // 0x182988: 0x24030001
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18298c: 0x102d
    ctx->pc = 0x18298cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182990: 0xae030000
    ctx->pc = 0x182990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x182994: 0xdfbf0010
    ctx->pc = 0x182994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182998:
    // 0x182998: 0xdfb00000
    ctx->pc = 0x182998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18299c: 0x3e00008
    ctx->pc = 0x18299Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182988u: goto label_182988;
            case 0x182998u: goto label_182998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1829A4u;
}
