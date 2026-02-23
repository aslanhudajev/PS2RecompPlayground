#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: quorem
// Address: 0x140240 - 0x140454
void quorem_0x140240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("quorem");


    ctx->pc = 0x140240u;

    // 0x140240: 0x27bdff80
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x140244: 0xa0702d
    ctx->pc = 0x140244u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140248: 0xffb40040
    ctx->pc = 0x140248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x14024c: 0xffbf0070
    ctx->pc = 0x14024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x140250: 0x80a02d
    ctx->pc = 0x140250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140254: 0xffb60060
    ctx->pc = 0x140254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x140258: 0xffb50050
    ctx->pc = 0x140258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x14025c: 0xffb30030
    ctx->pc = 0x14025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x140260: 0xffb20020
    ctx->pc = 0x140260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x140264: 0xffb10010
    ctx->pc = 0x140264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x140268: 0xffb00000
    ctx->pc = 0x140268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14026c: 0x8dd00010
    ctx->pc = 0x14026cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x140270: 0x8e820010
    ctx->pc = 0x140270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x140274: 0x50102a
    ctx->pc = 0x140274u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x140278: 0x1440006c
    ctx->pc = 0x140278u;
    {
        const bool branch_taken_0x140278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14027Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140278) {
            ctx->pc = 0x14042Cu;
            goto label_14042c;
        }
    }
    ctx->pc = 0x140280u;
    // 0x140280: 0x2610ffff
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x140284: 0x25cb0014
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 14), 20));
    // 0x140288: 0x103880
    ctx->pc = 0x140288u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
    // 0x14028c: 0x26910014
    ctx->pc = 0x14028cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 20));
    // 0x140290: 0x1679821
    ctx->pc = 0x140290u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x140294: 0x2274021
    ctx->pc = 0x140294u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x140298: 0x8e620000
    ctx->pc = 0x140298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14029c: 0x8d0d0000
    ctx->pc = 0x14029cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1402a0: 0x220502d
    ctx->pc = 0x1402a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402a4: 0x24420001
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1402a8: 0x1a2001b
    ctx->pc = 0x1402a8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 13) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,13); } }
    // 0x1402ac: 0x50400001
    ctx->pc = 0x1402ACu;
    {
        const bool branch_taken_0x1402ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1402ac) {
            ctx->pc = 0x1402B0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1402B4u;
            goto label_1402b4;
        }
    }
    ctx->pc = 0x1402B4u;
label_1402b4:
    // 0x1402b4: 0xa812
    ctx->pc = 0x1402b4u;
    SET_GPR_U32(ctx, 21, ctx->lo);
    // 0x1402b8: 0x2a0902d
    ctx->pc = 0x1402b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402bc: 0x1240002a
    ctx->pc = 0x1402BCu;
    {
        const bool branch_taken_0x1402bc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1402C0u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1402bc) {
            ctx->pc = 0x140368u;
            goto label_140368;
        }
    }
    ctx->pc = 0x1402C4u;
    // 0x1402c4: 0x602d
    ctx->pc = 0x1402c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402c8: 0x182d
    ctx->pc = 0x1402c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402cc: 0x0
    ctx->pc = 0x1402ccu;
    // NOP
