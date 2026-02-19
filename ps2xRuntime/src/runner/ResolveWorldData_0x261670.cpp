#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResolveWorldData
// Address: 0x261670 - 0x261acc
void ResolveWorldData_0x261670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261670u;

    // 0x261670: 0x27bdff90
    ctx->pc = 0x261670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x261674: 0xffbf0050
    ctx->pc = 0x261674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x261678: 0xffb30040
    ctx->pc = 0x261678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26167c: 0xffb20030
    ctx->pc = 0x26167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x261680: 0xffb10020
    ctx->pc = 0x261680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x261684: 0xffb00010
    ctx->pc = 0x261684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x261688: 0xe7b50068
    ctx->pc = 0x261688u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26168c: 0xe7b40060
    ctx->pc = 0x26168cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x261690: 0x3c020034
    ctx->pc = 0x261690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261694: 0x8c42e7c0
    ctx->pc = 0x261694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261698: 0x8c420024
    ctx->pc = 0x261698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x26169c: 0x14400006
    ctx->pc = 0x26169Cu;
    {
        const bool branch_taken_0x26169c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2616A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26169c) {
            ctx->pc = 0x2616B8u;
            goto label_2616b8;
        }
    }
    ctx->pc = 0x2616A4u;
    // 0x2616a4: 0x3c04003b
    ctx->pc = 0x2616a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2616a8: 0x248497a8
    ctx->pc = 0x2616a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940584));
    // 0x2616ac: 0xc0b4976
    ctx->pc = 0x2616ACu;
    SET_GPR_U32(ctx, 31, 0x2616B4u);
    ctx->pc = 0x2616B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2616B4u; }
    }
    if (ctx->pc != 0x2616B4u) { return; }
    ctx->pc = 0x2616B4u;
    // 0x2616b4: 0x3c020034
    ctx->pc = 0x2616b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2616b8:
    // 0x2616b8: 0x8c42e7c0
    ctx->pc = 0x2616b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2616bc: 0x8c420028
    ctx->pc = 0x2616bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2616c0: 0x14400006
    ctx->pc = 0x2616C0u;
    {
        const bool branch_taken_0x2616c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2616C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2616c0) {
            ctx->pc = 0x2616DCu;
            goto label_2616dc;
        }
    }
    ctx->pc = 0x2616C8u;
    // 0x2616c8: 0x3c04003b
    ctx->pc = 0x2616c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2616cc: 0x248497c8
    ctx->pc = 0x2616ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940616));
    // 0x2616d0: 0xc0b4976
    ctx->pc = 0x2616D0u;
    SET_GPR_U32(ctx, 31, 0x2616D8u);
    ctx->pc = 0x2616D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2616D8u; }
    }
    if (ctx->pc != 0x2616D8u) { return; }
    ctx->pc = 0x2616D8u;
    // 0x2616d8: 0x3c030034
    ctx->pc = 0x2616d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2616dc:
    // 0x2616dc: 0x2402ffff
    ctx->pc = 0x2616dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2616e0: 0xac62e894
    ctx->pc = 0x2616e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961300), GPR_U32(ctx, 2));
    // 0x2616e4: 0x3c020034
    ctx->pc = 0x2616e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2616e8: 0x40182d
    ctx->pc = 0x2616e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616ec: 0x8c42e7c0
    ctx->pc = 0x2616ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2616f0: 0x84420018
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2616f4: 0x184000d6
    ctx->pc = 0x2616F4u;
    {
        const bool branch_taken_0x2616f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2616F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2616f4) {
            ctx->pc = 0x261A50u;
            goto label_261a50;
        }
    }
    ctx->pc = 0x2616FCu;
    // 0x2616fc: 0x60902d
    ctx->pc = 0x2616fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261700: 0x4480a000
    ctx->pc = 0x261700u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x261704: 0x3c013f80
    ctx->pc = 0x261704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x261708: 0x4481a800
    ctx->pc = 0x261708u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x26170c: 0x3c020034
    ctx->pc = 0x26170cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261710: 0x2453e7d8
    ctx->pc = 0x261710u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294961112));
    // 0x261714: 0x8c63e7c0
    ctx->pc = 0x261714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961088)));
