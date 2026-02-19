#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjDmaEnd
// Address: 0x2c0698 - 0x2c076c
void pbObjDmaEnd_0x2c0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0698u;

    // 0x2c0698: 0x27bdffd0
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c069c: 0xffbf0020
    ctx->pc = 0x2c069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c06a0: 0xffb10010
    ctx->pc = 0x2c06a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c06a4: 0xffb00000
    ctx->pc = 0x2c06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c06a8: 0x3c110037
    ctx->pc = 0x2c06a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2c06ac: 0x24840001
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c06b0: 0xc0aac5c
    ctx->pc = 0x2C06B0u;
    SET_GPR_U32(ctx, 31, 0x2C06B8u);
    ctx->pc = 0x2C06B4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 10608)));
    ctx->pc = 0x2AB170u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetGeomSeq_0x2ab170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06B8u; }
    }
    if (ctx->pc != 0x2C06B8u) { return; }
    ctx->pc = 0x2C06B8u;
    // 0x2c06b8: 0x40802d
    ctx->pc = 0x2c06b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c06bc: 0x3c027000
    ctx->pc = 0x2c06bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2c06c0: 0xae020000
    ctx->pc = 0x2c06c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c06c4: 0x26100004
    ctx->pc = 0x2c06c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c06c8: 0xae000000
    ctx->pc = 0x2c06c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c06cc: 0x26100004
    ctx->pc = 0x2c06ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c06d0: 0x3c021000
    ctx->pc = 0x2c06d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c06d4: 0xae020000
    ctx->pc = 0x2c06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c06d8: 0x26100004
    ctx->pc = 0x2c06d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c06dc: 0xae000000
    ctx->pc = 0x2c06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c06e0: 0x26100004
    ctx->pc = 0x2c06e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c06e4: 0xc0c0e18
    ctx->pc = 0x2C06E4u;
    SET_GPR_U32(ctx, 31, 0x2C06ECu);
    ctx->pc = 0x2C06E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06ECu; }
    }
    if (ctx->pc != 0x2C06ECu) { return; }
    ctx->pc = 0x2C06ECu;
    // 0x2c06ec: 0xae302970
    ctx->pc = 0x2c06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10608), GPR_U32(ctx, 16));
    // 0x2c06f0: 0x3c030037
    ctx->pc = 0x2c06f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c06f4: 0x3c020037
    ctx->pc = 0x2c06f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c06f8: 0x8c422974
    ctx->pc = 0x2c06f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10612)));
    // 0x2c06fc: 0x2028023
    ctx->pc = 0x2c06fcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c0700: 0xac70297c
    ctx->pc = 0x2c0700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10620), GPR_U32(ctx, 16));
    // 0x2c0704: 0x3c020037
    ctx->pc = 0x2c0704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0708: 0x8c422980
    ctx->pc = 0x2c0708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10624)));
    // 0x2c070c: 0x50102b
    ctx->pc = 0x2c070cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c0710: 0x1040000d
    ctx->pc = 0x2C0710u;
    {
        const bool branch_taken_0x2c0710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0714u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c0710) {
            ctx->pc = 0x2C0748u;
            goto label_2c0748;
        }
    }
    ctx->pc = 0x2C0718u;
    // 0x2c0718: 0x8c422978
    ctx->pc = 0x2c0718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10616)));
    // 0x2c071c: 0x50102b
    ctx->pc = 0x2c071cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c0720: 0x10400005
    ctx->pc = 0x2C0720u;
    {
        const bool branch_taken_0x2c0720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0724u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c0720) {
            ctx->pc = 0x2C0738u;
            goto label_2c0738;
        }
    }
    ctx->pc = 0x2C0728u;
    // 0x2c0728: 0x24846d40
    ctx->pc = 0x2c0728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27968));
    // 0x2c072c: 0x3c050080
    ctx->pc = 0x2c072cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2c0730: 0xc0b49a6
    ctx->pc = 0x2C0730u;
    SET_GPR_U32(ctx, 31, 0x2C0738u);
    ctx->pc = 0x2C0734u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 128));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0738u; }
    }
    if (ctx->pc != 0x2C0738u) { return; }
    ctx->pc = 0x2C0738u;
label_2c0738:
    // 0x2c0738: 0x3c020037
    ctx->pc = 0x2c0738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c073c: 0x3c030037
    ctx->pc = 0x2c073cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c0740: 0x8c63297c
    ctx->pc = 0x2c0740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10620)));
    // 0x2c0744: 0xac432980
    ctx->pc = 0x2c0744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10624), GPR_U32(ctx, 3));
label_2c0748:
    // 0x2c0748: 0x3c020037
    ctx->pc = 0x2c0748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c074c: 0x3c030037
    ctx->pc = 0x2c074cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c0750: 0x8c63297c
    ctx->pc = 0x2c0750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10620)));
    // 0x2c0754: 0xac432988
    ctx->pc = 0x2c0754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10632), GPR_U32(ctx, 3));
    // 0x2c0758: 0xdfbf0020
    ctx->pc = 0x2c0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c075c: 0xdfb10010
    ctx->pc = 0x2c075cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0760: 0xdfb00000
    ctx->pc = 0x2c0760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0764: 0x3e00008
    ctx->pc = 0x2C0764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0738u: goto label_2c0738;
            case 0x2C0748u: goto label_2c0748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C076Cu;
}
