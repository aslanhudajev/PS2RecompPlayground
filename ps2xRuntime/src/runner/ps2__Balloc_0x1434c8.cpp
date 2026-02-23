#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _Balloc
// Address: 0x1434c8 - 0x143570
void ps2__Balloc_0x1434c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__Balloc");


    ctx->pc = 0x1434c8u;

    // 0x1434c8: 0x27bdffd0
    ctx->pc = 0x1434c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1434cc: 0xffb10010
    ctx->pc = 0x1434ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1434d0: 0xffb00000
    ctx->pc = 0x1434d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1434d4: 0xffbf0020
    ctx->pc = 0x1434d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1434d8: 0x80802d
    ctx->pc = 0x1434d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434dc: 0x8e03004c
    ctx->pc = 0x1434dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1434e0: 0x14600007
    ctx->pc = 0x1434E0u;
    {
        const bool branch_taken_0x1434e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1434E4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1434e0) {
            ctx->pc = 0x143500u;
            goto label_143500;
        }
    }
    ctx->pc = 0x1434E8u;
    // 0x1434e8: 0x24050004
    ctx->pc = 0x1434e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1434ec: 0xc05004a
    ctx->pc = 0x1434ECu;
    SET_GPR_U32(ctx, 31, 0x1434F4u);
    ctx->pc = 0x1434F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x140128u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x140128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434F4u; }
        else if (ctx->pc != 0x1434F4u) { ctx->pc = 0x1434F4u; }
    }
    if (ctx->pc != 0x1434F4u) { return; }
    ctx->pc = 0x1434F4u;
    // 0x1434f4: 0x10400013
    ctx->pc = 0x1434F4u;
    {
        const bool branch_taken_0x1434f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1434F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x1434f4) {
            ctx->pc = 0x143544u;
            goto label_143544;
        }
    }
    ctx->pc = 0x1434FCu;
    // 0x1434fc: 0x40182d
    ctx->pc = 0x1434fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143500:
    // 0x143500: 0x111080
    ctx->pc = 0x143500u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x143504: 0x432021
    ctx->pc = 0x143504u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143508: 0x8c830000
    ctx->pc = 0x143508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14350c: 0x10600004
    ctx->pc = 0x14350Cu;
    {
        const bool branch_taken_0x14350c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x143510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x14350c) {
            ctx->pc = 0x143520u;
            goto label_143520;
        }
    }
    ctx->pc = 0x143514u;
    // 0x143514: 0x8c620000
    ctx->pc = 0x143514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143518: 0x1000000d
    ctx->pc = 0x143518u;
    {
        const bool branch_taken_0x143518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14351Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x143518) {
            ctx->pc = 0x143550u;
            goto label_143550;
        }
    }
    ctx->pc = 0x143520u;
label_143520:
    // 0x143520: 0x200202d
    ctx->pc = 0x143520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143524: 0x2228004
    ctx->pc = 0x143524u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x143528: 0x24050001
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14352c: 0x103080
    ctx->pc = 0x14352cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 2));
    // 0x143530: 0xc05004a
    ctx->pc = 0x143530u;
    SET_GPR_U32(ctx, 31, 0x143538u);
    ctx->pc = 0x143534u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20));
    ctx->pc = 0x140128u;
    {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x140128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143538u; }
        else if (ctx->pc != 0x143538u) { ctx->pc = 0x143538u; }
    }
    if (ctx->pc != 0x143538u) { return; }
    ctx->pc = 0x143538u;
    // 0x143538: 0x40182d
    ctx->pc = 0x143538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14353c: 0x54600003
    ctx->pc = 0x14353Cu;
    {
        const bool branch_taken_0x14353c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x14353c) {
            ctx->pc = 0x143540u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->pc = 0x14354Cu;
            goto label_14354c;
        }
    }
    ctx->pc = 0x143544u;
label_143544:
    // 0x143544: 0x10000005
    ctx->pc = 0x143544u;
    {
        const bool branch_taken_0x143544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143548u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143544) {
            ctx->pc = 0x14355Cu;
            goto label_14355c;
        }
    }
    ctx->pc = 0x14354Cu;
label_14354c:
    // 0x14354c: 0xac700008
    ctx->pc = 0x14354cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_143550:
    // 0x143550: 0xac600010
    ctx->pc = 0x143550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x143554: 0x60102d
    ctx->pc = 0x143554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143558: 0xac60000c
    ctx->pc = 0x143558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_14355c:
    // 0x14355c: 0xdfbf0020
    ctx->pc = 0x14355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143560: 0xdfb10010
    ctx->pc = 0x143560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143564: 0xdfb00000
    ctx->pc = 0x143564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143568: 0x3e00008
    ctx->pc = 0x143568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14356Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143500u: goto label_143500;
            case 0x143520u: goto label_143520;
            case 0x143544u: goto label_143544;
            case 0x14354Cu: goto label_14354c;
            case 0x143550u: goto label_143550;
            case 0x14355Cu: goto label_14355c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143570u;
}