label_261718:
    // 0x261718: 0x2402010c
    ctx->pc = 0x261718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 268));
    // 0x26171c: 0x2221018
    ctx->pc = 0x26171cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261720: 0x8c63001c
    ctx->pc = 0x261720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x261724: 0x438021
    ctx->pc = 0x261724u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261728: 0x86020058
    ctx->pc = 0x261728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x26172c: 0x4420001
    ctx->pc = 0x26172Cu;
    {
        const bool branch_taken_0x26172c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26172c) {
            ctx->pc = 0x261730u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x261734u;
            goto label_261734;
        }
    }
    ctx->pc = 0x261734u;
label_261734:
    // 0x261734: 0x8e44e7c0
    ctx->pc = 0x261734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261738: 0x86030058
    ctx->pc = 0x261738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x26173c: 0x2402006c
    ctx->pc = 0x26173cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x261740: 0x621818
    ctx->pc = 0x261740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261744: 0x8c820024
    ctx->pc = 0x261744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x261748: 0x621821
    ctx->pc = 0x261748u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26174c: 0xae030060
    ctx->pc = 0x26174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x261750: 0x8602008c
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x261754: 0x4410003
    ctx->pc = 0x261754u;
    {
        const bool branch_taken_0x261754 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x261758u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
        if (branch_taken_0x261754) {
            ctx->pc = 0x261764u;
            goto label_261764;
        }
    }
    ctx->pc = 0x26175Cu;
    // 0x26175c: 0x10000007
    ctx->pc = 0x26175Cu;
    {
        const bool branch_taken_0x26175c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261760u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        if (branch_taken_0x26175c) {
            ctx->pc = 0x26177Cu;
            goto label_26177c;
        }
    }
    ctx->pc = 0x261764u;
label_261764:
    // 0x261764: 0x8603008c
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x261768: 0x24020054
    ctx->pc = 0x261768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 84));
    // 0x26176c: 0x621818
    ctx->pc = 0x26176cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261770: 0x8c820034
    ctx->pc = 0x261770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x261774: 0x621821
    ctx->pc = 0x261774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x261778: 0xae03006c
    ctx->pc = 0x261778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_26177c:
    // 0x26177c: 0x8602005a
    ctx->pc = 0x26177cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x261780: 0x4420001
    ctx->pc = 0x261780u;
    {
        const bool branch_taken_0x261780 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x261780) {
            ctx->pc = 0x261784u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x261788u;
            goto label_261788;
        }
    }
    ctx->pc = 0x261788u;
label_261788:
    // 0x261788: 0x8e44e7c0
    ctx->pc = 0x261788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x26178c: 0x8603005a
    ctx->pc = 0x26178cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x261790: 0x2402003c
    ctx->pc = 0x261790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x261794: 0x621818
    ctx->pc = 0x261794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261798: 0x8c820028
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x26179c: 0x621821
    ctx->pc = 0x26179cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2617a0: 0xae030064
    ctx->pc = 0x2617a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2617a4: 0x8602005c
    ctx->pc = 0x2617a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2617a8: 0x4410003
    ctx->pc = 0x2617A8u;
    {
        const bool branch_taken_0x2617a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2617ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
        if (branch_taken_0x2617a8) {
            ctx->pc = 0x2617B8u;
            goto label_2617b8;
        }
    }
    ctx->pc = 0x2617B0u;
    // 0x2617b0: 0x10000007
    ctx->pc = 0x2617B0u;
    {
        const bool branch_taken_0x2617b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2617B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        if (branch_taken_0x2617b0) {
            ctx->pc = 0x2617D0u;
            goto label_2617d0;
        }
    }
    ctx->pc = 0x2617B8u;
