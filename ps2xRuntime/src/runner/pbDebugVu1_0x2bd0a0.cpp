#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugVu1
// Address: 0x2bd0a0 - 0x2bd680
void pbDebugVu1_0x2bd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd0a0u;

    // 0x2bd0a0: 0x27bdff50
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bd0a4: 0xffbf00a0
    ctx->pc = 0x2bd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bd0a8: 0xffbe0090
    ctx->pc = 0x2bd0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2bd0ac: 0xffb70080
    ctx->pc = 0x2bd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2bd0b0: 0xffb60070
    ctx->pc = 0x2bd0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2bd0b4: 0xffb50060
    ctx->pc = 0x2bd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2bd0b8: 0xffb40050
    ctx->pc = 0x2bd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2bd0bc: 0xffb30040
    ctx->pc = 0x2bd0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bd0c0: 0xffb20030
    ctx->pc = 0x2bd0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bd0c4: 0xffb10020
    ctx->pc = 0x2bd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bd0c8: 0xffb00010
    ctx->pc = 0x2bd0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bd0cc: 0x80b82d
    ctx->pc = 0x2bd0ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0d0: 0xafa50000
    ctx->pc = 0x2bd0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2bd0d4: 0xc0a02d
    ctx->pc = 0x2bd0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0d8: 0xe0902d
    ctx->pc = 0x2bd0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0dc: 0x3c020036
    ctx->pc = 0x2bd0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bd0e0: 0x8c45dee0
    ctx->pc = 0x2bd0e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bd0e4: 0x3c020037
    ctx->pc = 0x2bd0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd0e8: 0x8c53d750
    ctx->pc = 0x2bd0e8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x2bd0ec: 0xae72000c
    ctx->pc = 0x2bd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x2bd0f0: 0xae740000
    ctx->pc = 0x2bd0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2bd0f4: 0xae60001c
    ctx->pc = 0x2bd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x2bd0f8: 0x24020001
    ctx->pc = 0x2bd0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd0fc: 0xae620008
    ctx->pc = 0x2bd0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2bd100: 0x8e62002c
    ctx->pc = 0x2bd100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2bd104: 0x24420001
    ctx->pc = 0x2bd104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bd108: 0xae62002c
    ctx->pc = 0x2bd108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2bd10c: 0x40202d
    ctx->pc = 0x2bd10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd110: 0x28820004
    ctx->pc = 0x2bd110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2bd114: 0x14400003
    ctx->pc = 0x2BD114u;
    {
        const bool branch_taken_0x2bd114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x2bd114) {
            ctx->pc = 0x2BD124u;
            goto label_2bd124;
        }
    }
    ctx->pc = 0x2BD11Cu;
    // 0x2bd11c: 0x202d
    ctx->pc = 0x2bd11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd120: 0xae60002c
    ctx->pc = 0x2bd120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_2bd124:
    // 0x2bd124: 0x821018
    ctx->pc = 0x2bd124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bd128: 0x2621821
    ctx->pc = 0x2bd128u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bd12c: 0xac770030
    ctx->pc = 0x2bd12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 23));
    // 0x2bd130: 0x26630034
    ctx->pc = 0x2bd130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 52));
    // 0x2bd134: 0x621821
    ctx->pc = 0x2bd134u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd138: 0x12e00002
    ctx->pc = 0x2BD138u;
    {
        const bool branch_taken_0x2bd138 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD13Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bd138) {
            ctx->pc = 0x2BD144u;
            goto label_2bd144;
        }
    }
    ctx->pc = 0x2BD140u;
    // 0x2bd140: 0x8ee20000
    ctx->pc = 0x2bd140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2bd144:
    // 0x2bd144: 0xac620000
    ctx->pc = 0x2bd144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2bd148: 0x24020018
    ctx->pc = 0x2bd148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bd14c: 0x821018
    ctx->pc = 0x2bd14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bd150: 0x26630038
    ctx->pc = 0x2bd150u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 56));
    // 0x2bd154: 0x621821
    ctx->pc = 0x2bd154u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd158: 0x12e00002
    ctx->pc = 0x2BD158u;
    {
        const bool branch_taken_0x2bd158 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD15Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bd158) {
            ctx->pc = 0x2BD164u;
            goto label_2bd164;
        }
    }
    ctx->pc = 0x2BD160u;
    // 0x2bd160: 0x8ee20004
    ctx->pc = 0x2bd160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2bd164:
    // 0x2bd164: 0xac620000
    ctx->pc = 0x2bd164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2bd168: 0x24020018
    ctx->pc = 0x2bd168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bd16c: 0x821018
    ctx->pc = 0x2bd16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2bd170: 0x2621821
    ctx->pc = 0x2bd170u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bd174: 0x8fa40000
    ctx->pc = 0x2bd174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd178: 0xa464003c
    ctx->pc = 0x2bd178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x2bd17c: 0xa472003e
    ctx->pc = 0x2bd17cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 18));
    // 0x2bd180: 0xac740040
    ctx->pc = 0x2bd180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 20));
    // 0x2bd184: 0x60102d
    ctx->pc = 0x2bd184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd188: 0x8ca30010
    ctx->pc = 0x2bd188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bd18c: 0x8c630004
    ctx->pc = 0x2bd18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bd190: 0x12800005
    ctx->pc = 0x2BD190u;
    {
        const bool branch_taken_0x2bd190 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD194u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x2bd190) {
            ctx->pc = 0x2BD1A8u;
            goto label_2bd1a8;
        }
    }
    ctx->pc = 0x2BD198u;
    // 0x2bd198: 0x8e82003c
    ctx->pc = 0x2bd198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2bd19c: 0x30420001
    ctx->pc = 0x2bd19cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bd1a0: 0x14400014
    ctx->pc = 0x2BD1A0u;
    {
        const bool branch_taken_0x2bd1a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd1a0) {
            ctx->pc = 0x2BD1F4u;
            goto label_2bd1f4;
        }
    }
    ctx->pc = 0x2BD1A8u;
