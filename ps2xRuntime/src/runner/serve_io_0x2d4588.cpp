#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serve_io
// Address: 0x2d4588 - 0x2d4648
void serve_io_0x2d4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4588u;

    // 0x2d4588: 0x27bdff90
    ctx->pc = 0x2d4588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d458c: 0xffbf0060
    ctx->pc = 0x2d458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d4590: 0xffb50050
    ctx->pc = 0x2d4590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d4594: 0xffb40040
    ctx->pc = 0x2d4594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d4598: 0xffb30030
    ctx->pc = 0x2d4598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d459c: 0xffb20020
    ctx->pc = 0x2d459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d45a0: 0xffb10010
    ctx->pc = 0x2d45a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d45a4: 0xffb00000
    ctx->pc = 0x2d45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d45a8: 0x282d
    ctx->pc = 0x2d45a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d45ac: 0x24100001
    ctx->pc = 0x2d45acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d45b0: 0x3c15003a
    ctx->pc = 0x2d45b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2d45b4: 0x2414012c
    ctx->pc = 0x2d45b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d45b8: 0x3c02003d
    ctx->pc = 0x2d45b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d45bc: 0x24532d00
    ctx->pc = 0x2d45bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x2d45c0: 0x2412ffff
    ctx->pc = 0x2d45c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d45c4: 0x24110001
    ctx->pc = 0x2d45c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d45c8: 0x8ea22388
    ctx->pc = 0x2d45c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 9096)));
    // 0x2d45cc: 0x0
    ctx->pc = 0x2d45ccu;
    // NOP
label_2d45d0:
    // 0x2d45d0: 0x541818
    ctx->pc = 0x2d45d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d45d4: 0x732021
    ctx->pc = 0x2d45d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d45d8: 0x8c820010
    ctx->pc = 0x2d45d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d45dc: 0x10520007
    ctx->pc = 0x2D45DCu;
    {
        const bool branch_taken_0x2d45dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x2D45E0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2d45dc) {
            ctx->pc = 0x2D45FCu;
            goto label_2d45fc;
        }
    }
    ctx->pc = 0x2D45E4u;
    // 0x2d45e4: 0x10510006
    ctx->pc = 0x2D45E4u;
    {
        const bool branch_taken_0x2d45e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x2D45E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 9096)));
        if (branch_taken_0x2d45e4) {
            ctx->pc = 0x2D4600u;
            goto label_2d4600;
        }
    }
    ctx->pc = 0x2D45ECu;
    // 0x2d45ec: 0xc0b5050
    ctx->pc = 0x2D45ECu;
    SET_GPR_U32(ctx, 31, 0x2D45F4u);
    ctx->pc = 0x2D4140u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_threaded_io_0x2d4140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45F4u; }
    }
    if (ctx->pc != 0x2D45F4u) { return; }
    ctx->pc = 0x2D45F4u;
    // 0x2d45f4: 0x40282d
    ctx->pc = 0x2d45f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d45f8: 0x3c03003a
    ctx->pc = 0x2d45f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2d45fc:
    // 0x2d45fc: 0x8c622388
    ctx->pc = 0x2d45fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 9096)));
label_2d4600:
    // 0x2d4600: 0x24420001
    ctx->pc = 0x2d4600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4604: 0x18400002
    ctx->pc = 0x2D4604u;
    {
        const bool branch_taken_0x2d4604 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D4608u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 9096), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4604) {
            ctx->pc = 0x2D4610u;
            goto label_2d4610;
        }
    }
    ctx->pc = 0x2D460Cu;
    // 0x2d460c: 0xac602388
    ctx->pc = 0x2d460cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9096), GPR_U32(ctx, 0));
label_2d4610:
    // 0x2d4610: 0x200102d
    ctx->pc = 0x2d4610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4614: 0x1c400003
    ctx->pc = 0x2D4614u;
    {
        const bool branch_taken_0x2d4614 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D4618u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d4614) {
            ctx->pc = 0x2D4624u;
            goto label_2d4624;
        }
    }
    ctx->pc = 0x2D461Cu;
    // 0x2d461c: 0x10a0ffec
    ctx->pc = 0x2D461Cu;
    {
        const bool branch_taken_0x2d461c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4620u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 9096)));
        if (branch_taken_0x2d461c) {
            ctx->pc = 0x2D45D0u;
            goto label_2d45d0;
        }
    }
    ctx->pc = 0x2D4624u;
label_2d4624:
    // 0x2d4624: 0xdfbf0060
    ctx->pc = 0x2d4624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4628: 0xdfb50050
    ctx->pc = 0x2d4628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d462c: 0xdfb40040
    ctx->pc = 0x2d462cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4630: 0xdfb30030
    ctx->pc = 0x2d4630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4634: 0xdfb20020
    ctx->pc = 0x2d4634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4638: 0xdfb10010
    ctx->pc = 0x2d4638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d463c: 0xdfb00000
    ctx->pc = 0x2d463cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4640: 0x3e00008
    ctx->pc = 0x2D4640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4644u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D45D0u: goto label_2d45d0;
            case 0x2D45FCu: goto label_2d45fc;
            case 0x2D4600u: goto label_2d4600;
            case 0x2D4610u: goto label_2d4610;
            case 0x2D4624u: goto label_2d4624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4648u;
}