label_2617b8:
    // 0x2617b8: 0x8603005c
    ctx->pc = 0x2617b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2617bc: 0x24020048
    ctx->pc = 0x2617bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x2617c0: 0x621818
    ctx->pc = 0x2617c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2617c4: 0x8c820030
    ctx->pc = 0x2617c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2617c8: 0x621821
    ctx->pc = 0x2617c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2617cc: 0xae030068
    ctx->pc = 0x2617ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2617d0:
    // 0x2617d0: 0x86020004
    ctx->pc = 0x2617d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2617d4: 0x10400015
    ctx->pc = 0x2617D4u;
    {
        const bool branch_taken_0x2617d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2617D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2617d4) {
            ctx->pc = 0x26182Cu;
            goto label_26182c;
        }
    }
    ctx->pc = 0x2617DCu;
    // 0x2617dc: 0x8c62e894
    ctx->pc = 0x2617dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
    // 0x2617e0: 0x4420001
    ctx->pc = 0x2617E0u;
    {
        const bool branch_taken_0x2617e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2617e0) {
            ctx->pc = 0x2617E4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294961300), GPR_U32(ctx, 17));
            ctx->pc = 0x2617E8u;
            goto label_2617e8;
        }
    }
    ctx->pc = 0x2617E8u;
label_2617e8:
    // 0x2617e8: 0x86020004
    ctx->pc = 0x2617e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2617ec: 0x1040000f
    ctx->pc = 0x2617ECu;
    {
        const bool branch_taken_0x2617ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2617F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2617ec) {
            ctx->pc = 0x26182Cu;
            goto label_26182c;
        }
    }
    ctx->pc = 0x2617F4u;
    // 0x2617f4: 0x8c43e7f0
    ctx->pc = 0x2617f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2617f8: 0x2402000c
    ctx->pc = 0x2617f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2617fc: 0x1062000b
    ctx->pc = 0x2617FCu;
    {
        const bool branch_taken_0x2617fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x261800u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2617fc) {
            ctx->pc = 0x26182Cu;
            goto label_26182c;
        }
    }
    ctx->pc = 0x261804u;
    // 0x261804: 0x3c05003b
    ctx->pc = 0x261804u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x261808: 0x24a597e8
    ctx->pc = 0x261808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940648));
    // 0x26180c: 0xc0b6252
    ctx->pc = 0x26180Cu;
    SET_GPR_U32(ctx, 31, 0x261814u);
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261814u; }
    }
    if (ctx->pc != 0x261814u) { return; }
    ctx->pc = 0x261814u;
    // 0x261814: 0x3a0202d
    ctx->pc = 0x261814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261818: 0x282d
    ctx->pc = 0x261818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26181c: 0xc088108
    ctx->pc = 0x26181Cu;
    SET_GPR_U32(ctx, 31, 0x261824u);
    ctx->pc = 0x261820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261824u; }
    }
    if (ctx->pc != 0x261824u) { return; }
    ctx->pc = 0x261824u;
    // 0x261824: 0x10000003
    ctx->pc = 0x261824u;
    {
        const bool branch_taken_0x261824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261828u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 100)));
        if (branch_taken_0x261824) {
            ctx->pc = 0x261834u;
            goto label_261834;
        }
    }
    ctx->pc = 0x26182Cu;
label_26182c:
    // 0x26182c: 0x8e030064
    ctx->pc = 0x26182cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x261830: 0x2402ffff
    ctx->pc = 0x261830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_261834:
    // 0x261834: 0xac620014
    ctx->pc = 0x261834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x261838: 0x8e020000
    ctx->pc = 0x261838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26183c: 0x2403fffe
    ctx->pc = 0x26183cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x261840: 0x431024
    ctx->pc = 0x261840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261844: 0xae020000
    ctx->pc = 0x261844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x261848: 0x86020006
    ctx->pc = 0x261848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x26184c: 0x5440007a
    ctx->pc = 0x26184Cu;
    {
        const bool branch_taken_0x26184c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26184c) {
            ctx->pc = 0x261850u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x261A38u;
            goto label_261a38;
        }
    }
    ctx->pc = 0x261854u;
    // 0x261854: 0x24020001
    ctx->pc = 0x261854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x261858: 0xa6020006
    ctx->pc = 0x261858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26185c: 0xc60000a8
    ctx->pc = 0x26185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261860: 0x46140032
    ctx->pc = 0x261860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261864: 0x0
    ctx->pc = 0x261864u;
    // NOP
    // 0x261868: 0x45030001
    ctx->pc = 0x261868u;
    {
        const bool branch_taken_0x261868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261868) {
            ctx->pc = 0x26186Cu;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
            ctx->pc = 0x261870u;
            goto label_261870;
        }
    }
    ctx->pc = 0x261870u;
