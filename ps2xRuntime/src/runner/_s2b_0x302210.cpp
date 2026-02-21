#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _s2b
// Address: 0x302210 - 0x302358
void _s2b_0x302210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302210u;

    // 0x302210: 0x27bdff80
    ctx->pc = 0x302210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x302214: 0x24020009
    ctx->pc = 0x302214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x302218: 0xffb50050
    ctx->pc = 0x302218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x30221c: 0xe0a82d
    ctx->pc = 0x30221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302220: 0xffb60060
    ctx->pc = 0x302220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x302224: 0x26a30008
    ctx->pc = 0x302224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 8));
    // 0x302228: 0xffb40040
    ctx->pc = 0x302228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x30222c: 0x62001a
    ctx->pc = 0x30222cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x302230: 0xffb30030
    ctx->pc = 0x302230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302234: 0xffb00000
    ctx->pc = 0x302234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302238: 0x24070001
    ctx->pc = 0x302238u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x30223c: 0xffbf0070
    ctx->pc = 0x30223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x302240: 0xa0802d
    ctx->pc = 0x302240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302244: 0xffb20020
    ctx->pc = 0x302244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x302248: 0x80a02d
    ctx->pc = 0x302248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30224c: 0xffb10010
    ctx->pc = 0x30224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302250: 0xc0982d
    ctx->pc = 0x302250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302254: 0x50400001
    ctx->pc = 0x302254u;
    {
        const bool branch_taken_0x302254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x302254) {
            ctx->pc = 0x302258u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x30225Cu;
            goto label_30225c;
        }
    }
    ctx->pc = 0x30225Cu;
label_30225c:
    // 0x30225c: 0x100b02d
    ctx->pc = 0x30225cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302260: 0x1812
    ctx->pc = 0x302260u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x302264: 0xe3102a
    ctx->pc = 0x302264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x302268: 0x1040000c
    ctx->pc = 0x302268u;
    {
        const bool branch_taken_0x302268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x30226Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302268) {
            ctx->pc = 0x30229Cu;
            goto label_30229c;
        }
    }
    ctx->pc = 0x302270u;
    // 0x302270: 0x2a72000a
    ctx->pc = 0x302270u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x302274: 0x0
    ctx->pc = 0x302274u;
    // NOP
label_302278:
    // 0x302278: 0x73840
    ctx->pc = 0x302278u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x30227c: 0x24a50001
    ctx->pc = 0x30227cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x302280: 0xe3102a
    ctx->pc = 0x302280u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x302284: 0x0
    ctx->pc = 0x302284u;
    // NOP
    // 0x302288: 0x0
    ctx->pc = 0x302288u;
    // NOP
    // 0x30228c: 0x1440fffa
    ctx->pc = 0x30228Cu;
    {
        const bool branch_taken_0x30228c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30228c) {
            ctx->pc = 0x302278u;
            goto label_302278;
        }
    }
    ctx->pc = 0x302294u;
    // 0x302294: 0x10000003
    ctx->pc = 0x302294u;
    {
        const bool branch_taken_0x302294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302298u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302294) {
            ctx->pc = 0x3022A4u;
            goto label_3022a4;
        }
    }
    ctx->pc = 0x30229Cu;