label_2bd1a8:
    // 0x2bd1a8: 0x12e0000b
    ctx->pc = 0x2BD1A8u;
    {
        const bool branch_taken_0x2bd1a8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1ACu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2bd1a8) {
            ctx->pc = 0x2BD1D8u;
            goto label_2bd1d8;
        }
    }
    ctx->pc = 0x2BD1B0u;
    // 0x2bd1b0: 0x8fa50000
    ctx->pc = 0x2bd1b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd1b4: 0x10a00002
    ctx->pc = 0x2BD1B4u;
    {
        const bool branch_taken_0x2bd1b4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
        if (branch_taken_0x2bd1b4) {
            ctx->pc = 0x2BD1C0u;
            goto label_2bd1c0;
        }
    }
    ctx->pc = 0x2BD1BCu;
    // 0x2bd1bc: 0x24041345
    ctx->pc = 0x2bd1bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4933));
label_2bd1c0:
    // 0x2bd1c0: 0x2e0282d
    ctx->pc = 0x2bd1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1c4: 0x302d
    ctx->pc = 0x2bd1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1c8: 0xc0a99a8
    ctx->pc = 0x2BD1C8u;
    SET_GPR_U32(ctx, 31, 0x2BD1D0u);
    ctx->pc = 0x2BD1CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaSchedule_0x2a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1D0u; }
    }
    if (ctx->pc != 0x2BD1D0u) { return; }
    ctx->pc = 0x2BD1D0u;
    // 0x2bd1d0: 0x1000011f
    ctx->pc = 0x2BD1D0u;
    {
        const bool branch_taken_0x2bd1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1D4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2bd1d0) {
            ctx->pc = 0x2BD650u;
            goto label_2bd650;
        }
    }
    ctx->pc = 0x2BD1D8u;
label_2bd1d8:
    // 0x2bd1d8: 0x2402ffff
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd1dc: 0x5242011c
    ctx->pc = 0x2BD1DCu;
    {
        const bool branch_taken_0x2bd1dc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bd1dc) {
            ctx->pc = 0x2BD1E0u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x2BD650u;
            goto label_2bd650;
        }
    }
    ctx->pc = 0x2BD1E4u;
    // 0x2bd1e4: 0xc0ace5e
    ctx->pc = 0x2BD1E4u;
    SET_GPR_U32(ctx, 31, 0x2BD1ECu);
    ctx->pc = 0x2BD1E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3978u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbStartVu1_0x2b3978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1ECu; }
    }
    if (ctx->pc != 0x2BD1ECu) { return; }
    ctx->pc = 0x2BD1ECu;
    // 0x2bd1ec: 0x10000118
    ctx->pc = 0x2BD1ECu;
    {
        const bool branch_taken_0x2bd1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1F0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2bd1ec) {
            ctx->pc = 0x2BD650u;
            goto label_2bd650;
        }
    }
    ctx->pc = 0x2BD1F4u;
label_2bd1f4:
    // 0x2bd1f4: 0x8c42ba30
    ctx->pc = 0x2bd1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949424)));
    // 0x2bd1f8: 0x10400004
    ctx->pc = 0x2BD1F8u;
    {
        const bool branch_taken_0x2bd1f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2bd1f8) {
            ctx->pc = 0x2BD20Cu;
            goto label_2bd20c;
        }
    }
    ctx->pc = 0x2BD200u;
    // 0x2bd200: 0x3c05003b
    ctx->pc = 0x2bd200u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bd204: 0xc0a9fe2
    ctx->pc = 0x2BD204u;
    SET_GPR_U32(ctx, 31, 0x2BD20Cu);
    ctx->pc = 0x2BD208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26032));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD20Cu; }
    }
    if (ctx->pc != 0x2BD20Cu) { return; }
    ctx->pc = 0x2BD20Cu;
