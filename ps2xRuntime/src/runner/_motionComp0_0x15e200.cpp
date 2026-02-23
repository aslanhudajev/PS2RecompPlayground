#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _motionComp0
// Address: 0x15e200 - 0x15e534
void _motionComp0_0x15e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_motionComp0");


    ctx->pc = 0x15e200u;

    // 0x15e200: 0x3c020023
    ctx->pc = 0x15e200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e204: 0x27bdffa0
    ctx->pc = 0x15e204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15e208: 0x8c43a368
    ctx->pc = 0x15e208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943592)));
    // 0x15e20c: 0xffb40040
    ctx->pc = 0x15e20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15e210: 0x83001a
    ctx->pc = 0x15e210u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x15e214: 0xffb30030
    ctx->pc = 0x15e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x15e218: 0xffb20020
    ctx->pc = 0x15e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15e21c: 0xa0982d
    ctx->pc = 0x15e21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e220: 0xffb10010
    ctx->pc = 0x15e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15e224: 0xffb00000
    ctx->pc = 0x15e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e228: 0xffbf0050
    ctx->pc = 0x15e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15e22c: 0xc0802d
    ctx->pc = 0x15e22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e230: 0x50600001
    ctx->pc = 0x15E230u;
    {
        const bool branch_taken_0x15e230 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15e230) {
            ctx->pc = 0x15E234u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x15E238u;
            goto label_15e238;
        }
    }
    ctx->pc = 0x15E238u;
label_15e238:
    // 0x15e238: 0x32140001
    ctx->pc = 0x15e238u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 16), 1));
    // 0x15e23c: 0x1010
    ctx->pc = 0x15e23cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x15e240: 0x9012
    ctx->pc = 0x15e240u;
    SET_GPR_U32(ctx, 18, ctx->lo);
    // 0x15e244: 0x40882d
    ctx->pc = 0x15e244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e248: 0x122900
    ctx->pc = 0x15e248u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 4));
    // 0x15e24c: 0x12800012
    ctx->pc = 0x15E24Cu;
    {
        const bool branch_taken_0x15e24c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E250u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x15e24c) {
            ctx->pc = 0x15E298u;
            goto label_15e298;
        }
    }
    ctx->pc = 0x15E254u;
    // 0x15e254: 0x3c0f0023
    ctx->pc = 0x15e254u;
    SET_GPR_U32(ctx, 15, ((uint32_t)35 << 16));
    // 0x15e258: 0x3c190023
    ctx->pc = 0x15e258u;
    SET_GPR_U32(ctx, 25, ((uint32_t)35 << 16));
    // 0x15e25c: 0x0
    ctx->pc = 0x15e25cu;
    // NOP
label_15e260:
    // 0x15e260: 0x3c021000
    ctx->pc = 0x15e260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x15e264: 0x3442d400
    ctx->pc = 0x15e264u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x15e268: 0x8c430000
    ctx->pc = 0x15e268u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x15e26c: 0x31a02
    ctx->pc = 0x15e26cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x15e270: 0x30630001
    ctx->pc = 0x15e270u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x15e274: 0x1460fffa
    ctx->pc = 0x15E274u;
    {
        const bool branch_taken_0x15e274 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e274) {
            ctx->pc = 0x15E260u;
            goto label_15e260;
        }
    }
    ctx->pc = 0x15E27Cu;
    // 0x15e27c: 0x25e2a838
    ctx->pc = 0x15e27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e280: 0x24040140
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e284: 0x8c430280
    ctx->pc = 0x15e284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x15e288: 0x642818
    ctx->pc = 0x15e288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e28c: 0xa21821
    ctx->pc = 0x15e28cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15e290: 0x10000063
    ctx->pc = 0x15E290u;
    {
        const bool branch_taken_0x15e290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E294u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        if (branch_taken_0x15e290) {
            ctx->pc = 0x15E420u;
            goto label_15e420;
        }
    }
    ctx->pc = 0x15E298u;