label_1402d0:
    // 0x1402d0: 0x8d640000
    ctx->pc = 0x1402d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1402d4: 0x8d460000
    ctx->pc = 0x1402d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1402d8: 0x256b0004
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x1402dc: 0x3082ffff
    ctx->pc = 0x1402dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1402e0: 0x26b382b
    ctx->pc = 0x1402e0u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1402e4: 0x522818
    ctx->pc = 0x1402e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1402e8: 0x42402
    ctx->pc = 0x1402e8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x1402ec: 0x922018
    ctx->pc = 0x1402ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1402f0: 0xa31021
    ctx->pc = 0x1402f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1402f4: 0x3045ffff
    ctx->pc = 0x1402f4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1402f8: 0x30c3ffff
    ctx->pc = 0x1402f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1402fc: 0x21402
    ctx->pc = 0x1402fcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x140300: 0x651823
    ctx->pc = 0x140300u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x140304: 0x824821
    ctx->pc = 0x140304u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x140308: 0x6c1821
    ctx->pc = 0x140308u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x14030c: 0x63402
    ctx->pc = 0x14030cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x140310: 0x3122ffff
    ctx->pc = 0x140310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x140314: 0x36403
    ctx->pc = 0x140314u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x140318: 0xc23023
    ctx->pc = 0x140318u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14031c: 0xcc2821
    ctx->pc = 0x14031cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x140320: 0xa5430000
    ctx->pc = 0x140320u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x140324: 0xa5450002
    ctx->pc = 0x140324u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x140328: 0x91c02
    ctx->pc = 0x140328u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x14032c: 0x56403
    ctx->pc = 0x14032cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x140330: 0x10e0ffe7
    ctx->pc = 0x140330u;
    {
        const bool branch_taken_0x140330 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x140334u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x140330) {
            ctx->pc = 0x1402D0u;
            goto label_1402d0;
        }
    }
    ctx->pc = 0x140338u;
    // 0x140338: 0x15a0000c
    ctx->pc = 0x140338u;
    {
        const bool branch_taken_0x140338 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x14033Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140338) {
            ctx->pc = 0x14036Cu;
            goto label_14036c;
        }
    }
    ctx->pc = 0x140340u;
    // 0x140340: 0x10000002
    ctx->pc = 0x140340u;
    {
        const bool branch_taken_0x140340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140344u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x140340) {
            ctx->pc = 0x14034Cu;
            goto label_14034c;
        }
    }
    ctx->pc = 0x140348u;
label_140348:
    // 0x140348: 0x2610ffff
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_14034c:
    // 0x14034c: 0x228102b
    ctx->pc = 0x14034cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x140350: 0x50400005
    ctx->pc = 0x140350u;
    {
        const bool branch_taken_0x140350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140350) {
            ctx->pc = 0x140354u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x140368u;
            goto label_140368;
        }
    }
    ctx->pc = 0x140358u;
    // 0x140358: 0x8d020000
    ctx->pc = 0x140358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14035c: 0x1040fffa
    ctx->pc = 0x14035Cu;
    {
        const bool branch_taken_0x14035c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x140360u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x14035c) {
            ctx->pc = 0x140348u;
            goto label_140348;
        }
    }
    ctx->pc = 0x140364u;
    // 0x140364: 0xae900010
    ctx->pc = 0x140364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_140368:
    // 0x140368: 0x1c0282d
    ctx->pc = 0x140368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_14036c:
    // 0x14036c: 0xc050f8a
    ctx->pc = 0x14036Cu;
    SET_GPR_U32(ctx, 31, 0x140374u);
    ctx->pc = 0x140370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x143e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140374u; }
        else if (ctx->pc != 0x140374u) { ctx->pc = 0x140374u; }
    }
    if (ctx->pc != 0x140374u) { return; }
    ctx->pc = 0x140374u;
    // 0x140374: 0x440002c
    ctx->pc = 0x140374u;
    {
        const bool branch_taken_0x140374 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140378u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140374) {
            ctx->pc = 0x140428u;
            goto label_140428;
        }
    }
    ctx->pc = 0x14037Cu;
    // 0x14037c: 0x26b20001
    ctx->pc = 0x14037cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1));
    // 0x140380: 0x602d
    ctx->pc = 0x140380u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140384: 0x182d
    ctx->pc = 0x140384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140388: 0x220502d
    ctx->pc = 0x140388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14038c: 0x103880
    ctx->pc = 0x14038cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 16), 2));
