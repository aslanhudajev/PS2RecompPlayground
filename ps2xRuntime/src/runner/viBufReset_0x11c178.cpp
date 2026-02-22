#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufReset
// Address: 0x11c178 - 0x11c2c0
void viBufReset_0x11c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c178u;

    // 0x11c178: 0x27bdffc0
    ctx->pc = 0x11c178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c17c: 0x24020001
    ctx->pc = 0x11c17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c180: 0xffb20020
    ctx->pc = 0x11c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c184: 0xffb10010
    ctx->pc = 0x11c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c188: 0x80902d
    ctx->pc = 0x11c188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c18c: 0xffbf0030
    ctx->pc = 0x11c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c190: 0x882d
    ctx->pc = 0x11c190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c194: 0xffb00000
    ctx->pc = 0x11c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c198: 0xae420044
    ctx->pc = 0x11c198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x11c19c: 0x8e430054
    ctx->pc = 0x11c19cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11c1a0: 0xae40000c
    ctx->pc = 0x11c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x11c1a4: 0xae400010
    ctx->pc = 0x11c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x11c1a8: 0xae400014
    ctx->pc = 0x11c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x11c1ac: 0xae400058
    ctx->pc = 0x11c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x11c1b0: 0x18600011
    ctx->pc = 0x11C1B0u;
    {
        const bool branch_taken_0x11c1b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11C1B4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x11c1b0) {
            ctx->pc = 0x11C1F8u;
            goto label_11c1f8;
        }
    }
    ctx->pc = 0x11C1B8u;
    // 0x11c1b8: 0x8e450050
    ctx->pc = 0x11c1b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11c1bc: 0x8e470004
    ctx->pc = 0x11c1bcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_11c1c0:
    // 0x11c1c0: 0x24020018
    ctx->pc = 0x11c1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11c1c4: 0x2404ffff
    ctx->pc = 0x11c1c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c1c8: 0x2221818
    ctx->pc = 0x11c1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11c1cc: 0x26310001
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x11c1d0: 0x651021
    ctx->pc = 0x11c1d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11c1d4: 0xac400014
    ctx->pc = 0x11c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11c1d8: 0xac400010
    ctx->pc = 0x11c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x11c1dc: 0xfc440008
    ctx->pc = 0x11c1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x11c1e0: 0x8e430054
    ctx->pc = 0x11c1e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11c1e4: 0x223182a
    ctx->pc = 0x11c1e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x11c1e8: 0x1460fff5
    ctx->pc = 0x11C1E8u;
    {
        const bool branch_taken_0x11c1e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C1ECu;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        if (branch_taken_0x11c1e8) {
            ctx->pc = 0x11C1C0u;
            goto label_11c1c0;
        }
    }
    ctx->pc = 0x11C1F0u;
    // 0x11c1f0: 0x10000003
    ctx->pc = 0x11C1F0u;
    {
        const bool branch_taken_0x11c1f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C1F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x11c1f0) {
            ctx->pc = 0x11C200u;
            goto label_11c200;
        }
    }
    ctx->pc = 0x11C1F8u;
label_11c1f8:
    // 0x11c1f8: 0x8e470004
    ctx->pc = 0x11c1f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c1fc: 0x8e420008
    ctx->pc = 0x11c1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_11c200:
    // 0x11c200: 0x18400011
    ctx->pc = 0x11C200u;
    {
        const bool branch_taken_0x11c200 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C204u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c200) {
            ctx->pc = 0x11C248u;
            goto label_11c248;
        }
    }
    ctx->pc = 0x11C208u;
    // 0x11c208: 0x3c100fff
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x11c20c: 0x3610ffff
    ctx->pc = 0x11c20cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