label_15e298:
    // 0x15e298: 0x24e2ffff
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x15e29c: 0x2c420003
    ctx->pc = 0x15e29cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x15e2a0: 0x1440000a
    ctx->pc = 0x15E2A0u;
    {
        const bool branch_taken_0x15e2a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e2a0) {
            ctx->pc = 0x15E2CCu;
            goto label_15e2cc;
        }
    }
    ctx->pc = 0x15E2A8u;
    // 0x15e2a8: 0x3c04002c
    ctx->pc = 0x15e2a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x15e2ac: 0xe0282d
    ctx->pc = 0x15e2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2b0: 0xc059106
    ctx->pc = 0x15E2B0u;
    SET_GPR_U32(ctx, 31, 0x15E2B8u);
    ctx->pc = 0x15E2B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937272));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2B8u; }
        else if (ctx->pc != 0x15E2B8u) { ctx->pc = 0x15E2B8u; }
    }
    if (ctx->pc != 0x15E2B8u) { return; }
    ctx->pc = 0x15E2B8u;
    // 0x15e2b8: 0x24020001
    ctx->pc = 0x15e2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2bc: 0x3c030023
    ctx->pc = 0x15e2bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x15e2c0: 0xac62a348
    ctx->pc = 0x15e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943560), GPR_U32(ctx, 2));
    // 0x15e2c4: 0x10000093
    ctx->pc = 0x15E2C4u;
    {
        const bool branch_taken_0x15e2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E2C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e2c4) {
            ctx->pc = 0x15E514u;
            goto label_15e514;
        }
    }
    ctx->pc = 0x15E2CCu;
label_15e2cc:
    // 0x15e2cc: 0xc05794e
    ctx->pc = 0x15E2CCu;
    SET_GPR_U32(ctx, 31, 0x15E2D4u);
    ctx->pc = 0x15E2D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E538u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x15e538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E2D4u; }
        else if (ctx->pc != 0x15E2D4u) { ctx->pc = 0x15E2D4u; }
    }
    if (ctx->pc != 0x15E2D4u) { return; }
    ctx->pc = 0x15E2D4u;
    // 0x15e2d4: 0x3c031000
    ctx->pc = 0x15e2d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x15e2d8: 0x3c180023
    ctx->pc = 0x15e2d8u;
    SET_GPR_U32(ctx, 24, ((uint32_t)35 << 16));
    // 0x15e2dc: 0x3c0f0023
    ctx->pc = 0x15e2dcu;
    SET_GPR_U32(ctx, 15, ((uint32_t)35 << 16));
    // 0x15e2e0: 0x3c190023
    ctx->pc = 0x15e2e0u;
    SET_GPR_U32(ctx, 25, ((uint32_t)35 << 16));
    // 0x15e2e4: 0x3463d400
    ctx->pc = 0x15e2e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54272));
