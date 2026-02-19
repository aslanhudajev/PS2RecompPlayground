#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitPlayerMissiles
// Address: 0x28f140 - 0x28f5d8
void InitPlayerMissiles_0x28f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28f140u;

    // 0x28f140: 0x27bdff30
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28f144: 0xffbf00c0
    ctx->pc = 0x28f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x28f148: 0xffbe00b0
    ctx->pc = 0x28f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x28f14c: 0xffb700a0
    ctx->pc = 0x28f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x28f150: 0xffb60090
    ctx->pc = 0x28f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x28f154: 0xffb50080
    ctx->pc = 0x28f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x28f158: 0xffb40070
    ctx->pc = 0x28f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28f15c: 0xffb30060
    ctx->pc = 0x28f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x28f160: 0xffb20050
    ctx->pc = 0x28f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28f164: 0xffb10040
    ctx->pc = 0x28f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x28f168: 0xffb00030
    ctx->pc = 0x28f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28f16c: 0xafa00020
    ctx->pc = 0x28f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x28f170: 0x8c970000
    ctx->pc = 0x28f170u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28f174: 0x8c93000c
    ctx->pc = 0x28f174u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28f178: 0x3c030033
    ctx->pc = 0x28f178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x28f17c: 0x2463c7d8
    ctx->pc = 0x28f17cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x28f180: 0x2402004c
    ctx->pc = 0x28f180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x28f184: 0x2e21018
    ctx->pc = 0x28f184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28f188: 0x622821
    ctx->pc = 0x28f188u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f18c: 0xa0182d
    ctx->pc = 0x28f18cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f190: 0x8c720030
    ctx->pc = 0x28f190u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x28f194: 0x8c832ac0
    ctx->pc = 0x28f194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10944)));
    // 0x28f198: 0x2402000a
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x28f19c: 0x62001a
    ctx->pc = 0x28f19cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28f1a0: 0x1812
    ctx->pc = 0x28f1a0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x28f1a4: 0x50400001
    ctx->pc = 0x28F1A4u;
    {
        const bool branch_taken_0x28f1a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28f1a4) {
            ctx->pc = 0x28F1A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28F1ACu;
            goto label_28f1ac;
        }
    }
    ctx->pc = 0x28F1ACu;
label_28f1ac:
    // 0x28f1ac: 0x60202d
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1b0: 0x24030014
    ctx->pc = 0x28f1b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x28f1b4: 0x2631818
    ctx->pc = 0x28f1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28f1b8: 0x3c020035
    ctx->pc = 0x28f1b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f1bc: 0x2442e1f0
    ctx->pc = 0x28f1bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x28f1c0: 0x628021
    ctx->pc = 0x28f1c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f1c4: 0x2041021
    ctx->pc = 0x28f1c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28f1c8: 0x80430004
    ctx->pc = 0x28f1c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f1cc: 0x24020030
    ctx->pc = 0x28f1ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x28f1d0: 0x14620008
    ctx->pc = 0x28F1D0u;
    {
        const bool branch_taken_0x28f1d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28F1D4u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 5), 72)));
        if (branch_taken_0x28f1d0) {
            ctx->pc = 0x28F1F4u;
            goto label_28f1f4;
        }
    }
    ctx->pc = 0x28F1D8u;
    // 0x28f1d8: 0x3a0202d
    ctx->pc = 0x28f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1dc: 0x3c05003b
    ctx->pc = 0x28f1dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f1e0: 0x24a5ddf0
    ctx->pc = 0x28f1e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958576));
    // 0x28f1e4: 0xc0b6252
    ctx->pc = 0x28F1E4u;
    SET_GPR_U32(ctx, 31, 0x28F1ECu);
    ctx->pc = 0x28F1E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1ECu; }
    }
    if (ctx->pc != 0x28F1ECu) { return; }
    ctx->pc = 0x28F1ECu;
    // 0x28f1ec: 0x10000009
    ctx->pc = 0x28F1ECu;
    {
        const bool branch_taken_0x28f1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F1F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28f1ec) {
            ctx->pc = 0x28F214u;
            goto label_28f214;
        }
    }
    ctx->pc = 0x28F1F4u;
