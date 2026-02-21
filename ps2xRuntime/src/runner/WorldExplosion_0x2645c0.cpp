#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldExplosion
// Address: 0x2645c0 - 0x2646e0
void WorldExplosion_0x2645c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2645c0u;

    // 0x2645c0: 0x27bdffb0
    ctx->pc = 0x2645c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2645c4: 0xffbf0030
    ctx->pc = 0x2645c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2645c8: 0xffb20020
    ctx->pc = 0x2645c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2645cc: 0xffb10010
    ctx->pc = 0x2645ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2645d0: 0xffb00000
    ctx->pc = 0x2645d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2645d4: 0xe7b50048
    ctx->pc = 0x2645d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2645d8: 0xe7b40040
    ctx->pc = 0x2645d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2645dc: 0x3c013f80
    ctx->pc = 0x2645dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2645e0: 0x4481a000
    ctx->pc = 0x2645e0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2645e4: 0x3c020034
    ctx->pc = 0x2645e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2645e8: 0x8c43e7f0
    ctx->pc = 0x2645e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2645ec: 0x24020009
    ctx->pc = 0x2645ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2645f0: 0x10620004
    ctx->pc = 0x2645F0u;
    {
        const bool branch_taken_0x2645f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2645F4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2645f0) {
            ctx->pc = 0x264604u;
            goto label_264604;
        }
    }
    ctx->pc = 0x2645F8u;
    // 0x2645f8: 0x2402000b
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2645fc: 0x14620006
    ctx->pc = 0x2645FCu;
    {
        const bool branch_taken_0x2645fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x264600u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2645fc) {
            ctx->pc = 0x264618u;
            goto label_264618;
        }
    }
    ctx->pc = 0x264604u;
label_264604:
    // 0x264604: 0x2404005e
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x264608: 0x3c0140c0
    ctx->pc = 0x264608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x26460c: 0x4481a800
    ctx->pc = 0x26460cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x264610: 0x10000006
    ctx->pc = 0x264610u;
    {
        const bool branch_taken_0x264610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264614u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2048));
        if (branch_taken_0x264610) {
            ctx->pc = 0x26462Cu;
            goto label_26462c;
        }
    }
    ctx->pc = 0x264618u;
label_264618:
    // 0x264618: 0x882d
    ctx->pc = 0x264618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26461c: 0x3c0140a0
    ctx->pc = 0x26461cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x264620: 0x4481a800
    ctx->pc = 0x264620u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x264624: 0x3c013fc0
    ctx->pc = 0x264624u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x264628: 0x4481a000
    ctx->pc = 0x264628u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_26462c:
    // 0x26462c: 0x4800008
    ctx->pc = 0x26462Cu;
    {
        const bool branch_taken_0x26462c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x264630u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26462c) {
            ctx->pc = 0x264650u;
            goto label_264650;
        }
    }
    ctx->pc = 0x264634u;
    // 0x264634: 0x24634ab8
    ctx->pc = 0x264634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19128));
    // 0x264638: 0x2402000c
    ctx->pc = 0x264638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x26463c: 0x821018
    ctx->pc = 0x26463cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x264640: 0x431021
    ctx->pc = 0x264640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264644: 0x8c420000
    ctx->pc = 0x264644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264648: 0x14400004
    ctx->pc = 0x264648u;
    {
        const bool branch_taken_0x264648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26464Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x264648) {
            ctx->pc = 0x26465Cu;
            goto label_26465c;
        }
    }
    ctx->pc = 0x264650u;
label_264650:
    // 0x264650: 0x24040016
    ctx->pc = 0x264650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    // 0x264654: 0x24110021
    ctx->pc = 0x264654u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 33));
    // 0x264658: 0x240282d
    ctx->pc = 0x264658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26465c:
    // 0x26465c: 0x302d
    ctx->pc = 0x26465cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264660: 0x44806000
    ctx->pc = 0x264660u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x264664: 0x2407002b
    ctx->pc = 0x264664u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 43));
    // 0x264668: 0x402d
    ctx->pc = 0x264668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26466c: 0x24090004
    ctx->pc = 0x26466cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x264670: 0xc09f832
    ctx->pc = 0x264670u;
    SET_GPR_U32(ctx, 31, 0x264678u);
    ctx->pc = 0x264674u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264678u; }
    }
    if (ctx->pc != 0x264678u) { return; }
    ctx->pc = 0x264678u;
    // 0x264678: 0x40802d
    ctx->pc = 0x264678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26467c: 0x200202d
    ctx->pc = 0x26467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264680: 0x3c014248
    ctx->pc = 0x264680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x264684: 0x44816000
    ctx->pc = 0x264684u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x264688: 0x220282d
    ctx->pc = 0x264688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26468c: 0x4600ab46
    ctx->pc = 0x26468cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x264690: 0x44807000
    ctx->pc = 0x264690u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x264694: 0xc09f780
    ctx->pc = 0x264694u;
    SET_GPR_U32(ctx, 31, 0x26469Cu);
    ctx->pc = 0x264698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26469Cu; }
    }
    if (ctx->pc != 0x26469Cu) { return; }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x200202d
    ctx->pc = 0x26469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646a0: 0x4600a306
    ctx->pc = 0x2646a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2646a4: 0x3c013f80
    ctx->pc = 0x2646a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2646a8: 0x44816800
    ctx->pc = 0x2646a8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2646ac: 0xc09f63e
    ctx->pc = 0x2646ACu;
    SET_GPR_U32(ctx, 31, 0x2646B4u);
    ctx->pc = 0x2646B0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646B4u; }
    }
    if (ctx->pc != 0x2646B4u) { return; }
    ctx->pc = 0x2646B4u;
    // 0x2646b4: 0xc0983f6
    ctx->pc = 0x2646B4u;
    SET_GPR_U32(ctx, 31, 0x2646BCu);
    ctx->pc = 0x2646B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWorldExplosion_0x260fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646BCu; }
    }
    if (ctx->pc != 0x2646BCu) { return; }
    ctx->pc = 0x2646BCu;
    // 0x2646bc: 0x200102d
    ctx->pc = 0x2646bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646c0: 0xdfbf0030
    ctx->pc = 0x2646c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2646c4: 0xdfb20020
    ctx->pc = 0x2646c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2646c8: 0xdfb10010
    ctx->pc = 0x2646c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646cc: 0xdfb00000
    ctx->pc = 0x2646ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646d0: 0xc7b50048
    ctx->pc = 0x2646d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2646d4: 0xc7b40040
    ctx->pc = 0x2646d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2646d8: 0x3e00008
    ctx->pc = 0x2646D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2646DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264604u: goto label_264604;
            case 0x264618u: goto label_264618;
            case 0x26462Cu: goto label_26462c;
            case 0x264650u: goto label_264650;
            case 0x26465Cu: goto label_26465c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2646E0u;
}