label_15e2e8:
    // 0x15e2e8: 0x8c620000
    ctx->pc = 0x15e2e8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x15e2ec: 0x21202
    ctx->pc = 0x15e2ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x15e2f0: 0x30420001
    ctx->pc = 0x15e2f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x15e2f4: 0x0
    ctx->pc = 0x15e2f4u;
    // NOP
    // 0x15e2f8: 0x0
    ctx->pc = 0x15e2f8u;
    // NOP
    // 0x15e2fc: 0x1440fffa
    ctx->pc = 0x15E2FCu;
    {
        const bool branch_taken_0x15e2fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15e2fc) {
            ctx->pc = 0x15E2E8u;
            goto label_15e2e8;
        }
    }
    ctx->pc = 0x15E304u;
    // 0x15e304: 0x25e6a838
    ctx->pc = 0x15e304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e308: 0x24070140
    ctx->pc = 0x15e308u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e30c: 0x8cc40280
    ctx->pc = 0x15e30cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x15e310: 0x3c020fff
    ctx->pc = 0x15e310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x15e314: 0x8f03a214
    ctx->pc = 0x15e314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 4294943252)));
    // 0x15e318: 0x3442ffff
    ctx->pc = 0x15e318u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x15e31c: 0x872818
    ctx->pc = 0x15e31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e320: 0x582d
    ctx->pc = 0x15e320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e324: 0x621824
    ctx->pc = 0x15e324u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e328: 0xa62021
    ctx->pc = 0x15e328u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e32c: 0x3c052000
    ctx->pc = 0x15e32cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x15e330: 0x8c8d012c
    ctx->pc = 0x15e330u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x15e334: 0x19a00022
    ctx->pc = 0x15E334u;
    {
        const bool branch_taken_0x15e334 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x15E338u;
        SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x15e334) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E33Cu;
    // 0x15e33c: 0x25aeffff
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 13), 4294967295));
label_15e340:
    // 0x15e340: 0x25e6a838
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e344: 0x24040140
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e348: 0x8cc20280
    ctx->pc = 0x15e348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x15e34c: 0xb1880
    ctx->pc = 0x15e34cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x15e350: 0x3c070fff
    ctx->pc = 0x15e350u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x15e354: 0x16e4026
    ctx->pc = 0x15e354u;
    SET_GPR_U32(ctx, 8, XOR32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x15e358: 0x441018
    ctx->pc = 0x15e358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15e35c: 0x34e7ffff
    ctx->pc = 0x15e35cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x15e360: 0x24050003
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e364: 0x3c0a3000
    ctx->pc = 0x15e364u;
    SET_GPR_U32(ctx, 10, ((uint32_t)12288 << 16));
    // 0x15e368: 0x354a0030
    ctx->pc = 0x15e368u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 48));
    // 0x15e36c: 0x8280a
    ctx->pc = 0x15e36cu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x15e370: 0x24090030
    ctx->pc = 0x15e370u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x15e374: 0x52f38
    ctx->pc = 0x15e374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x15e378: 0x256b0001
    ctx->pc = 0x15e378u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x15e37c: 0x621821
    ctx->pc = 0x15e37cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e380: 0x16d402a
    ctx->pc = 0x15e380u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 13)));
    // 0x15e384: 0xc32021
    ctx->pc = 0x15e384u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15e388: 0x80302d
    ctx->pc = 0x15e388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e38c: 0x8c820018
    ctx->pc = 0x15e38cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15e390: 0x8cc30008
    ctx->pc = 0x15e390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15e394: 0x471024
    ctx->pc = 0x15e394u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15e398: 0x671824
    ctx->pc = 0x15e398u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15e39c: 0x2103c
    ctx->pc = 0x15e39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e3a0: 0x451025
    ctx->pc = 0x15e3a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15e3a4: 0x3183c
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15e3a8: 0x6a1825
    ctx->pc = 0x15e3a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15e3ac: 0x491025
    ctx->pc = 0x15e3acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x15e3b0: 0xfd830000
    ctx->pc = 0x15e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x15e3b4: 0xfd820010
    ctx->pc = 0x15e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x15e3b8: 0x1500ffe1
    ctx->pc = 0x15E3B8u;
    {
        const bool branch_taken_0x15e3b8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E3BCu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 32));
        if (branch_taken_0x15e3b8) {
            ctx->pc = 0x15E340u;
            goto label_15e340;
        }
    }
    ctx->pc = 0x15E3C0u;