label_28f1f4:
    // 0x28f1f4: 0x2041021
    ctx->pc = 0x28f1f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28f1f8: 0x3a0202d
    ctx->pc = 0x28f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1fc: 0x3c05003b
    ctx->pc = 0x28f1fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f200: 0x24a5de00
    ctx->pc = 0x28f200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958592));
    // 0x28f204: 0x200302d
    ctx->pc = 0x28f204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f208: 0xc0b6252
    ctx->pc = 0x28F208u;
    SET_GPR_U32(ctx, 31, 0x28F210u);
    ctx->pc = 0x28F20Cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F210u; }
    }
    if (ctx->pc != 0x28F210u) { return; }
    ctx->pc = 0x28F210u;
    // 0x28f210: 0x2a0202d
    ctx->pc = 0x28f210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28f214:
    // 0x28f214: 0x3a0282d
    ctx->pc = 0x28f214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f218: 0xc0847fc
    ctx->pc = 0x28F218u;
    SET_GPR_U32(ctx, 31, 0x28F220u);
    ctx->pc = 0x28F21Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F220u; }
    }
    if (ctx->pc != 0x28F220u) { return; }
    ctx->pc = 0x28F220u;
    // 0x28f220: 0x3c040035
    ctx->pc = 0x28f220u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28f224: 0x2484f590
    ctx->pc = 0x28f224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x28f228: 0x1718c0
    ctx->pc = 0x28f228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 3));
    // 0x28f22c: 0x641821
    ctx->pc = 0x28f22cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28f230: 0xac620000
    ctx->pc = 0x28f230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f234: 0x3c020035
    ctx->pc = 0x28f234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f238: 0x2442f590
    ctx->pc = 0x28f238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964624));
    // 0x28f23c: 0x1718c0
    ctx->pc = 0x28f23cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 3));
    // 0x28f240: 0x628821
    ctx->pc = 0x28f240u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f244: 0x8e220000
    ctx->pc = 0x28f244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f248: 0x14400014
    ctx->pc = 0x28F248u;
    {
        const bool branch_taken_0x28f248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28F24Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x28f248) {
            ctx->pc = 0x28F29Cu;
            goto label_28f29c;
        }
    }
    ctx->pc = 0x28F250u;
    // 0x28f250: 0x3a0202d
    ctx->pc = 0x28f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f254: 0x3c05003b
    ctx->pc = 0x28f254u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f258: 0x24a5de10
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958608));
    // 0x28f25c: 0xc0b6252
    ctx->pc = 0x28F25Cu;
    SET_GPR_U32(ctx, 31, 0x28F264u);
    ctx->pc = 0x28F260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F264u; }
    }
    if (ctx->pc != 0x28F264u) { return; }
    ctx->pc = 0x28F264u;
    // 0x28f264: 0x240202d
    ctx->pc = 0x28f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f268: 0x3a0282d
    ctx->pc = 0x28f268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f26c: 0xc0847fc
    ctx->pc = 0x28F26Cu;
    SET_GPR_U32(ctx, 31, 0x28F274u);
    ctx->pc = 0x28F270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F274u; }
    }
    if (ctx->pc != 0x28F274u) { return; }
    ctx->pc = 0x28F274u;
    // 0x28f274: 0x14400008
    ctx->pc = 0x28F274u;
    {
        const bool branch_taken_0x28f274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28F278u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28f274) {
            ctx->pc = 0x28F298u;
            goto label_28f298;
        }
    }
    ctx->pc = 0x28F27Cu;
    // 0x28f27c: 0x3c04003b
    ctx->pc = 0x28f27cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x28f280: 0x2484de20
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958624));
    // 0x28f284: 0xc0b492e
    ctx->pc = 0x28F284u;
    SET_GPR_U32(ctx, 31, 0x28F28Cu);
    ctx->pc = 0x28F288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F28Cu; }
    }
    if (ctx->pc != 0x28F28Cu) { return; }
    ctx->pc = 0x28F28Cu;
    // 0x28f28c: 0x8fa20020
    ctx->pc = 0x28f28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f290: 0x24420001
    ctx->pc = 0x28f290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f294: 0xafa20020
    ctx->pc = 0x28f294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28f298:
    // 0x28f298: 0x3c040035
    ctx->pc = 0x28f298u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_28f29c:
    // 0x28f29c: 0x2484f590
    ctx->pc = 0x28f29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x28f2a0: 0x1710c0
    ctx->pc = 0x28f2a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 3));
    // 0x28f2a4: 0x822021
    ctx->pc = 0x28f2a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28f2a8: 0x3c030035
    ctx->pc = 0x28f2a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f2ac: 0x2463e1f0
    ctx->pc = 0x28f2acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959600));
    // 0x28f2b0: 0x24020014
    ctx->pc = 0x28f2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x28f2b4: 0x2621018
    ctx->pc = 0x28f2b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28f2b8: 0x621821
    ctx->pc = 0x28f2b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f2bc: 0x8c620010
    ctx->pc = 0x28f2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28f2c0: 0xac820004
    ctx->pc = 0x28f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28f2c4: 0x902d
    ctx->pc = 0x28f2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2c8: 0x3c020035
    ctx->pc = 0x28f2c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f2cc: 0x245ee4b0
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294960304));
    // 0x28f2d0: 0x3c020035
    ctx->pc = 0x28f2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f2d4: 0x2456f760
    ctx->pc = 0x28f2d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x28f2d8: 0x24020014
    ctx->pc = 0x28f2d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x28f2dc: 0x2e29818
    ctx->pc = 0x28f2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28f2e0: 0x3c020035
    ctx->pc = 0x28f2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f2e4: 0x2454f7b8
    ctx->pc = 0x28f2e4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965176));
    // 0x28f2e8: 0x1210c0
    ctx->pc = 0x28f2e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 3));
    // 0x28f2ec: 0x0
    ctx->pc = 0x28f2ecu;
    // NOP