label_261870:
    // 0x261870: 0xc60000ac
    ctx->pc = 0x261870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261874: 0x46140032
    ctx->pc = 0x261874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261878: 0x0
    ctx->pc = 0x261878u;
    // NOP
    // 0x26187c: 0x45000002
    ctx->pc = 0x26187Cu;
    {
        const bool branch_taken_0x26187c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261880u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x26187c) {
            ctx->pc = 0x261888u;
            goto label_261888;
        }
    }
    ctx->pc = 0x261884u;
    // 0x261884: 0xe60100ac
    ctx->pc = 0x261884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_261888:
    // 0x261888: 0xc60000b0
    ctx->pc = 0x261888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26188c: 0x46140032
    ctx->pc = 0x26188cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261890: 0x0
    ctx->pc = 0x261890u;
    // NOP
    // 0x261894: 0x45030001
    ctx->pc = 0x261894u;
    {
        const bool branch_taken_0x261894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261894) {
            ctx->pc = 0x261898u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
            ctx->pc = 0x26189Cu;
            goto label_26189c;
        }
    }
    ctx->pc = 0x26189Cu;
label_26189c:
    // 0x26189c: 0xc60000b4
    ctx->pc = 0x26189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618a0: 0x46140032
    ctx->pc = 0x2618a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2618a4: 0x0
    ctx->pc = 0x2618a4u;
    // NOP
    // 0x2618a8: 0x45030001
    ctx->pc = 0x2618A8u;
    {
        const bool branch_taken_0x2618a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2618a8) {
            ctx->pc = 0x2618ACu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
            ctx->pc = 0x2618B0u;
            goto label_2618b0;
        }
    }
    ctx->pc = 0x2618B0u;
label_2618b0:
    // 0x2618b0: 0xc60000b8
    ctx->pc = 0x2618b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618b4: 0x46140032
    ctx->pc = 0x2618b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2618b8: 0x0
    ctx->pc = 0x2618b8u;
    // NOP
    // 0x2618bc: 0x45030001
    ctx->pc = 0x2618BCu;
    {
        const bool branch_taken_0x2618bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2618bc) {
            ctx->pc = 0x2618C0u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
            ctx->pc = 0x2618C4u;
            goto label_2618c4;
        }
    }
    ctx->pc = 0x2618C4u;
label_2618c4:
    // 0x2618c4: 0xc60000bc
    ctx->pc = 0x2618c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618c8: 0x46140032
    ctx->pc = 0x2618c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2618cc: 0x0
    ctx->pc = 0x2618ccu;
    // NOP
    // 0x2618d0: 0x45030001
    ctx->pc = 0x2618D0u;
    {
        const bool branch_taken_0x2618d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2618d0) {
            ctx->pc = 0x2618D4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
            ctx->pc = 0x2618D8u;
            goto label_2618d8;
        }
    }
    ctx->pc = 0x2618D8u;
label_2618d8:
    // 0x2618d8: 0xc60000c0
    ctx->pc = 0x2618d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618dc: 0x46140032
    ctx->pc = 0x2618dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2618e0: 0x0
    ctx->pc = 0x2618e0u;
    // NOP
    // 0x2618e4: 0x45030001
    ctx->pc = 0x2618E4u;
    {
        const bool branch_taken_0x2618e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2618e4) {
            ctx->pc = 0x2618E8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
            ctx->pc = 0x2618ECu;
            goto label_2618ec;
        }
    }
    ctx->pc = 0x2618ECu;
