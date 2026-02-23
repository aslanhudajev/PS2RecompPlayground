#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: scalbn
// Address: 0x1446a0 - 0x144854
void scalbn_0x1446a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("scalbn");


    ctx->pc = 0x1446a0u;

    // 0x1446a0: 0x27bdffd0
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1446a4: 0xffb00000
    ctx->pc = 0x1446a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1446a8: 0xffbf0020
    ctx->pc = 0x1446a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1446ac: 0xa0802d
    ctx->pc = 0x1446acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446b0: 0xffb10010
    ctx->pc = 0x1446b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1446b4: 0x80102d
    ctx->pc = 0x1446b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446b8: 0x2303f
    ctx->pc = 0x1446b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1446bc: 0x2283c
    ctx->pc = 0x1446bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1446c0: 0x5283f
    ctx->pc = 0x1446c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1446c4: 0x3c117ff0
    ctx->pc = 0x1446c4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)32752 << 16));
    // 0x1446c8: 0xd11024
    ctx->pc = 0x1446c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1446cc: 0x21d03
    ctx->pc = 0x1446ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1446d0: 0x14600018
    ctx->pc = 0x1446D0u;
    {
        const bool branch_taken_0x1446d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1446D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2047));
        if (branch_taken_0x1446d0) {
            ctx->pc = 0x144734u;
            goto label_144734;
        }
    }
    ctx->pc = 0x1446D8u;
    // 0x1446d8: 0x3c027fff
    ctx->pc = 0x1446d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1446dc: 0x3442ffff
    ctx->pc = 0x1446dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1446e0: 0xc21024
    ctx->pc = 0x1446e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1446e4: 0xa21025
    ctx->pc = 0x1446e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1446e8: 0x10400055
    ctx->pc = 0x1446E8u;
    {
        const bool branch_taken_0x1446e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1446ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1446e8) {
            ctx->pc = 0x144840u;
            goto label_144840;
        }
    }
    ctx->pc = 0x1446F0u;
    // 0x1446f0: 0x340586a0
    ctx->pc = 0x1446f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 34464));
    // 0x1446f4: 0x52bfc
    ctx->pc = 0x1446f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1446f8: 0xc052cb8
    ctx->pc = 0x1446F8u;
    SET_GPR_U32(ctx, 31, 0x144700u);
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144700u; }
        else if (ctx->pc != 0x144700u) { ctx->pc = 0x144700u; }
    }
    if (ctx->pc != 0x144700u) { return; }
    ctx->pc = 0x144700u;
    // 0x144700: 0x40202d
    ctx->pc = 0x144700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144704: 0x2303f
    ctx->pc = 0x144704u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144708: 0xd11824
    ctx->pc = 0x144708u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x14470c: 0x3c02ffff
    ctx->pc = 0x14470cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x144710: 0x31d03
    ctx->pc = 0x144710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x144714: 0x34423cb0
    ctx->pc = 0x144714u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15536));
    // 0x144718: 0x202102a
    ctx->pc = 0x144718u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x14471c: 0x10400004
    ctx->pc = 0x14471Cu;
    {
        const bool branch_taken_0x14471c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x144720u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967242));
        if (branch_taken_0x14471c) {
            ctx->pc = 0x144730u;
            goto label_144730;
        }
    }
    ctx->pc = 0x144724u;
    // 0x144724: 0x3c02002b
    ctx->pc = 0x144724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x144728: 0x10000043
    ctx->pc = 0x144728u;
    {
        const bool branch_taken_0x144728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14472Cu;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 28856)));
        if (branch_taken_0x144728) {
            ctx->pc = 0x144838u;
            goto label_144838;
        }
    }
    ctx->pc = 0x144730u;
label_144730:
    // 0x144730: 0x240207ff
    ctx->pc = 0x144730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2047));