label_140390:
    // 0x140390: 0x8d640000
    ctx->pc = 0x140390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x140394: 0x8d450000
    ctx->pc = 0x140394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x140398: 0x256b0004
    ctx->pc = 0x140398u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x14039c: 0x3082ffff
    ctx->pc = 0x14039cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1403a0: 0x43402
    ctx->pc = 0x1403a0u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), 16));
    // 0x1403a4: 0x431021
    ctx->pc = 0x1403a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1403a8: 0x3044ffff
    ctx->pc = 0x1403a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1403ac: 0x30a3ffff
    ctx->pc = 0x1403acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1403b0: 0x21402
    ctx->pc = 0x1403b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1403b4: 0x641823
    ctx->pc = 0x1403b4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1403b8: 0xc24821
    ctx->pc = 0x1403b8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1403bc: 0x6c1821
    ctx->pc = 0x1403bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1403c0: 0x3122ffff
    ctx->pc = 0x1403c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 65535));
    // 0x1403c4: 0x52c02
    ctx->pc = 0x1403c4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x1403c8: 0x36403
    ctx->pc = 0x1403c8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1403cc: 0xa22823
    ctx->pc = 0x1403ccu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1403d0: 0xac2821
    ctx->pc = 0x1403d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1403d4: 0xa5430000
    ctx->pc = 0x1403d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1403d8: 0xa5450002
    ctx->pc = 0x1403d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1403dc: 0x91c02
    ctx->pc = 0x1403dcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 16));
    // 0x1403e0: 0x56403
    ctx->pc = 0x1403e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1403e4: 0x26b102b
    ctx->pc = 0x1403e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1403e8: 0x1040ffe9
    ctx->pc = 0x1403E8u;
    {
        const bool branch_taken_0x1403e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1403ECu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x1403e8) {
            ctx->pc = 0x140390u;
            goto label_140390;
        }
    }
    ctx->pc = 0x1403F0u;
    // 0x1403f0: 0x2274021
    ctx->pc = 0x1403f0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1403f4: 0x8d020000
    ctx->pc = 0x1403f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1403f8: 0x1440000c
    ctx->pc = 0x1403F8u;
    {
        const bool branch_taken_0x1403f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1403FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1403f8) {
            ctx->pc = 0x14042Cu;
            goto label_14042c;
        }
    }
    ctx->pc = 0x140400u;
    // 0x140400: 0x10000002
    ctx->pc = 0x140400u;
    {
        const bool branch_taken_0x140400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140404u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
        if (branch_taken_0x140400) {
            ctx->pc = 0x14040Cu;
            goto label_14040c;
        }
    }
    ctx->pc = 0x140408u;
label_140408:
    // 0x140408: 0x2610ffff
    ctx->pc = 0x140408u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_14040c:
    // 0x14040c: 0x228102b
    ctx->pc = 0x14040cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x140410: 0x50400005
    ctx->pc = 0x140410u;
    {
        const bool branch_taken_0x140410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140410) {
            ctx->pc = 0x140414u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x140428u;
            goto label_140428;
        }
    }
    ctx->pc = 0x140418u;
    // 0x140418: 0x8d020000
    ctx->pc = 0x140418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14041c: 0x5040fffa
    ctx->pc = 0x14041Cu;
    {
        const bool branch_taken_0x14041c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14041c) {
            ctx->pc = 0x140420u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->pc = 0x140408u;
            goto label_140408;
        }
    }
    ctx->pc = 0x140424u;
    // 0x140424: 0xae900010
    ctx->pc = 0x140424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_140428:
    // 0x140428: 0x240102d
    ctx->pc = 0x140428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14042c:
    // 0x14042c: 0xdfbf0070
    ctx->pc = 0x14042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140430: 0xdfb60060
    ctx->pc = 0x140430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140434: 0xdfb50050
    ctx->pc = 0x140434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140438: 0xdfb40040
    ctx->pc = 0x140438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14043c: 0xdfb30030
    ctx->pc = 0x14043cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140440: 0xdfb20020
    ctx->pc = 0x140440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140444: 0xdfb10010
    ctx->pc = 0x140444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140448: 0xdfb00000
    ctx->pc = 0x140448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14044c: 0x3e00008
    ctx->pc = 0x14044Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1402B4u: goto label_1402b4;
            case 0x1402D0u: goto label_1402d0;
            case 0x140348u: goto label_140348;
            case 0x14034Cu: goto label_14034c;
            case 0x140368u: goto label_140368;
            case 0x14036Cu: goto label_14036c;
            case 0x140390u: goto label_140390;
            case 0x140408u: goto label_140408;
            case 0x14040Cu: goto label_14040c;
            case 0x140428u: goto label_140428;
            case 0x14042Cu: goto label_14042c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140454u;
}
