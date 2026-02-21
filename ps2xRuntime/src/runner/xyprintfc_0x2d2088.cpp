#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: xyprintfc
// Address: 0x2d2088 - 0x2d21a0
void xyprintfc_0x2d2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2088u;

    // 0x2d2088: 0x27bdff10
    ctx->pc = 0x2d2088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d208c: 0xffbf0080
    ctx->pc = 0x2d208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d2090: 0xffb20070
    ctx->pc = 0x2d2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2d2094: 0xffb10060
    ctx->pc = 0x2d2094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2d2098: 0xffb00050
    ctx->pc = 0x2d2098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d209c: 0x80802d
    ctx->pc = 0x2d209cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20a0: 0xa0902d
    ctx->pc = 0x2d20a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20a4: 0xc0882d
    ctx->pc = 0x2d20a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20a8: 0xffa800d0
    ctx->pc = 0x2d20a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2d20ac: 0xffa900d8
    ctx->pc = 0x2d20acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2d20b0: 0xffaa00e0
    ctx->pc = 0x2d20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2d20b4: 0xffab00e8
    ctx->pc = 0x2d20b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2d20b8: 0x3c02003a
    ctx->pc = 0x2d20b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d20bc: 0x8c421bdc
    ctx->pc = 0x2d20bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7132)));
    // 0x2d20c0: 0x10400031
    ctx->pc = 0x2D20C0u;
    {
        const bool branch_taken_0x2d20c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D20C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d20c0) {
            ctx->pc = 0x2D2188u;
            goto label_2d2188;
        }
    }
    ctx->pc = 0x2D20C8u;
    // 0x2d20c8: 0x3c02003a
    ctx->pc = 0x2d20c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d20cc: 0x8c421bd8
    ctx->pc = 0x2d20ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7128)));
    // 0x2d20d0: 0x10400027
    ctx->pc = 0x2D20D0u;
    {
        const bool branch_taken_0x2d20d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D20D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2d20d0) {
            ctx->pc = 0x2D2170u;
            goto label_2d2170;
        }
    }
    ctx->pc = 0x2D20D8u;
    // 0x2d20d8: 0x16220002
    ctx->pc = 0x2D20D8u;
    {
        const bool branch_taken_0x2d20d8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D20DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d20d8) {
            ctx->pc = 0x2D20E4u;
            goto label_2d20e4;
        }
    }
    ctx->pc = 0x2D20E0u;
    // 0x2d20e0: 0x8c712250
    ctx->pc = 0x2d20e0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 8784)));