label_2bd20c:
    // 0x2bd20c: 0x3c020037
    ctx->pc = 0x2bd20cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd210: 0x8c42ba24
    ctx->pc = 0x2bd210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949412)));
    // 0x2bd214: 0xa040270f
    ctx->pc = 0x2bd214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9999), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd218: 0x3c040037
    ctx->pc = 0x2bd218u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2bd21c: 0x2484c620
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952480));
    // 0x2bd220: 0x24050001
    ctx->pc = 0x2bd220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd224: 0x24060001
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd228: 0xc0ad004
    ctx->pc = 0x2BD228u;
    SET_GPR_U32(ctx, 31, 0x2BD230u);
    ctx->pc = 0x2BD22Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD230u; }
    }
    if (ctx->pc != 0x2BD230u) { return; }
    ctx->pc = 0x2BD230u;
    // 0x2bd230: 0x3c030037
    ctx->pc = 0x2bd230u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bd234: 0x24020001
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd238: 0xac62ba2c
    ctx->pc = 0x2bd238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949420), GPR_U32(ctx, 2));
    // 0x2bd23c: 0x24040080
    ctx->pc = 0x2bd23cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2bd240: 0x3c05003b
    ctx->pc = 0x2bd240u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bd244: 0xc0a9fe2
    ctx->pc = 0x2BD244u;
    SET_GPR_U32(ctx, 31, 0x2BD24Cu);
    ctx->pc = 0x2BD248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26048));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD24Cu; }
    }
    if (ctx->pc != 0x2BD24Cu) { return; }
    ctx->pc = 0x2BD24Cu;
    // 0x2bd24c: 0x8e82003c
    ctx->pc = 0x2bd24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_2bd250:
    // 0x2bd250: 0x30420001
    ctx->pc = 0x2bd250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bd254: 0x10400008
    ctx->pc = 0x2BD254u;
    {
        const bool branch_taken_0x2bd254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD258u;
        SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd254) {
            ctx->pc = 0x2BD278u;
            goto label_2bd278;
        }
    }
    ctx->pc = 0x2BD25Cu;
    // 0x2bd25c: 0x3c04ffff
    ctx->pc = 0x2bd25cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd260: 0x3484ffff
    ctx->pc = 0x2bd260u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bd264: 0xc0ad02c
    ctx->pc = 0x2BD264u;
    SET_GPR_U32(ctx, 31, 0x2BD26Cu);
    ctx->pc = 0x2BD268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD26Cu; }
    }
    if (ctx->pc != 0x2BD26Cu) { return; }
    ctx->pc = 0x2BD26Cu;
    // 0x2bd26c: 0x5040fff8
    ctx->pc = 0x2BD26Cu;
    {
        const bool branch_taken_0x2bd26c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd26c) {
            ctx->pc = 0x2BD270u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
            ctx->pc = 0x2BD250u;
            goto label_2bd250;
        }
    }
    ctx->pc = 0x2BD274u;
    // 0x2bd274: 0x3c040037
    ctx->pc = 0x2bd274u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2bd278:
    // 0x2bd278: 0x2484c880
    ctx->pc = 0x2bd278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953088));
    // 0x2bd27c: 0x24050001
    ctx->pc = 0x2bd27cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd280: 0x24060001
    ctx->pc = 0x2bd280u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd284: 0xc0ad004
    ctx->pc = 0x2BD284u;
    SET_GPR_U32(ctx, 31, 0x2BD28Cu);
    ctx->pc = 0x2BD288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD28Cu; }
    }
    if (ctx->pc != 0x2BD28Cu) { return; }
    ctx->pc = 0x2BD28Cu;
    // 0x2bd28c: 0x3c110037
    ctx->pc = 0x2bd28cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2bd290: 0x24020002
    ctx->pc = 0x2bd290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd294: 0xc0ace42
    ctx->pc = 0x2BD294u;
    SET_GPR_U32(ctx, 31, 0x2BD29Cu);
    ctx->pc = 0x2BD298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949420), GPR_U32(ctx, 2));
    ctx->pc = 0x2B3908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuFBRST_0x2b3908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD29Cu; }
    }
    if (ctx->pc != 0x2BD29Cu) { return; }
    ctx->pc = 0x2BD29Cu;
    // 0x2bd29c: 0xc0ace50
    ctx->pc = 0x2BD29Cu;
    SET_GPR_U32(ctx, 31, 0x2BD2A4u);
    ctx->pc = 0x2BD2A0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 2048));
    ctx->pc = 0x2B3940u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVuFBRST_0x2b3940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2A4u; }
    }
    if (ctx->pc != 0x2BD2A4u) { return; }
    ctx->pc = 0x2BD2A4u;
    // 0x2bd2a4: 0x3c100037
    ctx->pc = 0x2bd2a4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2bd2a8: 0x2604cae0
    ctx->pc = 0x2bd2a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294953696));
    // 0x2bd2ac: 0x24050001
    ctx->pc = 0x2bd2acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd2b0: 0x24060001
    ctx->pc = 0x2bd2b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd2b4: 0xc0ad004
    ctx->pc = 0x2BD2B4u;
    SET_GPR_U32(ctx, 31, 0x2BD2BCu);
    ctx->pc = 0x2BD2B8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2BCu; }
    }
    if (ctx->pc != 0x2BD2BCu) { return; }
    ctx->pc = 0x2BD2BCu;
    // 0x2bd2bc: 0x2610cae0
    ctx->pc = 0x2bd2bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953696));
    // 0x2bd2c0: 0xae700004
    ctx->pc = 0x2bd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x2bd2c4: 0x24020003
    ctx->pc = 0x2bd2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd2c8: 0x12e00008
    ctx->pc = 0x2BD2C8u;
    {
        const bool branch_taken_0x2bd2c8 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD2CCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949420), GPR_U32(ctx, 2));
        if (branch_taken_0x2bd2c8) {
            ctx->pc = 0x2BD2ECu;
            goto label_2bd2ec;
        }
    }
    ctx->pc = 0x2BD2D0u;
    // 0x2bd2d0: 0x24041145
    ctx->pc = 0x2bd2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2bd2d4: 0x2e0282d
    ctx->pc = 0x2bd2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2d8: 0x302d
    ctx->pc = 0x2bd2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2dc: 0xc0a99a8
    ctx->pc = 0x2BD2DCu;
    SET_GPR_U32(ctx, 31, 0x2BD2E4u);
    ctx->pc = 0x2BD2E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaSchedule_0x2a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2E4u; }
    }
    if (ctx->pc != 0x2BD2E4u) { return; }
    ctx->pc = 0x2BD2E4u;
    // 0x2bd2e4: 0x1000000b
    ctx->pc = 0x2BD2E4u;
    {
        const bool branch_taken_0x2bd2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD2E8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd2e4) {
            ctx->pc = 0x2BD314u;
            goto label_2bd314;
        }
    }
    ctx->pc = 0x2BD2ECu;
label_2bd2ec:
    // 0x2bd2ec: 0x2402ffff
    ctx->pc = 0x2bd2ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd2f0: 0x12420005
    ctx->pc = 0x2BD2F0u;
    {
        const bool branch_taken_0x2bd2f0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BD2F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd2f0) {
            ctx->pc = 0x2BD308u;
            goto label_2bd308;
        }
    }
    ctx->pc = 0x2BD2F8u;
    // 0x2bd2f8: 0xc0ace5e
    ctx->pc = 0x2BD2F8u;
    SET_GPR_U32(ctx, 31, 0x2BD300u);
    ctx->pc = 0x2BD2FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->pc = 0x2B3978u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbStartVu1_0x2b3978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD300u; }
    }
    if (ctx->pc != 0x2BD300u) { return; }
    ctx->pc = 0x2BD300u;
    // 0x2bd300: 0x10000004
    ctx->pc = 0x2BD300u;
    {
        const bool branch_taken_0x2bd300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD304u;
        SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd300) {
            ctx->pc = 0x2BD314u;
            goto label_2bd314;
        }
    }
    ctx->pc = 0x2BD308u;
