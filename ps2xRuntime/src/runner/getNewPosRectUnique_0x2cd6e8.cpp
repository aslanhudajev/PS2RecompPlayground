#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewPosRectUnique
// Address: 0x2cd6e8 - 0x2cd754
void getNewPosRectUnique_0x2cd6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd6e8u;

    // 0x2cd6e8: 0x27bdffc0
    ctx->pc = 0x2cd6e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd6ec: 0xffbf0030
    ctx->pc = 0x2cd6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd6f0: 0xffb20020
    ctx->pc = 0x2cd6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cd6f4: 0xffb10010
    ctx->pc = 0x2cd6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cd6f8: 0xffb00000
    ctx->pc = 0x2cd6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd6fc: 0x80882d
    ctx->pc = 0x2cd6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd700: 0xa0902d
    ctx->pc = 0x2cd700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd704: 0x96240032
    ctx->pc = 0x2cd704u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cd708: 0x26250020
    ctx->pc = 0x2cd708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    // 0x2cd70c: 0xc0b330e
    ctx->pc = 0x2CD70Cu;
    SET_GPR_U32(ctx, 31, 0x2CD714u);
    ctx->pc = 0x2CD710u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    ctx->pc = 0x2CCC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getUniqueIdx_0x2ccc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD714u; }
    }
    if (ctx->pc != 0x2CD714u) { return; }
    ctx->pc = 0x2CD714u;
    // 0x2cd714: 0x40802d
    ctx->pc = 0x2cd714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd718: 0x6000008
    ctx->pc = 0x2CD718u;
    {
        const bool branch_taken_0x2cd718 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CD71Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2cd718) {
            ctx->pc = 0x2CD73Cu;
            goto label_2cd73c;
        }
    }
    ctx->pc = 0x2CD720u;
    // 0x2cd720: 0x2042018
    ctx->pc = 0x2cd720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cd724: 0x8e220010
    ctx->pc = 0x2cd724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2cd728: 0x822021
    ctx->pc = 0x2cd728u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd72c: 0x240282d
    ctx->pc = 0x2cd72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd730: 0xc0b3544
    ctx->pc = 0x2CD730u;
    SET_GPR_U32(ctx, 31, 0x2CD738u);
    ctx->pc = 0x2CD734u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x2CD510u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPosRect_0x2cd510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD738u; }
    }
    if (ctx->pc != 0x2CD738u) { return; }
    ctx->pc = 0x2CD738u;
    // 0x2cd738: 0x200102d
    ctx->pc = 0x2cd738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd73c:
    // 0x2cd73c: 0xdfbf0030
    ctx->pc = 0x2cd73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd740: 0xdfb20020
    ctx->pc = 0x2cd740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd744: 0xdfb10010
    ctx->pc = 0x2cd744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd748: 0xdfb00000
    ctx->pc = 0x2cd748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd74c: 0x3e00008
    ctx->pc = 0x2CD74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD73Cu: goto label_2cd73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD754u;
}