label_28f2f0:
    // 0x28f2f0: 0x5e8821
    ctx->pc = 0x28f2f0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x28f2f4: 0x82220000
    ctx->pc = 0x28f2f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f2f8: 0x1040001c
    ctx->pc = 0x28F2F8u;
    {
        const bool branch_taken_0x28f2f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F2FCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x28f2f8) {
            ctx->pc = 0x28F36Cu;
            goto label_28f36c;
        }
    }
    ctx->pc = 0x28F300u;
    // 0x28f300: 0x3a0202d
    ctx->pc = 0x28f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f304: 0x24a5de40
    ctx->pc = 0x28f304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958656));
    // 0x28f308: 0xc0b6252
    ctx->pc = 0x28F308u;
    SET_GPR_U32(ctx, 31, 0x28F310u);
    ctx->pc = 0x28F30Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F310u; }
    }
    if (ctx->pc != 0x28F310u) { return; }
    ctx->pc = 0x28F310u;
    // 0x28f310: 0xa3a0000f
    ctx->pc = 0x28f310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x28f314: 0x2a0202d
    ctx->pc = 0x28f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f318: 0x3a0282d
    ctx->pc = 0x28f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f31c: 0xc0847fc
    ctx->pc = 0x28F31Cu;
    SET_GPR_U32(ctx, 31, 0x28F324u);
    ctx->pc = 0x28F320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F324u; }
    }
    if (ctx->pc != 0x28F324u) { return; }
    ctx->pc = 0x28F324u;
    // 0x28f324: 0x128080
    ctx->pc = 0x28f324u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x28f328: 0x2138021
    ctx->pc = 0x28f328u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x28f32c: 0x2161821
    ctx->pc = 0x28f32cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x28f330: 0xac620000
    ctx->pc = 0x28f330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f334: 0x3c05003b
    ctx->pc = 0x28f334u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f338: 0x3a0202d
    ctx->pc = 0x28f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f33c: 0x24a5de50
    ctx->pc = 0x28f33cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958672));
    // 0x28f340: 0xc0b6252
    ctx->pc = 0x28F340u;
    SET_GPR_U32(ctx, 31, 0x28F348u);
    ctx->pc = 0x28F344u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F348u; }
    }
    if (ctx->pc != 0x28F348u) { return; }
    ctx->pc = 0x28F348u;
    // 0x28f348: 0xa3a0000f
    ctx->pc = 0x28f348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x28f34c: 0x2a0202d
    ctx->pc = 0x28f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f350: 0x3a0282d
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f354: 0x302d
    ctx->pc = 0x28f354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f358: 0xc09e6d2
    ctx->pc = 0x28F358u;
    SET_GPR_U32(ctx, 31, 0x28F360u);
    ctx->pc = 0x28F35Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F360u; }
    }
    if (ctx->pc != 0x28F360u) { return; }
    ctx->pc = 0x28F360u;
    // 0x28f360: 0x2148021
    ctx->pc = 0x28f360u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x28f364: 0x10000008
    ctx->pc = 0x28F364u;
    {
        const bool branch_taken_0x28f364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F368u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28f364) {
            ctx->pc = 0x28F388u;
            goto label_28f388;
        }
    }
    ctx->pc = 0x28F36Cu;