label_144734:
    // 0x144734: 0x14620005
    ctx->pc = 0x144734u;
    {
        const bool branch_taken_0x144734 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x144738u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x144734) {
            ctx->pc = 0x14474Cu;
            goto label_14474c;
        }
    }
    ctx->pc = 0x14473Cu;
    // 0x14473c: 0xc052c88
    ctx->pc = 0x14473Cu;
    SET_GPR_U32(ctx, 31, 0x144744u);
    ctx->pc = 0x144740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144744u; }
        else if (ctx->pc != 0x144744u) { ctx->pc = 0x144744u; }
    }
    if (ctx->pc != 0x144744u) { return; }
    ctx->pc = 0x144744u;
    // 0x144744: 0x1000003f
    ctx->pc = 0x144744u;
    {
        const bool branch_taken_0x144744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144748u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x144744) {
            ctx->pc = 0x144844u;
            goto label_144844;
        }
    }
    ctx->pc = 0x14474Cu;
label_14474c:
    // 0x14474c: 0x286207ff
    ctx->pc = 0x14474cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2047));
    // 0x144750: 0x14400008
    ctx->pc = 0x144750u;
    {
        const bool branch_taken_0x144750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144754u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x144750) {
            ctx->pc = 0x144774u;
            goto label_144774;
        }
    }
    ctx->pc = 0x144758u;
    // 0x144758: 0x80282d
    ctx->pc = 0x144758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14475c: 0xdc5070c0
    ctx->pc = 0x14475cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 28864)));
    // 0x144760: 0xc051176
    ctx->pc = 0x144760u;
    SET_GPR_U32(ctx, 31, 0x144768u);
    ctx->pc = 0x144764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1445D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x1445d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144768u; }
        else if (ctx->pc != 0x144768u) { ctx->pc = 0x144768u; }
    }
    if (ctx->pc != 0x144768u) { return; }
    ctx->pc = 0x144768u;
    // 0x144768: 0x40202d
    ctx->pc = 0x144768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14476c: 0x10000032
    ctx->pc = 0x14476Cu;
    {
        const bool branch_taken_0x14476c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144770u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14476c) {
            ctx->pc = 0x144838u;
            goto label_144838;
        }
    }
    ctx->pc = 0x144774u;
label_144774:
    // 0x144774: 0x1860000e
    ctx->pc = 0x144774u;
    {
        const bool branch_taken_0x144774 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x144778u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x144774) {
            ctx->pc = 0x1447B0u;
            goto label_1447b0;
        }
    }
    ctx->pc = 0x14477Cu;
    // 0x14477c: 0x3c02800f
    ctx->pc = 0x14477cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x144780: 0x3442ffff
    ctx->pc = 0x144780u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144784: 0x80182d
    ctx->pc = 0x144784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144788: 0xc21024
    ctx->pc = 0x144788u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14478c: 0x3c04ffff
    ctx->pc = 0x14478cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x144790: 0x4203e
    ctx->pc = 0x144790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x144794: 0x451025
    ctx->pc = 0x144794u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144798: 0x641824
    ctx->pc = 0x144798u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14479c: 0x2103c
    ctx->pc = 0x14479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1447a0: 0x622025
    ctx->pc = 0x1447a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1447a4: 0x10000026
    ctx->pc = 0x1447A4u;
    {
        const bool branch_taken_0x1447a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1447a4) {
            ctx->pc = 0x144840u;
            goto label_144840;
        }
    }
    ctx->pc = 0x1447ACu;
    // 0x1447ac: 0x0
    ctx->pc = 0x1447acu;
    // NOP