label_2618ec:
    // 0x2618ec: 0xc60000c4
    ctx->pc = 0x2618ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618f0: 0x46140032
    ctx->pc = 0x2618f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2618f4: 0x0
    ctx->pc = 0x2618f4u;
    // NOP
    // 0x2618f8: 0x45030001
    ctx->pc = 0x2618F8u;
    {
        const bool branch_taken_0x2618f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2618f8) {
            ctx->pc = 0x2618FCu;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
            ctx->pc = 0x261900u;
            goto label_261900;
        }
    }
    ctx->pc = 0x261900u;
label_261900:
    // 0x261900: 0xc60000c8
    ctx->pc = 0x261900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261904: 0x46140032
    ctx->pc = 0x261904u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261908: 0x0
    ctx->pc = 0x261908u;
    // NOP
    // 0x26190c: 0x45030001
    ctx->pc = 0x26190Cu;
    {
        const bool branch_taken_0x26190c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26190c) {
            ctx->pc = 0x261910u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
            ctx->pc = 0x261914u;
            goto label_261914;
        }
    }
    ctx->pc = 0x261914u;
label_261914:
    // 0x261914: 0xc60000cc
    ctx->pc = 0x261914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261918: 0x46140032
    ctx->pc = 0x261918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26191c: 0x0
    ctx->pc = 0x26191cu;
    // NOP
    // 0x261920: 0x45030001
    ctx->pc = 0x261920u;
    {
        const bool branch_taken_0x261920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261920) {
            ctx->pc = 0x261924u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
            ctx->pc = 0x261928u;
            goto label_261928;
        }
    }
    ctx->pc = 0x261928u;
label_261928:
    // 0x261928: 0xc60000d0
    ctx->pc = 0x261928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26192c: 0x46140032
    ctx->pc = 0x26192cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261930: 0x0
    ctx->pc = 0x261930u;
    // NOP
    // 0x261934: 0x45030001
    ctx->pc = 0x261934u;
    {
        const bool branch_taken_0x261934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261934) {
            ctx->pc = 0x261938u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
            ctx->pc = 0x26193Cu;
            goto label_26193c;
        }
    }
    ctx->pc = 0x26193Cu;
label_26193c:
    // 0x26193c: 0xc60000d4
    ctx->pc = 0x26193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261940: 0x46140032
    ctx->pc = 0x261940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261944: 0x0
    ctx->pc = 0x261944u;
    // NOP
    // 0x261948: 0x45030001
    ctx->pc = 0x261948u;
    {
        const bool branch_taken_0x261948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261948) {
            ctx->pc = 0x26194Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
            ctx->pc = 0x261950u;
            goto label_261950;
        }
    }
    ctx->pc = 0x261950u;
label_261950:
    // 0x261950: 0xc60000d8
    ctx->pc = 0x261950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261954: 0x46140032
    ctx->pc = 0x261954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261958: 0x0
    ctx->pc = 0x261958u;
    // NOP
    // 0x26195c: 0x45030001
    ctx->pc = 0x26195Cu;
    {
        const bool branch_taken_0x26195c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26195c) {
            ctx->pc = 0x261960u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
            ctx->pc = 0x261964u;
            goto label_261964;
        }
    }
    ctx->pc = 0x261964u;