label_15e3c0:
    // 0x15e3c0: 0xf
    ctx->pc = 0x15e3c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15e3c4: 0x25e9a838
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e3c8: 0x24020140
    ctx->pc = 0x15e3c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e3cc: 0x8d240280
    ctx->pc = 0x15e3ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x15e3d0: 0x3c071000
    ctx->pc = 0x15e3d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x15e3d4: 0x34e7d480
    ctx->pc = 0x15e3d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 54400));
    // 0x15e3d8: 0x3c081000
    ctx->pc = 0x15e3d8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x15e3dc: 0x822018
    ctx->pc = 0x15e3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x15e3e0: 0x3508d430
    ctx->pc = 0x15e3e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 54320));
    // 0x15e3e4: 0x3c051000
    ctx->pc = 0x15e3e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x15e3e8: 0x3c061000
    ctx->pc = 0x15e3e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x15e3ec: 0x34a5d420
    ctx->pc = 0x15e3ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 54304));
    // 0x15e3f0: 0x34c6d400
    ctx->pc = 0x15e3f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 54272));
    // 0x15e3f4: 0x240a0105
    ctx->pc = 0x15e3f4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 261));
    // 0x15e3f8: 0x240b0001
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e3fc: 0x891821
    ctx->pc = 0x15e3fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x15e400: 0x8c620000
    ctx->pc = 0x15e400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e404: 0x1244821
    ctx->pc = 0x15e404u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x15e408: 0xace20000
    ctx->pc = 0x15e408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x15e40c: 0x8f03a214
    ctx->pc = 0x15e40cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 4294943252)));
    // 0x15e410: 0xad030000
    ctx->pc = 0x15e410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x15e414: 0xaca00000
    ctx->pc = 0x15e414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15e418: 0xacca0000
    ctx->pc = 0x15e418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x15e41c: 0xad2b0138
    ctx->pc = 0x15e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
label_15e420:
    // 0x15e420: 0x24020001
    ctx->pc = 0x15e420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e424: 0x1662000a
    ctx->pc = 0x15E424u;
    {
        const bool branch_taken_0x15e424 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x15E428u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 4294944824));
        if (branch_taken_0x15e424) {
            ctx->pc = 0x15E450u;
            goto label_15e450;
        }
    }
    ctx->pc = 0x15E42Cu;
    // 0x15e42c: 0x32020002
    ctx->pc = 0x15e42cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
    // 0x15e430: 0x10400007
    ctx->pc = 0x15E430u;
    {
        const bool branch_taken_0x15e430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 4294944824));
        if (branch_taken_0x15e430) {
            ctx->pc = 0x15E450u;
            goto label_15e450;
        }
    }
    ctx->pc = 0x15E438u;
    // 0x15e438: 0x24040140
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e43c: 0x8c430280
    ctx->pc = 0x15e43cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x15e440: 0x642818
    ctx->pc = 0x15e440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e444: 0xa21821
    ctx->pc = 0x15e444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15e448: 0x10000006
    ctx->pc = 0x15E448u;
    {
        const bool branch_taken_0x15e448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E44Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        if (branch_taken_0x15e448) {
            ctx->pc = 0x15E464u;
            goto label_15e464;
        }
    }
    ctx->pc = 0x15E450u;
label_15e450:
    // 0x15e450: 0x24040140
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e454: 0x8c430280
    ctx->pc = 0x15e454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x15e458: 0x642818
    ctx->pc = 0x15e458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e45c: 0xa21821
    ctx->pc = 0x15e45cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15e460: 0xac600134
    ctx->pc = 0x15e460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_15e464:
    // 0x15e464: 0x25e7a838
    ctx->pc = 0x15e464u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e468: 0x24080140
    ctx->pc = 0x15e468u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e46c: 0x8ce20280
    ctx->pc = 0x15e46cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x15e470: 0x24030003
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e474: 0x8f24a3ec
    ctx->pc = 0x15e474u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 25), 4294943724)));
    // 0x15e478: 0x482818
    ctx->pc = 0x15e478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e47c: 0xa71021
    ctx->pc = 0x15e47cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15e480: 0x1483000f
    ctx->pc = 0x15E480u;
    {
        const bool branch_taken_0x15e480 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x15E484u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        if (branch_taken_0x15e480) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E488u;
    // 0x15e488: 0x3c020023
    ctx->pc = 0x15e488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e48c: 0x8ce40280
    ctx->pc = 0x15e48cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x15e490: 0x8c45a484
    ctx->pc = 0x15e490u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943876)));
    // 0x15e494: 0x24060180
    ctx->pc = 0x15e494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    // 0x15e498: 0x881018
    ctx->pc = 0x15e498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15e49c: 0x8ca30000
    ctx->pc = 0x15e49cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e4a0: 0x472021
    ctx->pc = 0x15e4a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x15e4a4: 0x8ca20010
    ctx->pc = 0x15e4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15e4a8: 0x2222818
    ctx->pc = 0x15e4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x15e4ac: 0xb21021
    ctx->pc = 0x15e4acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x15e4b0: 0x461018
    ctx->pc = 0x15e4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15e4b4: 0x621821
    ctx->pc = 0x15e4b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e4b8: 0x10000015
    ctx->pc = 0x15E4B8u;
    {
        const bool branch_taken_0x15e4b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E4BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        if (branch_taken_0x15e4b8) {
            ctx->pc = 0x15E510u;
            goto label_15e510;
        }
    }
    ctx->pc = 0x15E4C0u;