label_2bd308:
    // 0x2bd308: 0xc0b4976
    ctx->pc = 0x2BD308u;
    SET_GPR_U32(ctx, 31, 0x2BD310u);
    ctx->pc = 0x2BD30Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26064));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD310u; }
    }
    if (ctx->pc != 0x2BD310u) { return; }
    ctx->pc = 0x2BD310u;
    // 0x2bd310: 0x3c040037
    ctx->pc = 0x2bd310u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2bd314:
    // 0x2bd314: 0x2484cd40
    ctx->pc = 0x2bd314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954304));
    // 0x2bd318: 0x24050001
    ctx->pc = 0x2bd318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd31c: 0x24060001
    ctx->pc = 0x2bd31cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd320: 0xc0ad004
    ctx->pc = 0x2BD320u;
    SET_GPR_U32(ctx, 31, 0x2BD328u);
    ctx->pc = 0x2BD324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD328u; }
    }
    if (ctx->pc != 0x2BD328u) { return; }
    ctx->pc = 0x2BD328u;
    // 0x2bd328: 0x3c030037
    ctx->pc = 0x2bd328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bd32c: 0x24020004
    ctx->pc = 0x2bd32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd330: 0xac62ba2c
    ctx->pc = 0x2bd330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949420), GPR_U32(ctx, 2));
    // 0x2bd334: 0xb02d
    ctx->pc = 0x2bd334u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd338: 0xc0abc02
    ctx->pc = 0x2BD338u;
    SET_GPR_U32(ctx, 31, 0x2BD340u);
    ctx->pc = 0x2BD33Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD340u; }
    }
    if (ctx->pc != 0x2BD340u) { return; }
    ctx->pc = 0x2BD340u;
    // 0x2bd340: 0x40882d
    ctx->pc = 0x2bd340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd344: 0x0
    ctx->pc = 0x2bd344u;
    // NOP
label_2bd348:
    // 0x2bd348: 0x3c04ffff
    ctx->pc = 0x2bd348u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd34c: 0x3484ffff
    ctx->pc = 0x2bd34cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bd350: 0xc0ad02c
    ctx->pc = 0x2BD350u;
    SET_GPR_U32(ctx, 31, 0x2BD358u);
    ctx->pc = 0x2BD354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD358u; }
    }
    if (ctx->pc != 0x2BD358u) { return; }
    ctx->pc = 0x2BD358u;
    // 0x2bd358: 0x1440005e
    ctx->pc = 0x2BD358u;
    {
        const bool branch_taken_0x2bd358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bd358) {
            ctx->pc = 0x2BD4D4u;
            goto label_2bd4d4;
        }
    }
    ctx->pc = 0x2BD360u;
    // 0x2bd360: 0xc0abc02
    ctx->pc = 0x2BD360u;
    SET_GPR_U32(ctx, 31, 0x2BD368u);
    ctx->pc = 0x2BD364u;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD368u; }
    }
    if (ctx->pc != 0x2BD368u) { return; }
    ctx->pc = 0x2BD368u;
    // 0x2bd368: 0x40882d
    ctx->pc = 0x2bd368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd36c: 0x220902d
    ctx->pc = 0x2bd36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd370: 0x3c02003b
    ctx->pc = 0x2bd370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd374: 0x1000002f
    ctx->pc = 0x2BD374u;
    {
        const bool branch_taken_0x2bd374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD378u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 25976));
        if (branch_taken_0x2bd374) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD37Cu;
    // 0x2bd37c: 0x0
    ctx->pc = 0x2bd37cu;
    // NOP