label_28f36c:
    // 0x28f36c: 0x121080
    ctx->pc = 0x28f36cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x28f370: 0x531021
    ctx->pc = 0x28f370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x28f374: 0x561821
    ctx->pc = 0x28f374u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28f378: 0xac600000
    ctx->pc = 0x28f378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28f37c: 0x541021
    ctx->pc = 0x28f37cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28f380: 0x2403ffff
    ctx->pc = 0x28f380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f384: 0xac430000
    ctx->pc = 0x28f384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28f388:
    // 0x28f388: 0x26520001
    ctx->pc = 0x28f388u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x28f38c: 0x2a420005
    ctx->pc = 0x28f38cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 5));
    // 0x28f390: 0x1440ffd7
    ctx->pc = 0x28F390u;
    {
        const bool branch_taken_0x28f390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28F394u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x28f390) {
            ctx->pc = 0x28F2F0u;
            goto label_28f2f0;
        }
    }
    ctx->pc = 0x28F398u;
    // 0x28f398: 0x3c04003b
    ctx->pc = 0x28f398u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x28f39c: 0x2484de60
    ctx->pc = 0x28f39cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958688));
    // 0x28f3a0: 0xc0b1bb4
    ctx->pc = 0x28F3A0u;
    SET_GPR_U32(ctx, 31, 0x28F3A8u);
    ctx->pc = 0x28F3A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3A8u; }
    }
    if (ctx->pc != 0x28F3A8u) { return; }
    ctx->pc = 0x28F3A8u;
    // 0x28f3a8: 0x3c030035
    ctx->pc = 0x28f3a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f3ac: 0xac62f700
    ctx->pc = 0x28f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964992), GPR_U32(ctx, 2));
    // 0x28f3b0: 0x3c100034
    ctx->pc = 0x28f3b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x28f3b4: 0x8e04cda8
    ctx->pc = 0x28f3b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954408)));
    // 0x28f3b8: 0x3c05003b
    ctx->pc = 0x28f3b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f3bc: 0x24a5de70
    ctx->pc = 0x28f3bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958704));
    // 0x28f3c0: 0xc0847fc
    ctx->pc = 0x28F3C0u;
    SET_GPR_U32(ctx, 31, 0x28F3C8u);
    ctx->pc = 0x28F3C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3C8u; }
    }
    if (ctx->pc != 0x28F3C8u) { return; }
    ctx->pc = 0x28F3C8u;
    // 0x28f3c8: 0x3c030035
    ctx->pc = 0x28f3c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f3cc: 0xac62f704
    ctx->pc = 0x28f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964996), GPR_U32(ctx, 2));
    // 0x28f3d0: 0x8e04cda8
    ctx->pc = 0x28f3d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954408)));
    // 0x28f3d4: 0x3c05003b
    ctx->pc = 0x28f3d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f3d8: 0x24a5de80
    ctx->pc = 0x28f3d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x28f3dc: 0xc0847fc
    ctx->pc = 0x28F3DCu;
    SET_GPR_U32(ctx, 31, 0x28F3E4u);
    ctx->pc = 0x28F3E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3E4u; }
    }
    if (ctx->pc != 0x28F3E4u) { return; }
    ctx->pc = 0x28F3E4u;
    // 0x28f3e4: 0x3c030035
    ctx->pc = 0x28f3e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f3e8: 0xac62f7b0
    ctx->pc = 0x28f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965168), GPR_U32(ctx, 2));
    // 0x28f3ec: 0x8e04cda8
    ctx->pc = 0x28f3ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954408)));
    // 0x28f3f0: 0x3c05003b
    ctx->pc = 0x28f3f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f3f4: 0x24a5de90
    ctx->pc = 0x28f3f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958736));
    // 0x28f3f8: 0xc0847fc
    ctx->pc = 0x28F3F8u;
    SET_GPR_U32(ctx, 31, 0x28F400u);
    ctx->pc = 0x28F3FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F400u; }
    }
    if (ctx->pc != 0x28F400u) { return; }
    ctx->pc = 0x28F400u;
    // 0x28f400: 0x3c030035
    ctx->pc = 0x28f400u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f404: 0xac62f7b4
    ctx->pc = 0x28f404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965172), GPR_U32(ctx, 2));
    // 0x28f408: 0x3c100034
    ctx->pc = 0x28f408u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x28f40c: 0x8e04cdac
    ctx->pc = 0x28f40cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f410: 0x1080002a
    ctx->pc = 0x28F410u;
    {
        const bool branch_taken_0x28f410 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F414u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x28f410) {
            ctx->pc = 0x28F4BCu;
            goto label_28f4bc;
        }
    }
    ctx->pc = 0x28F418u;
    // 0x28f418: 0x24a5dea0
    ctx->pc = 0x28f418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958752));
    // 0x28f41c: 0xc0847fc
    ctx->pc = 0x28F41Cu;
    SET_GPR_U32(ctx, 31, 0x28F424u);
    ctx->pc = 0x28F420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F424u; }
    }
    if (ctx->pc != 0x28F424u) { return; }
    ctx->pc = 0x28F424u;
    // 0x28f424: 0x3c030035
    ctx->pc = 0x28f424u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f428: 0xac62f708
    ctx->pc = 0x28f428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965000), GPR_U32(ctx, 2));
    // 0x28f42c: 0x8e04cdac
    ctx->pc = 0x28f42cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f430: 0x3c05003b
    ctx->pc = 0x28f430u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f434: 0x24a5dea8
    ctx->pc = 0x28f434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958760));
    // 0x28f438: 0xc0847fc
    ctx->pc = 0x28F438u;
    SET_GPR_U32(ctx, 31, 0x28F440u);
    ctx->pc = 0x28F43Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F440u; }
    }
    if (ctx->pc != 0x28F440u) { return; }
    ctx->pc = 0x28F440u;
    // 0x28f440: 0x3c030035
    ctx->pc = 0x28f440u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f444: 0xac62f710
    ctx->pc = 0x28f444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965008), GPR_U32(ctx, 2));
    // 0x28f448: 0x8e04cdac
    ctx->pc = 0x28f448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f44c: 0x3c05003b
    ctx->pc = 0x28f44cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f450: 0x24a5deb0
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958768));
    // 0x28f454: 0xc0847fc
    ctx->pc = 0x28F454u;
    SET_GPR_U32(ctx, 31, 0x28F45Cu);
    ctx->pc = 0x28F458u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F45Cu; }
    }
    if (ctx->pc != 0x28F45Cu) { return; }
    ctx->pc = 0x28F45Cu;
    // 0x28f45c: 0x3c030035
    ctx->pc = 0x28f45cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f460: 0xac62f70c
    ctx->pc = 0x28f460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965004), GPR_U32(ctx, 2));
    // 0x28f464: 0x8e04cdac
    ctx->pc = 0x28f464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f468: 0x3c05003b
    ctx->pc = 0x28f468u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f46c: 0x24a5deb8
    ctx->pc = 0x28f46cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958776));
    // 0x28f470: 0xc0847fc
    ctx->pc = 0x28F470u;
    SET_GPR_U32(ctx, 31, 0x28F478u);
    ctx->pc = 0x28F474u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F478u; }
    }
    if (ctx->pc != 0x28F478u) { return; }
    ctx->pc = 0x28F478u;
    // 0x28f478: 0x3c030035
    ctx->pc = 0x28f478u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f47c: 0xac62f718
    ctx->pc = 0x28f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965016), GPR_U32(ctx, 2));
    // 0x28f480: 0x8e04cdac
    ctx->pc = 0x28f480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f484: 0x3c05003b
    ctx->pc = 0x28f484u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f488: 0x24a5dec8
    ctx->pc = 0x28f488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958792));
    // 0x28f48c: 0xc0847fc
    ctx->pc = 0x28F48Cu;
    SET_GPR_U32(ctx, 31, 0x28F494u);
    ctx->pc = 0x28F490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F494u; }
    }
    if (ctx->pc != 0x28F494u) { return; }
    ctx->pc = 0x28F494u;
    // 0x28f494: 0x3c030035
    ctx->pc = 0x28f494u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f498: 0xac62f720
    ctx->pc = 0x28f498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965024), GPR_U32(ctx, 2));
    // 0x28f49c: 0x8e04cdac
    ctx->pc = 0x28f49cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954412)));
    // 0x28f4a0: 0x3c05003b
    ctx->pc = 0x28f4a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f4a4: 0x24a5ded8
    ctx->pc = 0x28f4a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958808));
    // 0x28f4a8: 0xc0847fc
    ctx->pc = 0x28F4A8u;
    SET_GPR_U32(ctx, 31, 0x28F4B0u);
    ctx->pc = 0x28F4ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4B0u; }
    }
    if (ctx->pc != 0x28F4B0u) { return; }
    ctx->pc = 0x28F4B0u;
    // 0x28f4b0: 0x3c030035
    ctx->pc = 0x28f4b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f4b4: 0x1000000d
    ctx->pc = 0x28F4B4u;
    {
        const bool branch_taken_0x28f4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965020), GPR_U32(ctx, 2));
        if (branch_taken_0x28f4b4) {
            ctx->pc = 0x28F4ECu;
            goto label_28f4ec;
        }
    }
    ctx->pc = 0x28F4BCu;