label_1447b0:
    // 0x1447b0: 0x2862ffcb
    ctx->pc = 0x1447b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967243));
    // 0x1447b4: 0x10400013
    ctx->pc = 0x1447B4u;
    {
        const bool branch_taken_0x1447b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447B8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x1447b4) {
            ctx->pc = 0x144804u;
            goto label_144804;
        }
    }
    ctx->pc = 0x1447BCu;
    // 0x1447bc: 0x50102a
    ctx->pc = 0x1447bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1447c0: 0x10400008
    ctx->pc = 0x1447C0u;
    {
        const bool branch_taken_0x1447c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x1447c0) {
            ctx->pc = 0x1447E4u;
            goto label_1447e4;
        }
    }
    ctx->pc = 0x1447C8u;
    // 0x1447c8: 0x80282d
    ctx->pc = 0x1447c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447cc: 0xdc5070c0
    ctx->pc = 0x1447ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 28864)));
    // 0x1447d0: 0xc051176
    ctx->pc = 0x1447D0u;
    SET_GPR_U32(ctx, 31, 0x1447D8u);
    ctx->pc = 0x1447D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1445D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x1445d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447D8u; }
        else if (ctx->pc != 0x1447D8u) { ctx->pc = 0x1447D8u; }
    }
    if (ctx->pc != 0x1447D8u) { return; }
    ctx->pc = 0x1447D8u;
    // 0x1447d8: 0x40202d
    ctx->pc = 0x1447d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447dc: 0x10000016
    ctx->pc = 0x1447DCu;
    {
        const bool branch_taken_0x1447dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1447E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1447dc) {
            ctx->pc = 0x144838u;
            goto label_144838;
        }
    }
    ctx->pc = 0x1447E4u;
label_1447e4:
    // 0x1447e4: 0x3c02002b
    ctx->pc = 0x1447e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1447e8: 0x80282d
    ctx->pc = 0x1447e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447ec: 0xdc5070b8
    ctx->pc = 0x1447ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 28856)));
    // 0x1447f0: 0xc051176
    ctx->pc = 0x1447F0u;
    SET_GPR_U32(ctx, 31, 0x1447F8u);
    ctx->pc = 0x1447F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1445D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x1445d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447F8u; }
        else if (ctx->pc != 0x1447F8u) { ctx->pc = 0x1447F8u; }
    }
    if (ctx->pc != 0x1447F8u) { return; }
    ctx->pc = 0x1447F8u;
    // 0x1447f8: 0x40202d
    ctx->pc = 0x1447f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447fc: 0x1000000e
    ctx->pc = 0x1447FCu;
    {
        const bool branch_taken_0x1447fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144800u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1447fc) {
            ctx->pc = 0x144838u;
            goto label_144838;
        }
    }
    ctx->pc = 0x144804u;
label_144804:
    // 0x144804: 0x24630036
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 54));
    // 0x144808: 0x3c02800f
    ctx->pc = 0x144808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x14480c: 0x3442ffff
    ctx->pc = 0x14480cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144810: 0x32d00
    ctx->pc = 0x144810u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 20));
    // 0x144814: 0xc21024
    ctx->pc = 0x144814u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144818: 0x3c03ffff
    ctx->pc = 0x144818u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x14481c: 0x3183e
    ctx->pc = 0x14481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x144820: 0x451025
    ctx->pc = 0x144820u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144824: 0x832024
    ctx->pc = 0x144824u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144828: 0x2103c
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14482c: 0x822025
    ctx->pc = 0x14482cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144830: 0x3405f240
    ctx->pc = 0x144830u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 62016));
    // 0x144834: 0x52bbc
    ctx->pc = 0x144834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_144838:
    // 0x144838: 0xc052cb8
    ctx->pc = 0x144838u;
    SET_GPR_U32(ctx, 31, 0x144840u);
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144840u; }
        else if (ctx->pc != 0x144840u) { ctx->pc = 0x144840u; }
    }
    if (ctx->pc != 0x144840u) { return; }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0xdfbf0020
    ctx->pc = 0x144840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144844:
    // 0x144844: 0xdfb10010
    ctx->pc = 0x144844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144848: 0xdfb00000
    ctx->pc = 0x144848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14484c: 0x3e00008
    ctx->pc = 0x14484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144730u: goto label_144730;
            case 0x144734u: goto label_144734;
            case 0x14474Cu: goto label_14474c;
            case 0x144774u: goto label_144774;
            case 0x1447B0u: goto label_1447b0;
            case 0x1447E4u: goto label_1447e4;
            case 0x144804u: goto label_144804;
            case 0x144838u: goto label_144838;
            case 0x144840u: goto label_144840;
            case 0x144844u: goto label_144844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144854u;
}