label_2bd380:
    // 0x2bd380: 0xc0abc02
    ctx->pc = 0x2BD380u;
    SET_GPR_U32(ctx, 31, 0x2BD388u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD388u; }
    }
    if (ctx->pc != 0x2BD388u) { return; }
    ctx->pc = 0x2BD388u;
    // 0x2bd388: 0x40802d
    ctx->pc = 0x2bd388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd38c: 0x2121023
    ctx->pc = 0x2bd38cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2bd390: 0x3c0301c9
    ctx->pc = 0x2bd390u;
    SET_GPR_U32(ctx, 3, ((uint32_t)457 << 16));
    // 0x2bd394: 0x3463c380
    ctx->pc = 0x2bd394u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50048));
    // 0x2bd398: 0x62102b
    ctx->pc = 0x2bd398u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd39c: 0x10400004
    ctx->pc = 0x2BD39Cu;
    {
        const bool branch_taken_0x2bd39c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd39c) {
            ctx->pc = 0x2BD3B0u;
            goto label_2bd3b0;
        }
    }
    ctx->pc = 0x2BD3A4u;
    // 0x2bd3a4: 0xc0abc02
    ctx->pc = 0x2BD3A4u;
    SET_GPR_U32(ctx, 31, 0x2BD3ACu);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3ACu; }
    }
    if (ctx->pc != 0x2BD3ACu) { return; }
    ctx->pc = 0x2BD3ACu;
    // 0x2bd3ac: 0x40882d
    ctx->pc = 0x2bd3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd3b0:
    // 0x2bd3b0: 0xc0abc02
    ctx->pc = 0x2BD3B0u;
    SET_GPR_U32(ctx, 31, 0x2BD3B8u);
    ctx->pc = 0x2BD3B4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3B8u; }
    }
    if (ctx->pc != 0x2BD3B8u) { return; }
    ctx->pc = 0x2BD3B8u;
    // 0x2bd3b8: 0x2222023
    ctx->pc = 0x2bd3b8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bd3bc: 0x3c050393
    ctx->pc = 0x2bd3bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)915 << 16));
    // 0x2bd3c0: 0x34a58700
    ctx->pc = 0x2bd3c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 34560));
    // 0x2bd3c4: 0xa4102b
    ctx->pc = 0x2bd3c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2bd3c8: 0x10400012
    ctx->pc = 0x2BD3C8u;
    {
        const bool branch_taken_0x2bd3c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD3CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd3c8) {
            ctx->pc = 0x2BD414u;
            goto label_2bd414;
        }
    }
    ctx->pc = 0x2BD3D0u;
    // 0x2bd3d0: 0xc0b4a34
    ctx->pc = 0x2BD3D0u;
    SET_GPR_U32(ctx, 31, 0x2BD3D8u);
    ctx->pc = 0x2BD3D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3D8u; }
    }
    if (ctx->pc != 0x2BD3D8u) { return; }
    ctx->pc = 0x2BD3D8u;
    // 0x2bd3d8: 0xc0b4a34
    ctx->pc = 0x2BD3D8u;
    SET_GPR_U32(ctx, 31, 0x2BD3E0u);
    ctx->pc = 0x2BD3DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 26112));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3E0u; }
    }
    if (ctx->pc != 0x2BD3E0u) { return; }
    ctx->pc = 0x2BD3E0u;
    // 0x2bd3e0: 0x3c04003b
    ctx->pc = 0x2bd3e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd3e4: 0xc0b4a34
    ctx->pc = 0x2BD3E4u;
    SET_GPR_U32(ctx, 31, 0x2BD3ECu);
    ctx->pc = 0x2BD3E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26168));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3ECu; }
    }
    if (ctx->pc != 0x2BD3ECu) { return; }
    ctx->pc = 0x2BD3ECu;
    // 0x2bd3ec: 0x3c04003b
    ctx->pc = 0x2bd3ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd3f0: 0xc0a9b54
    ctx->pc = 0x2BD3F0u;
    SET_GPR_U32(ctx, 31, 0x2BD3F8u);
    ctx->pc = 0x2BD3F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26216));
    ctx->pc = 0x2A6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowPathInfo_0x2a6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3F8u; }
    }
    if (ctx->pc != 0x2BD3F8u) { return; }
    ctx->pc = 0x2BD3F8u;
    // 0x2bd3f8: 0xc0b4a34
    ctx->pc = 0x2BD3F8u;
    SET_GPR_U32(ctx, 31, 0x2BD400u);
    ctx->pc = 0x2BD3FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD400u; }
    }
    if (ctx->pc != 0x2BD400u) { return; }
    ctx->pc = 0x2BD400u;
    // 0x2bd400: 0x24020227
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 551));
    // 0x2bd404: 0xc0abc02
    ctx->pc = 0x2BD404u;
    SET_GPR_U32(ctx, 31, 0x2BD40Cu);
    ctx->pc = 0x2BD408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD40Cu; }
    }
    if (ctx->pc != 0x2BD40Cu) { return; }
    ctx->pc = 0x2BD40Cu;
    // 0x2bd40c: 0x40882d
    ctx->pc = 0x2bd40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd410: 0x3c020037
    ctx->pc = 0x2bd410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bd414:
    // 0x2bd414: 0x8c4225d8
    ctx->pc = 0x2bd414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9688)));
    // 0x2bd418: 0xae620004
    ctx->pc = 0x2bd418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2bd41c: 0x8e82003c
    ctx->pc = 0x2bd41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2bd420: 0x30420020
    ctx->pc = 0x2bd420u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2bd424: 0x10400003
    ctx->pc = 0x2BD424u;
    {
        const bool branch_taken_0x2bd424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd424) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD42Cu;
    // 0x2bd42c: 0xc0af35e
    ctx->pc = 0x2BD42Cu;
    SET_GPR_U32(ctx, 31, 0x2BD434u);
    ctx->pc = 0x2BCD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1ForceBreak_0x2bcd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD434u; }
    }
    if (ctx->pc != 0x2BD434u) { return; }
    ctx->pc = 0x2BD434u;
label_2bd434:
    // 0x2bd434: 0x3c04ffff
    ctx->pc = 0x2bd434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd438: 0x3484ffff
    ctx->pc = 0x2bd438u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bd43c: 0xc0ad02c
    ctx->pc = 0x2BD43Cu;
    SET_GPR_U32(ctx, 31, 0x2BD444u);
    ctx->pc = 0x2BD440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD444u; }
    }
    if (ctx->pc != 0x2BD444u) { return; }
    ctx->pc = 0x2BD444u;
    // 0x2bd444: 0x1040ffce
    ctx->pc = 0x2BD444u;
    {
        const bool branch_taken_0x2bd444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd444) {
            ctx->pc = 0x2BD380u;
            goto label_2bd380;
        }
    }
    ctx->pc = 0x2BD44Cu;
    // 0x2bd44c: 0x8e82003c
    ctx->pc = 0x2bd44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2bd450: 0x30420020
    ctx->pc = 0x2bd450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2bd454: 0x10400003
    ctx->pc = 0x2BD454u;
    {
        const bool branch_taken_0x2bd454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd454) {
            ctx->pc = 0x2BD464u;
            goto label_2bd464;
        }
    }
    ctx->pc = 0x2BD45Cu;
    // 0x2bd45c: 0x1000000b
    ctx->pc = 0x2BD45Cu;
    {
        const bool branch_taken_0x2bd45c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD460u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2bd45c) {
            ctx->pc = 0x2BD48Cu;
            goto label_2bd48c;
        }
    }
    ctx->pc = 0x2BD464u;