label_261964:
    // 0x261964: 0xc60000dc
    ctx->pc = 0x261964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261968: 0x46140032
    ctx->pc = 0x261968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26196c: 0x0
    ctx->pc = 0x26196cu;
    // NOP
    // 0x261970: 0x45030001
    ctx->pc = 0x261970u;
    {
        const bool branch_taken_0x261970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261970) {
            ctx->pc = 0x261974u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
            ctx->pc = 0x261978u;
            goto label_261978;
        }
    }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0x3c020032
    ctx->pc = 0x261978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26197c: 0x8c42f46c
    ctx->pc = 0x26197cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964332)));
    // 0x261980: 0x21080
    ctx->pc = 0x261980u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x261984: 0x531021
    ctx->pc = 0x261984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x261988: 0xc4410000
    ctx->pc = 0x261988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26198c: 0xc60000a8
    ctx->pc = 0x26198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261990: 0x46000802
    ctx->pc = 0x261990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x261994: 0xe60000a8
    ctx->pc = 0x261994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x261998: 0xc60000b0
    ctx->pc = 0x261998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26199c: 0x46000802
    ctx->pc = 0x26199cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2619a0: 0xe60000b0
    ctx->pc = 0x2619a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x2619a4: 0xc60000b4
    ctx->pc = 0x2619a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2619a8: 0x46000802
    ctx->pc = 0x2619a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2619ac: 0xe60000b4
    ctx->pc = 0x2619acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x2619b0: 0xc60400b8
    ctx->pc = 0x2619b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2619b4: 0x46040902
    ctx->pc = 0x2619b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2619b8: 0xc60500c0
    ctx->pc = 0x2619b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2619bc: 0x46050942
    ctx->pc = 0x2619bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2619c0: 0xc60300c8
    ctx->pc = 0x2619c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2619c4: 0x460308c2
    ctx->pc = 0x2619c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2619c8: 0xc60000d0
    ctx->pc = 0x2619c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2619cc: 0x46000802
    ctx->pc = 0x2619ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2619d0: 0xe60000d0
    ctx->pc = 0x2619d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2619d4: 0xc60000d4
    ctx->pc = 0x2619d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2619d8: 0x46000802
    ctx->pc = 0x2619d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2619dc: 0xe60000d4
    ctx->pc = 0x2619dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2619e0: 0xc60200d8
    ctx->pc = 0x2619e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2619e4: 0x46020882
    ctx->pc = 0x2619e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2619e8: 0xc60000dc
    ctx->pc = 0x2619e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2619ec: 0x46000842
    ctx->pc = 0x2619ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2619f0: 0xe60100dc
    ctx->pc = 0x2619f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x2619f4: 0x0
    ctx->pc = 0x2619f4u;
    // NOP
    // 0x2619f8: 0x0
    ctx->pc = 0x2619f8u;
    // NOP
    // 0x2619fc: 0x4604a903
    ctx->pc = 0x2619fcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[4] = ctx->f[21] / ctx->f[4];
    // 0x261a00: 0xe60400b8
    ctx->pc = 0x261a00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x261a04: 0x0
    ctx->pc = 0x261a04u;
    // NOP
    // 0x261a08: 0x0
    ctx->pc = 0x261a08u;
    // NOP
    // 0x261a0c: 0x4603a8c3
    ctx->pc = 0x261a0cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[3] = ctx->f[21] / ctx->f[3];
    // 0x261a10: 0xe60300c8
    ctx->pc = 0x261a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x261a14: 0x0
    ctx->pc = 0x261a14u;
    // NOP
    // 0x261a18: 0x0
    ctx->pc = 0x261a18u;
    // NOP
    // 0x261a1c: 0x4605a943
    ctx->pc = 0x261a1cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[5] = ctx->f[21] / ctx->f[5];
    // 0x261a20: 0xe60500c0
    ctx->pc = 0x261a20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x261a24: 0x0
    ctx->pc = 0x261a24u;
    // NOP
    // 0x261a28: 0x0
    ctx->pc = 0x261a28u;
    // NOP
    // 0x261a2c: 0x4602a883
    ctx->pc = 0x261a2cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[2] = ctx->f[21] / ctx->f[2];
    // 0x261a30: 0xe60200d8
    ctx->pc = 0x261a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x261a34: 0x26310001
    ctx->pc = 0x261a34u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_261a38:
    // 0x261a38: 0x3c030034
    ctx->pc = 0x261a38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261a3c: 0x8c62e7c0
    ctx->pc = 0x261a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961088)));
    // 0x261a40: 0x84420018
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x261a44: 0x222102a
    ctx->pc = 0x261a44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x261a48: 0x5440ff33
    ctx->pc = 0x261A48u;
    {
        const bool branch_taken_0x261a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x261a48) {
            ctx->pc = 0x261A4Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961088)));
            ctx->pc = 0x261718u;
            goto label_261718;
        }
    }
    ctx->pc = 0x261A50u;