label_28f4bc:
    // 0x28f4bc: 0x3c020035
    ctx->pc = 0x28f4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4c0: 0xac40f708
    ctx->pc = 0x28f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965000), GPR_U32(ctx, 0));
    // 0x28f4c4: 0x3c020035
    ctx->pc = 0x28f4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4c8: 0xac40f710
    ctx->pc = 0x28f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965008), GPR_U32(ctx, 0));
    // 0x28f4cc: 0x3c020035
    ctx->pc = 0x28f4ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4d0: 0xac40f70c
    ctx->pc = 0x28f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965004), GPR_U32(ctx, 0));
    // 0x28f4d4: 0x3c020035
    ctx->pc = 0x28f4d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4d8: 0xac40f718
    ctx->pc = 0x28f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965016), GPR_U32(ctx, 0));
    // 0x28f4dc: 0x3c020035
    ctx->pc = 0x28f4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4e0: 0xac40f720
    ctx->pc = 0x28f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965024), GPR_U32(ctx, 0));
    // 0x28f4e4: 0x3c020035
    ctx->pc = 0x28f4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f4e8: 0xac40f71c
    ctx->pc = 0x28f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965020), GPR_U32(ctx, 0));
label_28f4ec:
    // 0x28f4ec: 0x3c120034
    ctx->pc = 0x28f4ecu;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x28f4f0: 0x8e44cda8
    ctx->pc = 0x28f4f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294954408)));
    // 0x28f4f4: 0x3c05003b
    ctx->pc = 0x28f4f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f4f8: 0x24a5dee8
    ctx->pc = 0x28f4f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958824));
    // 0x28f4fc: 0xc0847fc
    ctx->pc = 0x28F4FCu;
    SET_GPR_U32(ctx, 31, 0x28F504u);
    ctx->pc = 0x28F500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F504u; }
    }
    if (ctx->pc != 0x28F504u) { return; }
    ctx->pc = 0x28F504u;
    // 0x28f504: 0x3c030035
    ctx->pc = 0x28f504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f508: 0xac62f714
    ctx->pc = 0x28f508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965012), GPR_U32(ctx, 2));
    // 0x28f50c: 0x2a0202d
    ctx->pc = 0x28f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f510: 0x3c05003b
    ctx->pc = 0x28f510u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f514: 0x24a5def8
    ctx->pc = 0x28f514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958840));
    // 0x28f518: 0xc0847fc
    ctx->pc = 0x28F518u;
    SET_GPR_U32(ctx, 31, 0x28F520u);
    ctx->pc = 0x28F51Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F520u; }
    }
    if (ctx->pc != 0x28F520u) { return; }
    ctx->pc = 0x28F520u;
    // 0x28f520: 0x3c100035
    ctx->pc = 0x28f520u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28f524: 0x2610f728
    ctx->pc = 0x28f524u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965032));
    // 0x28f528: 0x1788c0
    ctx->pc = 0x28f528u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 23), 3));
    // 0x28f52c: 0x2301821
    ctx->pc = 0x28f52cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28f530: 0xac620000
    ctx->pc = 0x28f530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f534: 0x2a0202d
    ctx->pc = 0x28f534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f538: 0x3c05003b
    ctx->pc = 0x28f538u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f53c: 0x24a5df08
    ctx->pc = 0x28f53cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958856));
    // 0x28f540: 0xc0847fc
    ctx->pc = 0x28F540u;
    SET_GPR_U32(ctx, 31, 0x28F548u);
    ctx->pc = 0x28F544u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F548u; }
    }
    if (ctx->pc != 0x28F548u) { return; }
    ctx->pc = 0x28F548u;
    // 0x28f548: 0x2118021
    ctx->pc = 0x28f548u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x28f54c: 0xae020004
    ctx->pc = 0x28f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28f550: 0x2a0202d
    ctx->pc = 0x28f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f554: 0x3c05003b
    ctx->pc = 0x28f554u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f558: 0x24a5df18
    ctx->pc = 0x28f558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958872));
    // 0x28f55c: 0xc0847fc
    ctx->pc = 0x28F55Cu;
    SET_GPR_U32(ctx, 31, 0x28F564u);
    ctx->pc = 0x28F560u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F564u; }
    }
    if (ctx->pc != 0x28F564u) { return; }
    ctx->pc = 0x28F564u;
    // 0x28f564: 0x3c100035
    ctx->pc = 0x28f564u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28f568: 0x2610f748
    ctx->pc = 0x28f568u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965064));
    // 0x28f56c: 0x171880
    ctx->pc = 0x28f56cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 2));
    // 0x28f570: 0x701821
    ctx->pc = 0x28f570u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28f574: 0xac620000
    ctx->pc = 0x28f574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f578: 0x8e44cda8
    ctx->pc = 0x28f578u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294954408)));
    // 0x28f57c: 0x3c05003b
    ctx->pc = 0x28f57cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28f580: 0x24a5df28
    ctx->pc = 0x28f580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958888));
    // 0x28f584: 0xc0847fc
    ctx->pc = 0x28F584u;
    SET_GPR_U32(ctx, 31, 0x28F58Cu);
    ctx->pc = 0x28F588u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F58Cu; }
    }
    if (ctx->pc != 0x28F58Cu) { return; }
    ctx->pc = 0x28F58Cu;
    // 0x28f58c: 0xae020010
    ctx->pc = 0x28f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x28f590: 0x8fa20020
    ctx->pc = 0x28f590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f594: 0x10400004
    ctx->pc = 0x28F594u;
    {
        const bool branch_taken_0x28f594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F598u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x28f594) {
            ctx->pc = 0x28F5A8u;
            goto label_28f5a8;
        }
    }
    ctx->pc = 0x28F59Cu;
    // 0x28f59c: 0x2484df38
    ctx->pc = 0x28f59cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958904));
    // 0x28f5a0: 0xc0b49a6
    ctx->pc = 0x28F5A0u;
    SET_GPR_U32(ctx, 31, 0x28F5A8u);
    ctx->pc = 0x28F5A4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A8u; }
    }
    if (ctx->pc != 0x28F5A8u) { return; }
    ctx->pc = 0x28F5A8u;