label_2bd464:
    // 0x2bd464: 0xc0abc02
    ctx->pc = 0x2BD464u;
    SET_GPR_U32(ctx, 31, 0x2BD46Cu);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD46Cu; }
    }
    if (ctx->pc != 0x2BD46Cu) { return; }
    ctx->pc = 0x2BD46Cu;
    // 0x2bd46c: 0x512023
    ctx->pc = 0x2bd46cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bd470: 0x3c0201c9
    ctx->pc = 0x2bd470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)457 << 16));
    // 0x2bd474: 0x3442c37f
    ctx->pc = 0x2bd474u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50047));
    // 0x2bd478: 0x44182b
    ctx->pc = 0x2bd478u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bd47c: 0x8fa50004
    ctx->pc = 0x2bd47cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2bd480: 0xa41021
    ctx->pc = 0x2bd480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2bd484: 0x43280a
    ctx->pc = 0x2bd484u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2bd488: 0xafa50004
    ctx->pc = 0x2bd488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2bd48c:
    // 0x2bd48c: 0x3c030393
    ctx->pc = 0x2bd48cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)915 << 16));
    // 0x2bd490: 0x34638700
    ctx->pc = 0x2bd490u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34560));
    // 0x2bd494: 0x8fa40004
    ctx->pc = 0x2bd494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2bd498: 0x64102b
    ctx->pc = 0x2bd498u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd49c: 0x10400029
    ctx->pc = 0x2BD49Cu;
    {
        const bool branch_taken_0x2bd49c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD4A0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd49c) {
            ctx->pc = 0x2BD544u;
            goto label_2bd544;
        }
    }
    ctx->pc = 0x2BD4A4u;
    // 0x2bd4a4: 0xafa00004
    ctx->pc = 0x2bd4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bd4a8: 0xc0b4a34
    ctx->pc = 0x2BD4A8u;
    SET_GPR_U32(ctx, 31, 0x2BD4B0u);
    ctx->pc = 0x2BD4ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 25976));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4B0u; }
    }
    if (ctx->pc != 0x2BD4B0u) { return; }
    ctx->pc = 0x2BD4B0u;
    // 0x2bd4b0: 0x3c04003b
    ctx->pc = 0x2bd4b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd4b4: 0xc0b4a34
    ctx->pc = 0x2BD4B4u;
    SET_GPR_U32(ctx, 31, 0x2BD4BCu);
    ctx->pc = 0x2BD4B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26224));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4BCu; }
    }
    if (ctx->pc != 0x2BD4BCu) { return; }
    ctx->pc = 0x2BD4BCu;
    // 0x2bd4bc: 0x3c04003b
    ctx->pc = 0x2bd4bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd4c0: 0xc0b4a34
    ctx->pc = 0x2BD4C0u;
    SET_GPR_U32(ctx, 31, 0x2BD4C8u);
    ctx->pc = 0x2BD4C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26272));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4C8u; }
    }
    if (ctx->pc != 0x2BD4C8u) { return; }
    ctx->pc = 0x2BD4C8u;
    // 0x2bd4c8: 0x3c04003b
    ctx->pc = 0x2bd4c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd4cc: 0x10000016
    ctx->pc = 0x2BD4CCu;
    {
        const bool branch_taken_0x2bd4cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD4D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25968));
        if (branch_taken_0x2bd4cc) {
            ctx->pc = 0x2BD528u;
            goto label_2bd528;
        }
    }
    ctx->pc = 0x2BD4D4u;
label_2bd4d4:
    // 0x2bd4d4: 0xc0abc02
    ctx->pc = 0x2BD4D4u;
    SET_GPR_U32(ctx, 31, 0x2BD4DCu);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4DCu; }
    }
    if (ctx->pc != 0x2BD4DCu) { return; }
    ctx->pc = 0x2BD4DCu;
    // 0x2bd4dc: 0x512023
    ctx->pc = 0x2bd4dcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bd4e0: 0x3c0501c9
    ctx->pc = 0x2bd4e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)457 << 16));
    // 0x2bd4e4: 0x34a5c37f
    ctx->pc = 0x2bd4e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 50047));
    // 0x2bd4e8: 0xa4102b
    ctx->pc = 0x2bd4e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2bd4ec: 0x2c41821
    ctx->pc = 0x2bd4ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2bd4f0: 0x62b00a
    ctx->pc = 0x2bd4f0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 3));
    // 0x2bd4f4: 0x3c030393
    ctx->pc = 0x2bd4f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)915 << 16));
    // 0x2bd4f8: 0x34638700
    ctx->pc = 0x2bd4f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34560));
    // 0x2bd4fc: 0x76102b
    ctx->pc = 0x2bd4fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2bd500: 0x10400010
    ctx->pc = 0x2BD500u;
    {
        const bool branch_taken_0x2bd500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD504u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd500) {
            ctx->pc = 0x2BD544u;
            goto label_2bd544;
        }
    }
    ctx->pc = 0x2BD508u;
    // 0x2bd508: 0xb02d
    ctx->pc = 0x2bd508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd50c: 0xc0b4a34
    ctx->pc = 0x2BD50Cu;
    SET_GPR_U32(ctx, 31, 0x2BD514u);
    ctx->pc = 0x2BD510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 25976));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD514u; }
    }
    if (ctx->pc != 0x2BD514u) { return; }
    ctx->pc = 0x2BD514u;
    // 0x2bd514: 0x3c04003b
    ctx->pc = 0x2bd514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd518: 0xc0b4a34
    ctx->pc = 0x2BD518u;
    SET_GPR_U32(ctx, 31, 0x2BD520u);
    ctx->pc = 0x2BD51Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26320));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD520u; }
    }
    if (ctx->pc != 0x2BD520u) { return; }
    ctx->pc = 0x2BD520u;
    // 0x2bd520: 0x3c04003b
    ctx->pc = 0x2bd520u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd524: 0x24846668
    ctx->pc = 0x2bd524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26216));
label_2bd528:
    // 0x2bd528: 0xc0a9b54
    ctx->pc = 0x2BD528u;
    SET_GPR_U32(ctx, 31, 0x2BD530u);
    ctx->pc = 0x2A6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowPathInfo_0x2a6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD530u; }
    }
    if (ctx->pc != 0x2BD530u) { return; }
    ctx->pc = 0x2BD530u;
    // 0x2bd530: 0x3c02003b
    ctx->pc = 0x2bd530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd534: 0xc0b4a34
    ctx->pc = 0x2BD534u;
    SET_GPR_U32(ctx, 31, 0x2BD53Cu);
    ctx->pc = 0x2BD538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25976));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD53Cu; }
    }
    if (ctx->pc != 0x2BD53Cu) { return; }
    ctx->pc = 0x2BD53Cu;
    // 0x2bd53c: 0x24030217
    ctx->pc = 0x2bd53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 535));
    // 0x2bd540: 0xae83003c
    ctx->pc = 0x2bd540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