label_30229c:
    // 0x30229c: 0x2a72000a
    ctx->pc = 0x30229cu;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x3022a0: 0x280202d
    ctx->pc = 0x3022a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3022a4:
    // 0x3022a4: 0xc0c0808
    ctx->pc = 0x3022A4u;
    SET_GPR_U32(ctx, 31, 0x3022ACu);
    ctx->pc = 0x3022A8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022ACu; }
    }
    if (ctx->pc != 0x3022ACu) { return; }
    ctx->pc = 0x3022ACu;
    // 0x3022ac: 0x40282d
    ctx->pc = 0x3022acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022b0: 0x24020001
    ctx->pc = 0x3022b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3022b4: 0xacb60014
    ctx->pc = 0x3022b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x3022b8: 0x1640000f
    ctx->pc = 0x3022B8u;
    {
        const bool branch_taken_0x3022b8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x3022BCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x3022b8) {
            ctx->pc = 0x3022F8u;
            goto label_3022f8;
        }
    }
    ctx->pc = 0x3022C0u;
    // 0x3022c0: 0x26100009
    ctx->pc = 0x3022c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 9));
    // 0x3022c4: 0x82070000
    ctx->pc = 0x3022c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3022c8:
    // 0x3022c8: 0x280202d
    ctx->pc = 0x3022c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022cc: 0x2406000a
    ctx->pc = 0x3022ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x3022d0: 0x26310001
    ctx->pc = 0x3022d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x3022d4: 0x24e7ffd0
    ctx->pc = 0x3022d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3022d8: 0xc0c083e
    ctx->pc = 0x3022D8u;
    SET_GPR_U32(ctx, 31, 0x3022E0u);
    ctx->pc = 0x3022DCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022E0u; }
    }
    if (ctx->pc != 0x3022E0u) { return; }
    ctx->pc = 0x3022E0u;
    // 0x3022e0: 0x40282d
    ctx->pc = 0x3022e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022e4: 0x233102a
    ctx->pc = 0x3022e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x3022e8: 0x5440fff7
    ctx->pc = 0x3022E8u;
    {
        const bool branch_taken_0x3022e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3022e8) {
            ctx->pc = 0x3022ECu;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x3022C8u;
            goto label_3022c8;
        }
    }
    ctx->pc = 0x3022F0u;
    // 0x3022f0: 0x10000002
    ctx->pc = 0x3022F0u;
    {
        const bool branch_taken_0x3022f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3022F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x3022f0) {
            ctx->pc = 0x3022FCu;
            goto label_3022fc;
        }
    }
    ctx->pc = 0x3022F8u;
label_3022f8:
    // 0x3022f8: 0x2610000a
    ctx->pc = 0x3022f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10));
label_3022fc:
    // 0x3022fc: 0x235102a
    ctx->pc = 0x3022fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 21)));
    // 0x302300: 0x1040000a
    ctx->pc = 0x302300u;
    {
        const bool branch_taken_0x302300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302304u;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x302300) {
            ctx->pc = 0x30232Cu;
            goto label_30232c;
        }
    }
    ctx->pc = 0x302308u;
label_302308:
    // 0x302308: 0x82070000
    ctx->pc = 0x302308u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30230c: 0x280202d
    ctx->pc = 0x30230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302310: 0x2406000a
    ctx->pc = 0x302310u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x302314: 0x26100001
    ctx->pc = 0x302314u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x302318: 0x24e7ffd0
    ctx->pc = 0x302318u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x30231c: 0xc0c083e
    ctx->pc = 0x30231Cu;
    SET_GPR_U32(ctx, 31, 0x302324u);
    ctx->pc = 0x302320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302324u; }
    }
    if (ctx->pc != 0x302324u) { return; }
    ctx->pc = 0x302324u;
    // 0x302324: 0x1620fff8
    ctx->pc = 0x302324u;
    {
        const bool branch_taken_0x302324 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x302328u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302324) {
            ctx->pc = 0x302308u;
            goto label_302308;
        }
    }
    ctx->pc = 0x30232Cu;
label_30232c:
    // 0x30232c: 0xdfbf0070
    ctx->pc = 0x30232cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302330: 0xa0102d
    ctx->pc = 0x302330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302334: 0xdfb60060
    ctx->pc = 0x302334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302338: 0xdfb50050
    ctx->pc = 0x302338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30233c: 0xdfb40040
    ctx->pc = 0x30233cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302340: 0xdfb30030
    ctx->pc = 0x302340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302344: 0xdfb20020
    ctx->pc = 0x302344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302348: 0xdfb10010
    ctx->pc = 0x302348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30234c: 0xdfb00000
    ctx->pc = 0x30234cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302350: 0x3e00008
    ctx->pc = 0x302350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302354u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30225Cu: goto label_30225c;
            case 0x302278u: goto label_302278;
            case 0x30229Cu: goto label_30229c;
            case 0x3022A4u: goto label_3022a4;
            case 0x3022C8u: goto label_3022c8;
            case 0x3022F8u: goto label_3022f8;
            case 0x3022FCu: goto label_3022fc;
            case 0x302308u: goto label_302308;
            case 0x30232Cu: goto label_30232c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302358u;
}