label_261a50:
    // 0x261a50: 0x3c020034
    ctx->pc = 0x261a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261a54: 0x8c42e7c0
    ctx->pc = 0x261a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x261a58: 0x8442001a
    ctx->pc = 0x261a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x261a5c: 0x18400012
    ctx->pc = 0x261A5Cu;
    {
        const bool branch_taken_0x261a5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x261A60u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261a5c) {
            ctx->pc = 0x261AA8u;
            goto label_261aa8;
        }
    }
    ctx->pc = 0x261A64u;
    // 0x261a64: 0x3c120034
    ctx->pc = 0x261a64u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x261a68: 0x24130018
    ctx->pc = 0x261a68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24));
    // 0x261a6c: 0x8e42e7c0
    ctx->pc = 0x261a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
label_261a70:
    // 0x261a70: 0x2338018
    ctx->pc = 0x261a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x261a74: 0x8c42002c
    ctx->pc = 0x261a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x261a78: 0x2028021
    ctx->pc = 0x261a78u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x261a7c: 0x200202d
    ctx->pc = 0x261a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a80: 0x282d
    ctx->pc = 0x261a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a84: 0xc088108
    ctx->pc = 0x261A84u;
    SET_GPR_U32(ctx, 31, 0x261A8Cu);
    ctx->pc = 0x261A88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261A8Cu; }
    }
    if (ctx->pc != 0x261A8Cu) { return; }
    ctx->pc = 0x261A8Cu;
    // 0x261a8c: 0xae020010
    ctx->pc = 0x261a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x261a90: 0x26310001
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x261a94: 0x8e42e7c0
    ctx->pc = 0x261a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
    // 0x261a98: 0x8442001a
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x261a9c: 0x222102a
    ctx->pc = 0x261a9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x261aa0: 0x1440fff3
    ctx->pc = 0x261AA0u;
    {
        const bool branch_taken_0x261aa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x261AA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294961088)));
        if (branch_taken_0x261aa0) {
            ctx->pc = 0x261A70u;
            goto label_261a70;
        }
    }
    ctx->pc = 0x261AA8u;
label_261aa8:
    // 0x261aa8: 0xdfbf0050
    ctx->pc = 0x261aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261aac: 0xdfb30040
    ctx->pc = 0x261aacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261ab0: 0xdfb20030
    ctx->pc = 0x261ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261ab4: 0xdfb10020
    ctx->pc = 0x261ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261ab8: 0xdfb00010
    ctx->pc = 0x261ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261abc: 0xc7b50068
    ctx->pc = 0x261abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x261ac0: 0xc7b40060
    ctx->pc = 0x261ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x261ac4: 0x3e00008
    ctx->pc = 0x261AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261AC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2616B8u: goto label_2616b8;
            case 0x2616DCu: goto label_2616dc;
            case 0x261718u: goto label_261718;
            case 0x261734u: goto label_261734;
            case 0x261764u: goto label_261764;
            case 0x26177Cu: goto label_26177c;
            case 0x261788u: goto label_261788;
            case 0x2617B8u: goto label_2617b8;
            case 0x2617D0u: goto label_2617d0;
            case 0x2617E8u: goto label_2617e8;
            case 0x26182Cu: goto label_26182c;
            case 0x261834u: goto label_261834;
            case 0x261870u: goto label_261870;
            case 0x261888u: goto label_261888;
            case 0x26189Cu: goto label_26189c;
            case 0x2618B0u: goto label_2618b0;
            case 0x2618C4u: goto label_2618c4;
            case 0x2618D8u: goto label_2618d8;
            case 0x2618ECu: goto label_2618ec;
            case 0x261900u: goto label_261900;
            case 0x261914u: goto label_261914;
            case 0x261928u: goto label_261928;
            case 0x26193Cu: goto label_26193c;
            case 0x261950u: goto label_261950;
            case 0x261964u: goto label_261964;
            case 0x261978u: goto label_261978;
            case 0x261A38u: goto label_261a38;
            case 0x261A50u: goto label_261a50;
            case 0x261A70u: goto label_261a70;
            case 0x261AA8u: goto label_261aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261ACCu;
}