label_2bd544:
    // 0x2bd544: 0xc0af38a
    ctx->pc = 0x2BD544u;
    SET_GPR_U32(ctx, 31, 0x2BD54Cu);
    ctx->pc = 0x2BD548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1DebugBreak_0x2bce28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD54Cu; }
    }
    if (ctx->pc != 0x2BD54Cu) { return; }
    ctx->pc = 0x2BD54Cu;
    // 0x2bd54c: 0xc0abc02
    ctx->pc = 0x2BD54Cu;
    SET_GPR_U32(ctx, 31, 0x2BD554u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD554u; }
    }
    if (ctx->pc != 0x2BD554u) { return; }
    ctx->pc = 0x2BD554u;
    // 0x2bd554: 0x40882d
    ctx->pc = 0x2bd554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd558: 0xc0a9f00
    ctx->pc = 0x2BD558u;
    SET_GPR_U32(ctx, 31, 0x2BD560u);
    ctx->pc = 0x2BD55Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 130));
    ctx->pc = 0x2A7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetUnitStatusMasked_0x2a7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD560u; }
    }
    if (ctx->pc != 0x2BD560u) { return; }
    ctx->pc = 0x2BD560u;
    // 0x2bd560: 0x14400007
    ctx->pc = 0x2BD560u;
    {
        const bool branch_taken_0x2bd560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bd560) {
            ctx->pc = 0x2BD580u;
            goto label_2bd580;
        }
    }
    ctx->pc = 0x2BD568u;
    // 0x2bd568: 0x3c04ffff
    ctx->pc = 0x2bd568u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd56c: 0x3484ffff
    ctx->pc = 0x2bd56cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bd570: 0xc0ad02c
    ctx->pc = 0x2BD570u;
    SET_GPR_U32(ctx, 31, 0x2BD578u);
    ctx->pc = 0x2BD574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD578u; }
    }
    if (ctx->pc != 0x2BD578u) { return; }
    ctx->pc = 0x2BD578u;
    // 0x2bd578: 0x14400005
    ctx->pc = 0x2BD578u;
    {
        const bool branch_taken_0x2bd578 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bd578) {
            ctx->pc = 0x2BD590u;
            goto label_2bd590;
        }
    }
    ctx->pc = 0x2BD580u;
label_2bd580:
    // 0x2bd580: 0xc0af368
    ctx->pc = 0x2BD580u;
    SET_GPR_U32(ctx, 31, 0x2BD588u);
    ctx->pc = 0x2BD584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Restart_0x2bcda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD588u; }
    }
    if (ctx->pc != 0x2BD588u) { return; }
    ctx->pc = 0x2BD588u;
    // 0x2bd588: 0x1000ff6f
    ctx->pc = 0x2BD588u;
    {
        const bool branch_taken_0x2bd588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd588) {
            ctx->pc = 0x2BD348u;
            goto label_2bd348;
        }
    }
    ctx->pc = 0x2BD590u;
label_2bd590:
    // 0x2bd590: 0xc0ace42
    ctx->pc = 0x2BD590u;
    SET_GPR_U32(ctx, 31, 0x2BD598u);
    ctx->pc = 0x2B3908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuFBRST_0x2b3908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD598u; }
    }
    if (ctx->pc != 0x2BD598u) { return; }
    ctx->pc = 0x2BD598u;
    // 0x2bd598: 0x3c04ffff
    ctx->pc = 0x2bd598u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd59c: 0x3484f7ff
    ctx->pc = 0x2bd59cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 63487));
    // 0x2bd5a0: 0xc0ace50
    ctx->pc = 0x2BD5A0u;
    SET_GPR_U32(ctx, 31, 0x2BD5A8u);
    ctx->pc = 0x2BD5A4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2B3940u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVuFBRST_0x2b3940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5A8u; }
    }
    if (ctx->pc != 0x2BD5A8u) { return; }
    ctx->pc = 0x2BD5A8u;
    // 0x2bd5a8: 0x3c04ffff
    ctx->pc = 0x2bd5a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bd5ac: 0x3484ffff
    ctx->pc = 0x2bd5acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bd5b0: 0xc0ad02c
    ctx->pc = 0x2BD5B0u;
    SET_GPR_U32(ctx, 31, 0x2BD5B8u);
    ctx->pc = 0x2BD5B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5B8u; }
    }
    if (ctx->pc != 0x2BD5B8u) { return; }
    ctx->pc = 0x2BD5B8u;
    // 0x2bd5b8: 0x10400004
    ctx->pc = 0x2BD5B8u;
    {
        const bool branch_taken_0x2bd5b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD5BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x2bd5b8) {
            ctx->pc = 0x2BD5CCu;
            goto label_2bd5cc;
        }
    }
    ctx->pc = 0x2BD5C0u;
    // 0x2bd5c0: 0xc0af368
    ctx->pc = 0x2BD5C0u;
    SET_GPR_U32(ctx, 31, 0x2BD5C8u);
    ctx->pc = 0x2BD5C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Restart_0x2bcda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5C8u; }
    }
    if (ctx->pc != 0x2BD5C8u) { return; }
    ctx->pc = 0x2BD5C8u;
    // 0x2bd5c8: 0x24040080
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
label_2bd5cc:
    // 0x2bd5cc: 0x3c05003b
    ctx->pc = 0x2bd5ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bd5d0: 0xc0a9fe2
    ctx->pc = 0x2BD5D0u;
    SET_GPR_U32(ctx, 31, 0x2BD5D8u);
    ctx->pc = 0x2BD5D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26376));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5D8u; }
    }
    if (ctx->pc != 0x2BD5D8u) { return; }
    ctx->pc = 0x2BD5D8u;
    // 0x2bd5d8: 0x3c020037
    ctx->pc = 0x2bd5d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd5dc: 0x8c42ba30
    ctx->pc = 0x2bd5dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949424)));
    // 0x2bd5e0: 0x10400004
    ctx->pc = 0x2BD5E0u;
    {
        const bool branch_taken_0x2bd5e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD5E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 52));
        if (branch_taken_0x2bd5e0) {
            ctx->pc = 0x2BD5F4u;
            goto label_2bd5f4;
        }
    }
    ctx->pc = 0x2BD5E8u;
    // 0x2bd5e8: 0x3c05003b
    ctx->pc = 0x2bd5e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bd5ec: 0xc0a9fe2
    ctx->pc = 0x2BD5ECu;
    SET_GPR_U32(ctx, 31, 0x2BD5F4u);
    ctx->pc = 0x2BD5F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26392));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5F4u; }
    }
    if (ctx->pc != 0x2BD5F4u) { return; }
    ctx->pc = 0x2BD5F4u;