label_28f5a8:
    // 0x28f5a8: 0xdfbf00c0
    ctx->pc = 0x28f5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28f5ac: 0xdfbe00b0
    ctx->pc = 0x28f5acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28f5b0: 0xdfb700a0
    ctx->pc = 0x28f5b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f5b4: 0xdfb60090
    ctx->pc = 0x28f5b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f5b8: 0xdfb50080
    ctx->pc = 0x28f5b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f5bc: 0xdfb40070
    ctx->pc = 0x28f5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f5c0: 0xdfb30060
    ctx->pc = 0x28f5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f5c4: 0xdfb20050
    ctx->pc = 0x28f5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f5c8: 0xdfb10040
    ctx->pc = 0x28f5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f5cc: 0xdfb00030
    ctx->pc = 0x28f5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f5d0: 0x3e00008
    ctx->pc = 0x28F5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F1ACu: goto label_28f1ac;
            case 0x28F1F4u: goto label_28f1f4;
            case 0x28F214u: goto label_28f214;
            case 0x28F298u: goto label_28f298;
            case 0x28F29Cu: goto label_28f29c;
            case 0x28F2F0u: goto label_28f2f0;
            case 0x28F36Cu: goto label_28f36c;
            case 0x28F388u: goto label_28f388;
            case 0x28F4BCu: goto label_28f4bc;
            case 0x28F4ECu: goto label_28f4ec;
            case 0x28F5A8u: goto label_28f5a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F5D8u;
}
