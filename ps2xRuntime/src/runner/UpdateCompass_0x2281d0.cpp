#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateCompass
// Address: 0x2281d0 - 0x2282bc
void UpdateCompass_0x2281d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2281d0u;

    // 0x2281d0: 0x27bdffe0
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2281d4: 0xffbf0010
    ctx->pc = 0x2281d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2281d8: 0xffb00000
    ctx->pc = 0x2281d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2281dc: 0x3c020032
    ctx->pc = 0x2281dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2281e0: 0x8c42079c
    ctx->pc = 0x2281e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1948)));
    // 0x2281e4: 0x10400031
    ctx->pc = 0x2281E4u;
    {
        const bool branch_taken_0x2281e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2281E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2281e4) {
            ctx->pc = 0x2282ACu;
            goto label_2282ac;
        }
    }
    ctx->pc = 0x2281ECu;
    // 0x2281ec: 0x8c42d358
    ctx->pc = 0x2281ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2281f0: 0x14400006
    ctx->pc = 0x2281F0u;
    {
        const bool branch_taken_0x2281f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2281F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2281f0) {
            ctx->pc = 0x22820Cu;
            goto label_22820c;
        }
    }
    ctx->pc = 0x2281F8u;
    // 0x2281f8: 0x3c020032
    ctx->pc = 0x2281f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2281fc: 0x8c42f470
    ctx->pc = 0x2281fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964336)));
    // 0x228200: 0x14400008
    ctx->pc = 0x228200u;
    {
        const bool branch_taken_0x228200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228204u;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x228200) {
            ctx->pc = 0x228224u;
            goto label_228224;
        }
    }
    ctx->pc = 0x228208u;
    // 0x228208: 0x3c020032
    ctx->pc = 0x228208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22820c:
    // 0x22820c: 0x8c44079c
    ctx->pc = 0x22820cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1948)));
    // 0x228210: 0x24050001
    ctx->pc = 0x228210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x228214: 0xc0b41b8
    ctx->pc = 0x228214u;
    SET_GPR_U32(ctx, 31, 0x22821Cu);
    ctx->pc = 0x228218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22821Cu; }
    }
    if (ctx->pc != 0x22821Cu) { return; }
    ctx->pc = 0x22821Cu;
    // 0x22821c: 0x10000024
    ctx->pc = 0x22821Cu;
    {
        const bool branch_taken_0x22821c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x228220u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22821c) {
            ctx->pc = 0x2282B0u;
            goto label_2282b0;
        }
    }
    ctx->pc = 0x228224u;
label_228224:
    // 0x228224: 0x8e04079c
    ctx->pc = 0x228224u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1948)));
    // 0x228228: 0x24050001
    ctx->pc = 0x228228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22822c: 0xc0b41e4
    ctx->pc = 0x22822Cu;
    SET_GPR_U32(ctx, 31, 0x228234u);
    ctx->pc = 0x228230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228234u; }
    }
    if (ctx->pc != 0x228234u) { return; }
    ctx->pc = 0x228234u;
    // 0x228234: 0x3c02003a
    ctx->pc = 0x228234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x228238: 0x8c451bd0
    ctx->pc = 0x228238u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x22823c: 0x3c020032
    ctx->pc = 0x22823cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228240: 0x8e06079c
    ctx->pc = 0x228240u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 1948)));
    // 0x228244: 0x3c040032
    ctx->pc = 0x228244u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x228248: 0x248407a0
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1952));
    // 0x22824c: 0x24a50070
    ctx->pc = 0x22824cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 112));
    // 0x228250: 0xc44c07a8
    ctx->pc = 0x228250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228254: 0xc0b46a8
    ctx->pc = 0x228254u;
    SET_GPR_U32(ctx, 31, 0x22825Cu);
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
    ctx->pc = 0x2D1AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowTo3D_0x2d1aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22825Cu; }
    }
    if (ctx->pc != 0x22825Cu) { return; }
    ctx->pc = 0x22825Cu;
    // 0x22825c: 0x182d
    ctx->pc = 0x22825cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228260: 0x200102d
    ctx->pc = 0x228260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228264: 0x8c42079c
    ctx->pc = 0x228264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1948)));
    // 0x228268: 0x24440040
    ctx->pc = 0x228268u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    // 0x22826c: 0x3c020032
    ctx->pc = 0x22826cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228270: 0xc44007a4
    ctx->pc = 0x228270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228274: 0x0
    ctx->pc = 0x228274u;
    // NOP
label_228278:
    // 0x228278: 0x31080
    ctx->pc = 0x228278u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22827c: 0x821021
    ctx->pc = 0x22827cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228280: 0xe4400000
    ctx->pc = 0x228280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x228284: 0x24630001
    ctx->pc = 0x228284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x228288: 0x28620003
    ctx->pc = 0x228288u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x22828c: 0x1440fffa
    ctx->pc = 0x22828Cu;
    {
        const bool branch_taken_0x22828c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22828c) {
            ctx->pc = 0x228278u;
            goto label_228278;
        }
    }
    ctx->pc = 0x228294u;
    // 0x228294: 0x3c020032
    ctx->pc = 0x228294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228298: 0x3c030032
    ctx->pc = 0x228298u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22829c: 0x8c44079c
    ctx->pc = 0x22829cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1948)));
    // 0x2282a0: 0x8c6507ac
    ctx->pc = 0x2282a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 1964)));
    // 0x2282a4: 0xc0b40c0
    ctx->pc = 0x2282A4u;
    SET_GPR_U32(ctx, 31, 0x2282ACu);
    ctx->pc = 0x2282A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2282ACu; }
    }
    if (ctx->pc != 0x2282ACu) { return; }
    ctx->pc = 0x2282ACu;
label_2282ac:
    // 0x2282ac: 0xdfbf0010
    ctx->pc = 0x2282acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2282b0:
    // 0x2282b0: 0xdfb00000
    ctx->pc = 0x2282b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2282b4: 0x3e00008
    ctx->pc = 0x2282B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22820Cu: goto label_22820c;
            case 0x228224u: goto label_228224;
            case 0x228278u: goto label_228278;
            case 0x2282ACu: goto label_2282ac;
            case 0x2282B0u: goto label_2282b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2282BCu;
}