label_2bd5f4:
    // 0x2bd5f4: 0x8e82003c
    ctx->pc = 0x2bd5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2bd5f8: 0x30420080
    ctx->pc = 0x2bd5f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2bd5fc: 0x10400002
    ctx->pc = 0x2BD5FCu;
    {
        const bool branch_taken_0x2bd5fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x2bd5fc) {
            ctx->pc = 0x2BD608u;
            goto label_2bd608;
        }
    }
    ctx->pc = 0x2BD604u;
    // 0x2bd604: 0xae82003c
    ctx->pc = 0x2bd604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_2bd608:
    // 0x2bd608: 0xc0af38a
    ctx->pc = 0x2BD608u;
    SET_GPR_U32(ctx, 31, 0x2BD610u);
    ctx->pc = 0x2BD60Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1DebugBreak_0x2bce28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD610u; }
    }
    if (ctx->pc != 0x2BD610u) { return; }
    ctx->pc = 0x2BD610u;
    // 0x2bd610: 0x3c030037
    ctx->pc = 0x2bd610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bd614: 0x24020006
    ctx->pc = 0x2bd614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bd618: 0xac62ba2c
    ctx->pc = 0x2bd618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949420), GPR_U32(ctx, 2));
    // 0x2bd61c: 0xae600008
    ctx->pc = 0x2bd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2bd620: 0x8fa40000
    ctx->pc = 0x2bd620u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd624: 0x50800004
    ctx->pc = 0x2BD624u;
    {
        const bool branch_taken_0x2bd624 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd624) {
            ctx->pc = 0x2BD628u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
            ctx->pc = 0x2BD638u;
            goto label_2bd638;
        }
    }
    ctx->pc = 0x2BD62Cu;
    // 0x2bd62c: 0xc0a9538
    ctx->pc = 0x2BD62Cu;
    SET_GPR_U32(ctx, 31, 0x2BD634u);
    ctx->pc = 0x2BD630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A54E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufFree_0x2a54e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD634u; }
    }
    if (ctx->pc != 0x2BD634u) { return; }
    ctx->pc = 0x2BD634u;
    // 0x2bd634: 0x8e82003c
    ctx->pc = 0x2bd634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_2bd638:
    // 0x2bd638: 0x30420040
    ctx->pc = 0x2bd638u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2bd63c: 0x10400002
    ctx->pc = 0x2BD63Cu;
    {
        const bool branch_taken_0x2bd63c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x2bd63c) {
            ctx->pc = 0x2BD648u;
            goto label_2bd648;
        }
    }
    ctx->pc = 0x2BD644u;
    // 0x2bd644: 0xae82003c
    ctx->pc = 0x2bd644u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_2bd648:
    // 0x2bd648: 0x3c020037
    ctx->pc = 0x2bd648u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd64c: 0xac40ba2c
    ctx->pc = 0x2bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949420), GPR_U32(ctx, 0));
label_2bd650:
    // 0x2bd650: 0xdfbf00a0
    ctx->pc = 0x2bd650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd654: 0xdfbe0090
    ctx->pc = 0x2bd654u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd658: 0xdfb70080
    ctx->pc = 0x2bd658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd65c: 0xdfb60070
    ctx->pc = 0x2bd65cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd660: 0xdfb50060
    ctx->pc = 0x2bd660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd664: 0xdfb40050
    ctx->pc = 0x2bd664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd668: 0xdfb30040
    ctx->pc = 0x2bd668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd66c: 0xdfb20030
    ctx->pc = 0x2bd66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd670: 0xdfb10020
    ctx->pc = 0x2bd670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd674: 0xdfb00010
    ctx->pc = 0x2bd674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd678: 0x3e00008
    ctx->pc = 0x2BD678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD67Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD124u: goto label_2bd124;
            case 0x2BD144u: goto label_2bd144;
            case 0x2BD164u: goto label_2bd164;
            case 0x2BD1A8u: goto label_2bd1a8;
            case 0x2BD1C0u: goto label_2bd1c0;
            case 0x2BD1D8u: goto label_2bd1d8;
            case 0x2BD1F4u: goto label_2bd1f4;
            case 0x2BD20Cu: goto label_2bd20c;
            case 0x2BD250u: goto label_2bd250;
            case 0x2BD278u: goto label_2bd278;
            case 0x2BD2ECu: goto label_2bd2ec;
            case 0x2BD308u: goto label_2bd308;
            case 0x2BD314u: goto label_2bd314;
            case 0x2BD348u: goto label_2bd348;
            case 0x2BD380u: goto label_2bd380;
            case 0x2BD3B0u: goto label_2bd3b0;
            case 0x2BD414u: goto label_2bd414;
            case 0x2BD434u: goto label_2bd434;
            case 0x2BD464u: goto label_2bd464;
            case 0x2BD48Cu: goto label_2bd48c;
            case 0x2BD4D4u: goto label_2bd4d4;
            case 0x2BD528u: goto label_2bd528;
            case 0x2BD544u: goto label_2bd544;
            case 0x2BD580u: goto label_2bd580;
            case 0x2BD590u: goto label_2bd590;
            case 0x2BD5CCu: goto label_2bd5cc;
            case 0x2BD5F4u: goto label_2bd5f4;
            case 0x2BD608u: goto label_2bd608;
            case 0x2BD638u: goto label_2bd638;
            case 0x2BD648u: goto label_2bd648;
            case 0x2BD650u: goto label_2bd650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BD680u;
}