label_11c210:
    // 0x11c210: 0x8e420000
    ctx->pc = 0x11c210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c214: 0x112ac0
    ctx->pc = 0x11c214u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 11));
    // 0x11c218: 0x112100
    ctx->pc = 0x11c218u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c21c: 0x24060003
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c220: 0xa22821
    ctx->pc = 0x11c220u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c224: 0xe42021
    ctx->pc = 0x11c224u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c228: 0xb02824
    ctx->pc = 0x11c228u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11c22c: 0xc047036
    ctx->pc = 0x11C22Cu;
    SET_GPR_U32(ctx, 31, 0x11C234u);
    ctx->pc = 0x11C230u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x11C0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C234u; }
    }
    if (ctx->pc != 0x11C234u) { return; }
    ctx->pc = 0x11C234u;
    // 0x11c234: 0x26310001
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x11c238: 0x8e420008
    ctx->pc = 0x11c238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11c23c: 0x222102a
    ctx->pc = 0x11c23cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x11c240: 0x1440fff3
    ctx->pc = 0x11C240u;
    {
        const bool branch_taken_0x11c240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C244u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x11c240) {
            ctx->pc = 0x11C210u;
            goto label_11c210;
        }
    }
    ctx->pc = 0x11C248u;
label_11c248:
    // 0x11c248: 0x3c100fff
    ctx->pc = 0x11c248u;
    SET_GPR_S32(ctx, 16, ((uint32_t)4095 << 16));
    // 0x11c24c: 0x112100
    ctx->pc = 0x11c24cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c250: 0x3610ffff
    ctx->pc = 0x11c250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
    // 0x11c254: 0xe42021
    ctx->pc = 0x11c254u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c258: 0xf02824
    ctx->pc = 0x11c258u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x11c25c: 0x24060002
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c260: 0xc047036
    ctx->pc = 0x11C260u;
    SET_GPR_U32(ctx, 31, 0x11C268u);
    ctx->pc = 0x11C264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x11c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C268u; }
    }
    if (ctx->pc != 0x11C268u) { return; }
    ctx->pc = 0x11C268u;
    // 0x11c268: 0x3c021000
    ctx->pc = 0x11c268u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c26c: 0x8e440000
    ctx->pc = 0x11c26cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11c270: 0x3442b420
    ctx->pc = 0x11c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)46112);
    // 0x11c274: 0x8e450004
    ctx->pc = 0x11c274u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11c278: 0xac400000
    ctx->pc = 0x11c278u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11c27c: 0x3c031000
    ctx->pc = 0x11c27cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c280: 0x902024
    ctx->pc = 0x11c280u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11c284: 0x3463b410
    ctx->pc = 0x11c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)46096);
    // 0x11c288: 0x3c021000
    ctx->pc = 0x11c288u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c28c: 0xac640000
    ctx->pc = 0x11c28cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x11c290: 0xb02824
    ctx->pc = 0x11c290u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11c294: 0x3442b430
    ctx->pc = 0x11c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)46128);
    // 0x11c298: 0xac450000
    ctx->pc = 0x11c298u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x11c29c: 0xc04701c
    ctx->pc = 0x11C29Cu;
    SET_GPR_U32(ctx, 31, 0x11C2A4u);
    ctx->pc = 0x11C2A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2A4u; }
    }
    if (ctx->pc != 0x11C2A4u) { return; }
    ctx->pc = 0x11C2A4u;
    // 0x11c2a4: 0xdfbf0030
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c2a8: 0x24020001
    ctx->pc = 0x11c2a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c2ac: 0xdfb20020
    ctx->pc = 0x11c2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c2b0: 0xdfb10010
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c2b4: 0xdfb00000
    ctx->pc = 0x11c2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c2b8: 0x3e00008
    ctx->pc = 0x11C2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C2BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C1C0u: goto label_11c1c0;
            case 0x11C1F8u: goto label_11c1f8;
            case 0x11C200u: goto label_11c200;
            case 0x11C210u: goto label_11c210;
            case 0x11C248u: goto label_11c248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C2C0u;
}
