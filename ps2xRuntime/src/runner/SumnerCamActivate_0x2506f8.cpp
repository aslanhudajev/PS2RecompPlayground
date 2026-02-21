#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerCamActivate
// Address: 0x2506f8 - 0x250788
void SumnerCamActivate_0x2506f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2506f8u;

    // 0x2506f8: 0x80382d
    ctx->pc = 0x2506f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506fc: 0x3c040034
    ctx->pc = 0x2506fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x250700: 0x2484d228
    ctx->pc = 0x250700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955560));
    // 0x250704: 0x51880
    ctx->pc = 0x250704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x250708: 0x24020038
    ctx->pc = 0x250708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x25070c: 0xe21018
    ctx->pc = 0x25070cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x250710: 0x621821
    ctx->pc = 0x250710u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250714: 0x641821
    ctx->pc = 0x250714u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x250718: 0x8c620000
    ctx->pc = 0x250718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25071c: 0x14400012
    ctx->pc = 0x25071Cu;
    {
        const bool branch_taken_0x25071c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250720u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25071c) {
            ctx->pc = 0x250768u;
            goto label_250768;
        }
    }
    ctx->pc = 0x250724u;
    // 0x250724: 0x18e0000e
    ctx->pc = 0x250724u;
    {
        const bool branch_taken_0x250724 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x250724) {
            ctx->pc = 0x250760u;
            goto label_250760;
        }
    }
    ctx->pc = 0x25072Cu;
    // 0x25072c: 0x3c020034
    ctx->pc = 0x25072cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250730: 0x2444d228
    ctx->pc = 0x250730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955560));
    // 0x250734: 0x53080
    ctx->pc = 0x250734u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 2));
    // 0x250738: 0x24030038
    ctx->pc = 0x250738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
    // 0x25073c: 0x24e7ffff
    ctx->pc = 0x25073cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
label_250740:
    // 0x250740: 0xe32818
    ctx->pc = 0x250740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x250744: 0xa61021
    ctx->pc = 0x250744u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x250748: 0x441021
    ctx->pc = 0x250748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25074c: 0x8c420000
    ctx->pc = 0x25074cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250750: 0x54400005
    ctx->pc = 0x250750u;
    {
        const bool branch_taken_0x250750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x250750) {
            ctx->pc = 0x250754u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x250768u;
            goto label_250768;
        }
    }
    ctx->pc = 0x250758u;
    // 0x250758: 0x5ce0fff9
    ctx->pc = 0x250758u;
    {
        const bool branch_taken_0x250758 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x250758) {
            ctx->pc = 0x25075Cu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->pc = 0x250740u;
            goto label_250740;
        }
    }
    ctx->pc = 0x250760u;
label_250760:
    // 0x250760: 0x10400007
    ctx->pc = 0x250760u;
    {
        const bool branch_taken_0x250760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x250764u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250760) {
            ctx->pc = 0x250780u;
            goto label_250780;
        }
    }
    ctx->pc = 0x250768u;
label_250768:
    // 0x250768: 0x24450010
    ctx->pc = 0x250768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16));
    // 0x25076c: 0x24460020
    ctx->pc = 0x25076cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 32));
    // 0x250770: 0x2407ffff
    ctx->pc = 0x250770u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250774: 0x402d
    ctx->pc = 0x250774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250778: 0x80a89ac
    ctx->pc = 0x250778u;
    ctx->pc = 0x25077Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A26B0u;
    TriggerCameraActivate_0x2a26b0(rdram, ctx, runtime); return;
    ctx->pc = 0x250780u;
label_250780:
    // 0x250780: 0x3e00008
    ctx->pc = 0x250780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250740u: goto label_250740;
            case 0x250760u: goto label_250760;
            case 0x250768u: goto label_250768;
            case 0x250780u: goto label_250780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250788u;
}
