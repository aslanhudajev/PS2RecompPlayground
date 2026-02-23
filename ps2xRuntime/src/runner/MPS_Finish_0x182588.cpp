#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_Finish
// Address: 0x182588 - 0x182600
void MPS_Finish_0x182588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_Finish");


    ctx->pc = 0x182588u;

    // 0x182588: 0x3c020024
    ctx->pc = 0x182588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18258c: 0x27bdffc0
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182590: 0x8c431538
    ctx->pc = 0x182590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 5432)));
    // 0x182594: 0xffbf0030
    ctx->pc = 0x182594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182598: 0xffb20020
    ctx->pc = 0x182598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18259c: 0x24640010
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1825a0: 0xffb10010
    ctx->pc = 0x1825a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1825a4: 0xffb00000
    ctx->pc = 0x1825a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1825a8: 0x8c63000c
    ctx->pc = 0x1825a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1825ac: 0x1860000c
    ctx->pc = 0x1825ACu;
    {
        const bool branch_taken_0x1825ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1825B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1825ac) {
            ctx->pc = 0x1825E0u;
            goto label_1825e0;
        }
    }
    ctx->pc = 0x1825B4u;
    // 0x1825b4: 0x60882d
    ctx->pc = 0x1825b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b8: 0x24120001
    ctx->pc = 0x1825b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1825bc: 0x0
    ctx->pc = 0x1825bcu;
    // NOP
label_1825c0:
    // 0x1825c0: 0x8e020000
    ctx->pc = 0x1825c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1825c4: 0x50520004
    ctx->pc = 0x1825C4u;
    {
        const bool branch_taken_0x1825c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x1825c4) {
            ctx->pc = 0x1825C8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x1825D8u;
            goto label_1825d8;
        }
    }
    ctx->pc = 0x1825CCu;
    // 0x1825cc: 0xc060a56
    ctx->pc = 0x1825CCu;
    SET_GPR_U32(ctx, 31, 0x1825D4u);
    ctx->pc = 0x1825D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182958u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_Destroy_0x182958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825D4u; }
        else if (ctx->pc != 0x1825D4u) { ctx->pc = 0x1825D4u; }
    }
    if (ctx->pc != 0x1825D4u) { return; }
    ctx->pc = 0x1825D4u;
    // 0x1825d4: 0x2631ffff
    ctx->pc = 0x1825d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1825d8:
    // 0x1825d8: 0x1620fff9
    ctx->pc = 0x1825D8u;
    {
        const bool branch_taken_0x1825d8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1825DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 192));
        if (branch_taken_0x1825d8) {
            ctx->pc = 0x1825C0u;
            goto label_1825c0;
        }
    }
    ctx->pc = 0x1825E0u;
label_1825e0:
    // 0x1825e0: 0xc060210
    ctx->pc = 0x1825E0u;
    SET_GPR_U32(ctx, 31, 0x1825E8u);
    ctx->pc = 0x180840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEC_Finish_0x180840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825E8u; }
        else if (ctx->pc != 0x1825E8u) { ctx->pc = 0x1825E8u; }
    }
    if (ctx->pc != 0x1825E8u) { return; }
    ctx->pc = 0x1825E8u;
    // 0x1825e8: 0xdfbf0030
    ctx->pc = 0x1825e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1825ec: 0xdfb20020
    ctx->pc = 0x1825ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1825f0: 0xdfb10010
    ctx->pc = 0x1825f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825f4: 0xdfb00000
    ctx->pc = 0x1825f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1825f8: 0x8060892
    ctx->pc = 0x1825F8u;
    ctx->pc = 0x1825FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x182248u;
    MPSGET_Finish_0x182248(rdram, ctx, runtime); return;
    ctx->pc = 0x182600u;
}