label_15e4c0:
    // 0x15e4c0: 0x24020002
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e4c4: 0x54820004
    ctx->pc = 0x15E4C4u;
    {
        const bool branch_taken_0x15e4c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x15e4c4) {
            ctx->pc = 0x15E4C8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
            ctx->pc = 0x15E4D8u;
            goto label_15e4d8;
        }
    }
    ctx->pc = 0x15E4CCu;
    // 0x15e4cc: 0x3c020023
    ctx->pc = 0x15e4ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x15e4d0: 0x10000002
    ctx->pc = 0x15E4D0u;
    {
        const bool branch_taken_0x15e4d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E4D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943884)));
        if (branch_taken_0x15e4d0) {
            ctx->pc = 0x15E4DCu;
            goto label_15e4dc;
        }
    }
    ctx->pc = 0x15E4D8u;
label_15e4d8:
    // 0x15e4d8: 0x8c42a488
    ctx->pc = 0x15e4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943880)));
label_15e4dc:
    // 0x15e4dc: 0x8c440010
    ctx->pc = 0x15e4dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15e4e0: 0x25e6a838
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 4294944824));
    // 0x15e4e4: 0x8cc50280
    ctx->pc = 0x15e4e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x15e4e8: 0x24070180
    ctx->pc = 0x15e4e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 384));
    // 0x15e4ec: 0x2241818
    ctx->pc = 0x15e4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x15e4f0: 0x8c420000
    ctx->pc = 0x15e4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e4f4: 0x722021
    ctx->pc = 0x15e4f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15e4f8: 0x24030140
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x15e4fc: 0x872018
    ctx->pc = 0x15e4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x15e500: 0xa34018
    ctx->pc = 0x15e500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x15e504: 0x441021
    ctx->pc = 0x15e504u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15e508: 0x1062821
    ctx->pc = 0x15e508u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15e50c: 0xaca20128
    ctx->pc = 0x15e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
label_15e510:
    // 0x15e510: 0x24020001
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15e514:
    // 0x15e514: 0xdfbf0050
    ctx->pc = 0x15e514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e518: 0xdfb40040
    ctx->pc = 0x15e518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e51c: 0xdfb30030
    ctx->pc = 0x15e51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e520: 0xdfb20020
    ctx->pc = 0x15e520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e524: 0xdfb10010
    ctx->pc = 0x15e524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e528: 0xdfb00000
    ctx->pc = 0x15e528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e52c: 0x3e00008
    ctx->pc = 0x15E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E238u: goto label_15e238;
            case 0x15E260u: goto label_15e260;
            case 0x15E298u: goto label_15e298;
            case 0x15E2CCu: goto label_15e2cc;
            case 0x15E2E8u: goto label_15e2e8;
            case 0x15E340u: goto label_15e340;
            case 0x15E3C0u: goto label_15e3c0;
            case 0x15E420u: goto label_15e420;
            case 0x15E450u: goto label_15e450;
            case 0x15E464u: goto label_15e464;
            case 0x15E4C0u: goto label_15e4c0;
            case 0x15E4D8u: goto label_15e4d8;
            case 0x15E4DCu: goto label_15e4dc;
            case 0x15E510u: goto label_15e510;
            case 0x15E514u: goto label_15e514;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E534u;
}
