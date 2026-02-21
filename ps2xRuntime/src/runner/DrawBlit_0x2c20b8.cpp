#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: DrawBlit
// Address: 0x2c20b8 - 0x2c2634
void DrawBlit_0x2c20b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _drawBlit_count = 0;
    ++_drawBlit_count;

    ctx->pc = 0x2c20b8u;

    printf("[DrawBlit #%d] ENTRY  a0(blit_node)=0x%x  ra=0x%x  sp=0x%x\n",
        _drawBlit_count, GPR_U32(ctx, 4), GPR_U32(ctx, 31), GPR_U32(ctx, 29));

    // 0x2c20b8: 0x27bdff50
    ctx->pc = 0x2c20b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c20bc: 0xffbf00a0
    ctx->pc = 0x2c20bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c20c0: 0xffbe0090
    ctx->pc = 0x2c20c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2c20c4: 0xffb70080
    ctx->pc = 0x2c20c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2c20c8: 0xffb60070
    ctx->pc = 0x2c20c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c20cc: 0xffb50060
    ctx->pc = 0x2c20ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c20d0: 0xffb40050
    ctx->pc = 0x2c20d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c20d4: 0xffb30040
    ctx->pc = 0x2c20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c20d8: 0xffb20030
    ctx->pc = 0x2c20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c20dc: 0xffb10020
    ctx->pc = 0x2c20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c20e0: 0xffb00010
    ctx->pc = 0x2c20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c20e4: 0x80882d
    ctx->pc = 0x2c20e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20e8: 0x3c020036
    ctx->pc = 0x2c20e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c20ec: 0x8c53dee0
    ctx->pc = 0x2c20ecu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c20f0: 0x8e240004
    ctx->pc = 0x2c20f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c20f4: 0x41403
    ctx->pc = 0x2c20f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c20f8: 0x8e630038
    ctx->pc = 0x2c20f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c20fc: 0x21100
    ctx->pc = 0x2c20fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c2100: 0x621821
    ctx->pc = 0x2c2100u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2104: 0x8c620010
    ctx->pc = 0x2c2104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c2108: 0x1440013f
    ctx->pc = 0x2C2108u;
    {
        const bool branch_taken_0x2c2108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C210Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2c2108) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2110u;
    // 0x2c2110: 0x40034800
    ctx->pc = 0x2c2110u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2c2114: 0x3c02003a
    ctx->pc = 0x2c2114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c2118: 0xac432168
    ctx->pc = 0x2c2118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8552), GPR_U32(ctx, 3));
    // 0x2c211c: 0x8e350000
    ctx->pc = 0x2c211cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2120: 0x8e620048
    ctx->pc = 0x2c2120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2c2124: 0xc0b0608
    ctx->pc = 0x2C2124u;
    SET_GPR_U32(ctx, 31, 0x2C212Cu);
    ctx->pc = 0x2C2128u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 868)));
    ctx->pc = 0x2C1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetTexture_0x2c1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C212Cu; }
    }
    if (ctx->pc != 0x2C212Cu) { return; }
    ctx->pc = 0x2C212Cu;
    // 0x2c212c: 0x2a0202d
    ctx->pc = 0x2c212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2130: 0x282d
    ctx->pc = 0x2c2130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2134: 0xc0b0664
    ctx->pc = 0x2C2134u;
    SET_GPR_U32(ctx, 31, 0x2C213Cu);
    ctx->pc = 0x2C2138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1990u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetDrawRegs_0x2c1990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C213Cu; }
    }
    if (ctx->pc != 0x2C213Cu) { return; }
    ctx->pc = 0x2C213Cu;
    // 0x2c213c: 0x86340008
    ctx->pc = 0x2c213cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c2140: 0x8e630040
    ctx->pc = 0x2c2140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2c2144: 0x8c620008
    ctx->pc = 0x2c2144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c2148: 0x282a021
    ctx->pc = 0x2c2148u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c214c: 0x96220010
    ctx->pc = 0x2c214cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c2150: 0x282f021
    ctx->pc = 0x2c2150u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c2154: 0x8632000a
    ctx->pc = 0x2c2154u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2c2158: 0x8c62000c
    ctx->pc = 0x2c2158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c215c: 0x2429021
    ctx->pc = 0x2c215cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c2160: 0x96220012
    ctx->pc = 0x2c2160u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2c2164: 0x2421021
    ctx->pc = 0x2c2164u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c2168: 0xafa20000
    ctx->pc = 0x2c2168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c216c: 0x8e620010
    ctx->pc = 0x2c216cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c2170: 0x8c430034
    ctx->pc = 0x2c2170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2c2174: 0x8e22000c
    ctx->pc = 0x2c2174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c2178: 0x62b823
    ctx->pc = 0x2c2178u;
    SET_GPR_U32(ctx, 23, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c217c: 0x3c020037
    ctx->pc = 0x2c217cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2180: 0x8c502970
    ctx->pc = 0x2c2180u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 10608)));
    // 0x2c2184: 0x32a20010
    ctx->pc = 0x2c2184u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 16));
    // 0x2c2188: 0x104000c5
    ctx->pc = 0x2C2188u;
    {
        const bool branch_taken_0x2c2188 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C218Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2188) {
            ctx->pc = 0x2C24A0u;
            goto label_2c24a0;
        }
    }
    ctx->pc = 0x2C2190u;
    // 0x2c2190: 0x3c031000
    ctx->pc = 0x2c2190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c2194: 0x3c021000
    ctx->pc = 0x2c2194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c2198: 0x3442000d
    ctx->pc = 0x2c2198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
    // 0x2c219c: 0xae020000
    ctx->pc = 0x2c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c21a0: 0x26100004
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21a4: 0xae000000
    ctx->pc = 0x2c21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c21a8: 0x26100004
    ctx->pc = 0x2c21a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21ac: 0xae030000
    ctx->pc = 0x2c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c21b0: 0x26100004
    ctx->pc = 0x2c21b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21b4: 0x3c025000
    ctx->pc = 0x2c21b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2c21b8: 0x3442000d
    ctx->pc = 0x2c21b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
    // 0x2c21bc: 0xae020000
    ctx->pc = 0x2c21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c21c0: 0x26100004
    ctx->pc = 0x2c21c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21c4: 0x34028004
    ctx->pc = 0x2c21c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32772));
    // 0x2c21c8: 0xae020000
    ctx->pc = 0x2c21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c21cc: 0x26100004
    ctx->pc = 0x2c21ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21d0: 0x3c0230ae
    ctx->pc = 0x2c21d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12462 << 16));
    // 0x2c21d4: 0x34424000
    ctx->pc = 0x2c21d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x2c21d8: 0xae020000
    ctx->pc = 0x2c21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c21dc: 0x26100004
    ctx->pc = 0x2c21dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21e0: 0x24020513
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1299));
    // 0x2c21e4: 0xae020000
    ctx->pc = 0x2c21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c21e8: 0x26100004
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c21ec: 0xae000000
    ctx->pc = 0x2c21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c21f0: 0x32a24000
    ctx->pc = 0x2c21f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 16384));
    // 0x2c21f4: 0x1040000b
    ctx->pc = 0x2C21F4u;
    {
        const bool branch_taken_0x2c21f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C21F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2c21f4) {
            ctx->pc = 0x2C2224u;
            goto label_2c2224;
        }
    }
    ctx->pc = 0x2C21FCu;
    // 0x2c21fc: 0x8e630040
    ctx->pc = 0x2c21fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2c2200: 0x8c640008
    ctx->pc = 0x2c2200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c2204: 0x8c62000c
    ctx->pc = 0x2c2204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c2208: 0x2421023
    ctx->pc = 0x2c2208u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c220c: 0x8c630014
    ctx->pc = 0x2c220cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c2210: 0x62b023
    ctx->pc = 0x2c2210u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2214: 0x2842023
    ctx->pc = 0x2c2214u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2c2218: 0xc0b0786
    ctx->pc = 0x2C2218u;
    SET_GPR_U32(ctx, 31, 0x2C2220u);
    ctx->pc = 0x2C221Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        corner_hilite_0x2c1e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2220u; }
    }
    if (ctx->pc != 0x2C2220u) { return; }
    ctx->pc = 0x2C2220u;
    // 0x2c2220: 0x40202d
    ctx->pc = 0x2c2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2224:
    // 0x2c2224: 0x96220014
    ctx->pc = 0x2c2224u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2228: 0xae020000
    ctx->pc = 0x2c2228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c222c: 0x26100004
    ctx->pc = 0x2c222cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2230: 0x96220018
    ctx->pc = 0x2c2230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c2234: 0xae020000
    ctx->pc = 0x2c2234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2238: 0x26100004
    ctx->pc = 0x2c2238u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c223c: 0xae000000
    ctx->pc = 0x2c223cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2240: 0x26100004
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2244: 0xae000000
    ctx->pc = 0x2c2244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2248: 0x26100004
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c224c: 0x9222001e
    ctx->pc = 0x2c224cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x2c2250: 0x441021
    ctx->pc = 0x2c2250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2254: 0xae020000
    ctx->pc = 0x2c2254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2258: 0x26100004
    ctx->pc = 0x2c2258u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c225c: 0x9222001d
    ctx->pc = 0x2c225cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x2c2260: 0x441021
    ctx->pc = 0x2c2260u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2264: 0xae020000
    ctx->pc = 0x2c2264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2268: 0x26100004
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c226c: 0x9222001c
    ctx->pc = 0x2c226cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c2270: 0x441021
    ctx->pc = 0x2c2270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2274: 0xae020000
    ctx->pc = 0x2c2274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2278: 0x26100004
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c227c: 0x9222001f
    ctx->pc = 0x2c227cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x2c2280: 0xae020000
    ctx->pc = 0x2c2280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2284: 0x26100004
    ctx->pc = 0x2c2284u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2288: 0xae140000
    ctx->pc = 0x2c2288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2c228c: 0x26100004
    ctx->pc = 0x2c228cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2290: 0xae120000
    ctx->pc = 0x2c2290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2c2294: 0x26100004
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2298: 0xae170000
    ctx->pc = 0x2c2298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2c229c: 0x26100004
    ctx->pc = 0x2c229cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c22a0: 0xae000000
    ctx->pc = 0x2c22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c22a4: 0x32a24000
    ctx->pc = 0x2c22a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 16384));
    // 0x2c22a8: 0x10400007
    ctx->pc = 0x2C22A8u;
    {
        const bool branch_taken_0x2c22a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C22ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2c22a8) {
            ctx->pc = 0x2C22C8u;
            goto label_2c22c8;
        }
    }
    ctx->pc = 0x2C22B0u;
    // 0x2c22b0: 0x8e620040
    ctx->pc = 0x2c22b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2c22b4: 0x8c440008
    ctx->pc = 0x2c22b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c22b8: 0x3c42023
    ctx->pc = 0x2c22b8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2c22bc: 0xc0b0786
    ctx->pc = 0x2C22BCu;
    SET_GPR_U32(ctx, 31, 0x2C22C4u);
    ctx->pc = 0x2C22C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        corner_hilite_0x2c1e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C22C4u; }
    }
    if (ctx->pc != 0x2C22C4u) { return; }
    ctx->pc = 0x2C22C4u;
    // 0x2c22c4: 0x40202d
    ctx->pc = 0x2c22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c22c8:
    // 0x2c22c8: 0x96220016
    ctx->pc = 0x2c22c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2c22cc: 0xae020000
    ctx->pc = 0x2c22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c22d0: 0x26100004
    ctx->pc = 0x2c22d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c22d4: 0x96220018
    ctx->pc = 0x2c22d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c22d8: 0xae020000
    ctx->pc = 0x2c22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c22dc: 0x26100004
    ctx->pc = 0x2c22dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c22e0: 0xae000000
    ctx->pc = 0x2c22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c22e4: 0x26100004
    ctx->pc = 0x2c22e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c22e8: 0xae000000
    ctx->pc = 0x2c22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c22ec: 0x26100004
    ctx->pc = 0x2c22ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c22f0: 0x92220022
    ctx->pc = 0x2c22f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x2c22f4: 0x441021
    ctx->pc = 0x2c22f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c22f8: 0xae020000
    ctx->pc = 0x2c22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c22fc: 0x26100004
    ctx->pc = 0x2c22fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2300: 0x92220021
    ctx->pc = 0x2c2300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x2c2304: 0x441021
    ctx->pc = 0x2c2304u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2308: 0xae020000
    ctx->pc = 0x2c2308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c230c: 0x26100004
    ctx->pc = 0x2c230cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2310: 0x92220020
    ctx->pc = 0x2c2310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c2314: 0x441021
    ctx->pc = 0x2c2314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2318: 0xae020000
    ctx->pc = 0x2c2318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c231c: 0x26100004
    ctx->pc = 0x2c231cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2320: 0x92220023
    ctx->pc = 0x2c2320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x2c2324: 0xae020000
    ctx->pc = 0x2c2324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2328: 0x26100004
    ctx->pc = 0x2c2328u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c232c: 0xae1e0000
    ctx->pc = 0x2c232cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 30));
    // 0x2c2330: 0x26100004
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2334: 0xae120000
    ctx->pc = 0x2c2334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2c2338: 0x26100004
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c233c: 0xae170000
    ctx->pc = 0x2c233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2c2340: 0x26100004
    ctx->pc = 0x2c2340u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2344: 0xae000000
    ctx->pc = 0x2c2344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2348: 0x32a24000
    ctx->pc = 0x2c2348u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 16384));
    // 0x2c234c: 0x1040000c
    ctx->pc = 0x2C234Cu;
    {
        const bool branch_taken_0x2c234c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2350u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2c234c) {
            ctx->pc = 0x2C2380u;
            goto label_2c2380;
        }
    }
    ctx->pc = 0x2C2354u;
    // 0x2c2354: 0x8e630040
    ctx->pc = 0x2c2354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2c2358: 0x8c640008
    ctx->pc = 0x2c2358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c235c: 0x8c62000c
    ctx->pc = 0x2c235cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c2360: 0x8fa50000
    ctx->pc = 0x2c2360u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2364: 0xa21023
    ctx->pc = 0x2c2364u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c2368: 0x8c630014
    ctx->pc = 0x2c2368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c236c: 0x62b023
    ctx->pc = 0x2c236cu;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c2370: 0x2842023
    ctx->pc = 0x2c2370u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2c2374: 0xc0b0786
    ctx->pc = 0x2C2374u;
    SET_GPR_U32(ctx, 31, 0x2C237Cu);
    ctx->pc = 0x2C2378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        corner_hilite_0x2c1e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C237Cu; }
    }
    if (ctx->pc != 0x2C237Cu) { return; }
    ctx->pc = 0x2C237Cu;
    // 0x2c237c: 0x40202d
    ctx->pc = 0x2c237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2380:
    // 0x2c2380: 0x96220014
    ctx->pc = 0x2c2380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2384: 0xae020000
    ctx->pc = 0x2c2384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2388: 0x26100004
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c238c: 0x9622001a
    ctx->pc = 0x2c238cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2c2390: 0xae020000
    ctx->pc = 0x2c2390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2394: 0x26100004
    ctx->pc = 0x2c2394u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2398: 0xae000000
    ctx->pc = 0x2c2398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c239c: 0x26100004
    ctx->pc = 0x2c239cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23a0: 0xae000000
    ctx->pc = 0x2c23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c23a4: 0x26100004
    ctx->pc = 0x2c23a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23a8: 0x92220026
    ctx->pc = 0x2c23a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2c23ac: 0x441021
    ctx->pc = 0x2c23acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c23b0: 0xae020000
    ctx->pc = 0x2c23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23b4: 0x26100004
    ctx->pc = 0x2c23b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23b8: 0x92220025
    ctx->pc = 0x2c23b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x2c23bc: 0x441021
    ctx->pc = 0x2c23bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c23c0: 0xae020000
    ctx->pc = 0x2c23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23c4: 0x26100004
    ctx->pc = 0x2c23c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23c8: 0x92220024
    ctx->pc = 0x2c23c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c23cc: 0x441021
    ctx->pc = 0x2c23ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c23d0: 0xae020000
    ctx->pc = 0x2c23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23d4: 0x26100004
    ctx->pc = 0x2c23d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23d8: 0x92220027
    ctx->pc = 0x2c23d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x2c23dc: 0xae020000
    ctx->pc = 0x2c23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23e0: 0x26100004
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23e4: 0xae140000
    ctx->pc = 0x2c23e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2c23e8: 0x26100004
    ctx->pc = 0x2c23e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23ec: 0x8fa20000
    ctx->pc = 0x2c23ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c23f0: 0xae020000
    ctx->pc = 0x2c23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23f4: 0x26100004
    ctx->pc = 0x2c23f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c23f8: 0xae170000
    ctx->pc = 0x2c23f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2c23fc: 0x26100004
    ctx->pc = 0x2c23fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2400: 0xae000000
    ctx->pc = 0x2c2400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2404: 0x32a24000
    ctx->pc = 0x2c2404u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 16384));
    // 0x2c2408: 0x10400007
    ctx->pc = 0x2C2408u;
    {
        const bool branch_taken_0x2c2408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C240Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2c2408) {
            ctx->pc = 0x2C2428u;
            goto label_2c2428;
        }
    }
    ctx->pc = 0x2C2410u;
    // 0x2c2410: 0x8e620040
    ctx->pc = 0x2c2410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2c2414: 0x8c440008
    ctx->pc = 0x2c2414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c2418: 0x3c42023
    ctx->pc = 0x2c2418u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2c241c: 0xc0b0786
    ctx->pc = 0x2C241Cu;
    SET_GPR_U32(ctx, 31, 0x2C2424u);
    ctx->pc = 0x2C2420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        corner_hilite_0x2c1e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2424u; }
    }
    if (ctx->pc != 0x2C2424u) { return; }
    ctx->pc = 0x2C2424u;
    // 0x2c2424: 0x40202d
    ctx->pc = 0x2c2424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2428:
    // 0x2c2428: 0x96220016
    ctx->pc = 0x2c2428u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2c242c: 0xae020000
    ctx->pc = 0x2c242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2430: 0x26100004
    ctx->pc = 0x2c2430u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2434: 0x9622001a
    ctx->pc = 0x2c2434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2c2438: 0xae020000
    ctx->pc = 0x2c2438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c243c: 0x26100004
    ctx->pc = 0x2c243cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2440: 0xae000000
    ctx->pc = 0x2c2440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2444: 0x26100004
    ctx->pc = 0x2c2444u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2448: 0xae000000
    ctx->pc = 0x2c2448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c244c: 0x26100004
    ctx->pc = 0x2c244cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2450: 0x9222002a
    ctx->pc = 0x2c2450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2c2454: 0x441021
    ctx->pc = 0x2c2454u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2458: 0xae020000
    ctx->pc = 0x2c2458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c245c: 0x26100004
    ctx->pc = 0x2c245cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2460: 0x92220029
    ctx->pc = 0x2c2460u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x2c2464: 0x441021
    ctx->pc = 0x2c2464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2468: 0xae020000
    ctx->pc = 0x2c2468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c246c: 0x26100004
    ctx->pc = 0x2c246cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2470: 0x92220028
    ctx->pc = 0x2c2470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2c2474: 0x441021
    ctx->pc = 0x2c2474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2478: 0xae020000
    ctx->pc = 0x2c2478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c247c: 0x26100004
    ctx->pc = 0x2c247cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2480: 0x9222002b
    ctx->pc = 0x2c2480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x2c2484: 0xae020000
    ctx->pc = 0x2c2484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2488: 0x26100004
    ctx->pc = 0x2c2488u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c248c: 0xae1e0000
    ctx->pc = 0x2c248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 30));
    // 0x2c2490: 0x26100004
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2494: 0x8fa50000
    ctx->pc = 0x2c2494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2498: 0x10000048
    ctx->pc = 0x2C2498u;
    {
        const bool branch_taken_0x2c2498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C249Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x2c2498) {
            ctx->pc = 0x2C25BCu;
            goto label_2c25bc;
        }
    }
    ctx->pc = 0x2C24A0u;