label_2d20e4:
    // 0x2d20e4: 0x26220001
    ctx->pc = 0x2d20e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d20e8: 0xac622250
    ctx->pc = 0x2d20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8784), GPR_U32(ctx, 2));
    // 0x2d20ec: 0x3a0202d
    ctx->pc = 0x2d20ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20f0: 0xc0b5d5e
    ctx->pc = 0x2D20F0u;
    SET_GPR_U32(ctx, 31, 0x2D20F8u);
    ctx->pc = 0x2D20F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20F8u; }
    }
    if (ctx->pc != 0x2D20F8u) { return; }
    ctx->pc = 0x2D20F8u;
    // 0x2d20f8: 0xc0b144c
    ctx->pc = 0x2D20F8u;
    SET_GPR_U32(ctx, 31, 0x2D2100u);
    ctx->pc = 0x2D20FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2100u; }
    }
    if (ctx->pc != 0x2D2100u) { return; }
    ctx->pc = 0x2D2100u;
    // 0x2d2100: 0x40802d
    ctx->pc = 0x2d2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2104: 0x1220c0
    ctx->pc = 0x2d2104u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2d2108: 0x1128c0
    ctx->pc = 0x2d2108u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d210c: 0xc0b13be
    ctx->pc = 0x2D210Cu;
    SET_GPR_U32(ctx, 31, 0x2D2114u);
    ctx->pc = 0x2D2110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawSysText_0x2c4ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2114u; }
    }
    if (ctx->pc != 0x2D2114u) { return; }
    ctx->pc = 0x2D2114u;
    // 0x2d2114: 0x40882d
    ctx->pc = 0x2d2114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2118: 0xc0b144c
    ctx->pc = 0x2D2118u;
    SET_GPR_U32(ctx, 31, 0x2D2120u);
    ctx->pc = 0x2D211Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5130u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontColor_0x2c5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2120u; }
    }
    if (ctx->pc != 0x2D2120u) { return; }
    ctx->pc = 0x2D2120u;
    // 0x2d2120: 0x1220000f
    ctx->pc = 0x2D2120u;
    {
        const bool branch_taken_0x2d2120 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2120) {
            ctx->pc = 0x2D2160u;
            goto label_2d2160;
        }
    }
    ctx->pc = 0x2D2128u;
    // 0x2d2128: 0x8c421be4
    ctx->pc = 0x2d2128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7140)));
    // 0x2d212c: 0x10400004
    ctx->pc = 0x2D212Cu;
    {
        const bool branch_taken_0x2d212c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2130u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
        if (branch_taken_0x2d212c) {
            ctx->pc = 0x2D2140u;
            goto label_2d2140;
        }
    }
    ctx->pc = 0x2D2134u;
    // 0x2d2134: 0x8e220000
    ctx->pc = 0x2d2134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2138: 0x431025
    ctx->pc = 0x2d2138u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d213c: 0xae220000
    ctx->pc = 0x2d213cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2140:
    // 0x2d2140: 0x12200007
    ctx->pc = 0x2D2140u;
    {
        const bool branch_taken_0x2d2140 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2144u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d2140) {
            ctx->pc = 0x2D2160u;
            goto label_2d2160;
        }
    }
    ctx->pc = 0x2D2148u;
    // 0x2d2148: 0x8c421be8
    ctx->pc = 0x2d2148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2d214c: 0x10400005
    ctx->pc = 0x2D214Cu;
    {
        const bool branch_taken_0x2d214c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2150u;
        SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
        if (branch_taken_0x2d214c) {
            ctx->pc = 0x2D2164u;
            goto label_2d2164;
        }
    }
    ctx->pc = 0x2D2154u;
    // 0x2d2154: 0x8e220000
    ctx->pc = 0x2d2154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2158: 0x34420008
    ctx->pc = 0x2d2158u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d215c: 0xae220000
    ctx->pc = 0x2d215cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d2160:
    // 0x2d2160: 0x3c03003d
    ctx->pc = 0x2d2160u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
label_2d2164:
    // 0x2d2164: 0x24020001
    ctx->pc = 0x2d2164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2168: 0x10000007
    ctx->pc = 0x2D2168u;
    {
        const bool branch_taken_0x2d2168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D216Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8788), GPR_U32(ctx, 2));
        if (branch_taken_0x2d2168) {
            ctx->pc = 0x2D2188u;
            goto label_2d2188;
        }
    }
    ctx->pc = 0x2D2170u;
label_2d2170:
    // 0x2d2170: 0x3c02003d
    ctx->pc = 0x2d2170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2174: 0x8c422254
    ctx->pc = 0x2d2174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8788)));
    // 0x2d2178: 0x10400004
    ctx->pc = 0x2D2178u;
    {
        const bool branch_taken_0x2d2178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D217Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2d2178) {
            ctx->pc = 0x2D218Cu;
            goto label_2d218c;
        }
    }
    ctx->pc = 0x2D2180u;
    // 0x2d2180: 0xc0b46de
    ctx->pc = 0x2D2180u;
    SET_GPR_U32(ctx, 31, 0x2D2188u);
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2188u; }
    }
    if (ctx->pc != 0x2D2188u) { return; }
    ctx->pc = 0x2D2188u;
label_2d2188:
    // 0x2d2188: 0xdfbf0080
    ctx->pc = 0x2d2188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d218c:
    // 0x2d218c: 0xdfb20070
    ctx->pc = 0x2d218cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2190: 0xdfb10060
    ctx->pc = 0x2d2190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2194: 0xdfb00050
    ctx->pc = 0x2d2194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2198: 0x3e00008
    ctx->pc = 0x2D2198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D219Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D20E4u: goto label_2d20e4;
            case 0x2D2140u: goto label_2d2140;
            case 0x2D2160u: goto label_2d2160;
            case 0x2D2164u: goto label_2d2164;
            case 0x2D2170u: goto label_2d2170;
            case 0x2D2188u: goto label_2d2188;
            case 0x2D218Cu: goto label_2d218c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D21A0u;
}