label_2c24a0:
    // 0x2c24a0: 0x9225001e
    ctx->pc = 0x2c24a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x2c24a4: 0x8e24001c
    ctx->pc = 0x2c24a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c24a8: 0x9226001d
    ctx->pc = 0x2c24a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x2c24ac: 0x308700ff
    ctx->pc = 0x2c24acu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 255));
    // 0x2c24b0: 0x42602
    ctx->pc = 0x2c24b0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 24));
    // 0x2c24b4: 0x3c031000
    ctx->pc = 0x2c24b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2c24b8: 0x3c021000
    ctx->pc = 0x2c24b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c24bc: 0x34420006
    ctx->pc = 0x2c24bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x2c24c0: 0xae020000
    ctx->pc = 0x2c24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c24c4: 0x26100004
    ctx->pc = 0x2c24c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c24c8: 0xae000000
    ctx->pc = 0x2c24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c24cc: 0x26100004
    ctx->pc = 0x2c24ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c24d0: 0xae030000
    ctx->pc = 0x2c24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c24d4: 0x26100004
    ctx->pc = 0x2c24d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c24d8: 0x3c025000
    ctx->pc = 0x2c24d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2c24dc: 0x34420006
    ctx->pc = 0x2c24dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x2c24e0: 0xae020000
    ctx->pc = 0x2c24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c24e4: 0x26100004
    ctx->pc = 0x2c24e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c24e8: 0x34028001
    ctx->pc = 0x2c24e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x2c24ec: 0xae020000
    ctx->pc = 0x2c24ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c24f0: 0x26100004
    ctx->pc = 0x2c24f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c24f4: 0x3c0250ab
    ctx->pc = 0x2c24f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20651 << 16));
    // 0x2c24f8: 0x34424000
    ctx->pc = 0x2c24f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x2c24fc: 0xae020000
    ctx->pc = 0x2c24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2500: 0x26100004
    ctx->pc = 0x2c2500u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2504: 0x3c020005
    ctx->pc = 0x2c2504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2c2508: 0x34423513
    ctx->pc = 0x2c2508u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13587));
    // 0x2c250c: 0xae020000
    ctx->pc = 0x2c250cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2510: 0x26100004
    ctx->pc = 0x2c2510u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2514: 0xae000000
    ctx->pc = 0x2c2514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2518: 0x26100004
    ctx->pc = 0x2c2518u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c251c: 0x96220014
    ctx->pc = 0x2c251cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2520: 0xae020000
    ctx->pc = 0x2c2520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2524: 0x26100004
    ctx->pc = 0x2c2524u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2528: 0x96220018
    ctx->pc = 0x2c2528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c252c: 0xae020000
    ctx->pc = 0x2c252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2530: 0x26100004
    ctx->pc = 0x2c2530u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2534: 0xae000000
    ctx->pc = 0x2c2534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2538: 0x26100004
    ctx->pc = 0x2c2538u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c253c: 0xae000000
    ctx->pc = 0x2c253cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2540: 0x26100004
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2544: 0xae050000
    ctx->pc = 0x2c2544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c2548: 0x26100004
    ctx->pc = 0x2c2548u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c254c: 0xae060000
    ctx->pc = 0x2c254cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2c2550: 0x26100004
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2554: 0xae070000
    ctx->pc = 0x2c2554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2c2558: 0x26100004
    ctx->pc = 0x2c2558u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c255c: 0xae040000
    ctx->pc = 0x2c255cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2c2560: 0x26100004
    ctx->pc = 0x2c2560u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2564: 0xae140000
    ctx->pc = 0x2c2564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2c2568: 0x26100004
    ctx->pc = 0x2c2568u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c256c: 0xae120000
    ctx->pc = 0x2c256cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2c2570: 0x26100004
    ctx->pc = 0x2c2570u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2574: 0xae170000
    ctx->pc = 0x2c2574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2c2578: 0x26100004
    ctx->pc = 0x2c2578u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c257c: 0xae000000
    ctx->pc = 0x2c257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c2580: 0x26100004
    ctx->pc = 0x2c2580u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2584: 0x96220016
    ctx->pc = 0x2c2584u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2c2588: 0xae020000
    ctx->pc = 0x2c2588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c258c: 0x26100004
    ctx->pc = 0x2c258cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c2590: 0x9622001a
    ctx->pc = 0x2c2590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x2c2594: 0xae020000
    ctx->pc = 0x2c2594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2598: 0x26100004
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c259c: 0xae000000
    ctx->pc = 0x2c259cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c25a0: 0x26100004
    ctx->pc = 0x2c25a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25a4: 0xae000000
    ctx->pc = 0x2c25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c25a8: 0x26100004
    ctx->pc = 0x2c25a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25ac: 0xae1e0000
    ctx->pc = 0x2c25acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 30));
    // 0x2c25b0: 0x26100004
    ctx->pc = 0x2c25b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25b4: 0x8fa20000
    ctx->pc = 0x2c25b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c25b8: 0xae020000
    ctx->pc = 0x2c25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c25bc:
    // 0x2c25bc: 0x26100004
    ctx->pc = 0x2c25bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25c0: 0xae170000
    ctx->pc = 0x2c25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x2c25c4: 0x26100004
    ctx->pc = 0x2c25c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25c8: 0xae000000
    ctx->pc = 0x2c25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c25cc: 0x26100004
    ctx->pc = 0x2c25ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c25d0: 0x3c020037
    ctx->pc = 0x2c25d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c25d4: 0xac502970
    ctx->pc = 0x2c25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10608), GPR_U32(ctx, 16));
    // 0x2c25d8: 0x40044800
    ctx->pc = 0x2c25d8u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x2c25dc: 0x3c03003a
    ctx->pc = 0x2c25dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c25e0: 0x24632050
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
    // 0x2c25e4: 0x8c620118
    ctx->pc = 0x2c25e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x2c25e8: 0x822023
    ctx->pc = 0x2c25e8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c25ec: 0x8c620110
    ctx->pc = 0x2c25ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x2c25f0: 0x822021
    ctx->pc = 0x2c25f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c25f4: 0xac640110
    ctx->pc = 0x2c25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 4));
    // 0x2c25f8: 0x8c620114
    ctx->pc = 0x2c25f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2c25fc: 0x24420001
    ctx->pc = 0x2c25fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c2600: 0xac620114
    ctx->pc = 0x2c2600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x2c2604: 0xdfbf00a0
    ctx->pc = 0x2c2604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c2608:
    // 0x2c2608: 0xdfbe0090
    ctx->pc = 0x2c2608u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c260c: 0xdfb70080
    ctx->pc = 0x2c260cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2610: 0xdfb60070
    ctx->pc = 0x2c2610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2614: 0xdfb50060
    ctx->pc = 0x2c2614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2618: 0xdfb40050
    ctx->pc = 0x2c2618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c261c: 0xdfb30040
    ctx->pc = 0x2c261cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2620: 0xdfb20030
    ctx->pc = 0x2c2620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2624: 0xdfb10020
    ctx->pc = 0x2c2624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2628: 0xdfb00010
    ctx->pc = 0x2c2628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c262c: 0x3e00008
    ctx->pc = 0x2C262Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2224u: goto label_2c2224;
            case 0x2C22C8u: goto label_2c22c8;
            case 0x2C2380u: goto label_2c2380;
            case 0x2C2428u: goto label_2c2428;
            case 0x2C24A0u: goto label_2c24a0;
            case 0x2C25BCu: goto label_2c25bc;
            case 0x2C2608u: goto label_2c2608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2634u;
}
