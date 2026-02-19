#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _multadd
// Address: 0x3020f8 - 0x30220c
void _multadd_0x3020f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3020f8u;

    // 0x3020f8: 0x27bdffa0
    ctx->pc = 0x3020f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3020fc: 0xc0402d
    ctx->pc = 0x3020fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302100: 0xffb40040
    ctx->pc = 0x302100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x302104: 0x482d
    ctx->pc = 0x302104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302108: 0xffb30030
    ctx->pc = 0x302108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x30210c: 0x80a02d
    ctx->pc = 0x30210cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302110: 0xffb10010
    ctx->pc = 0x302110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302114: 0xe0982d
    ctx->pc = 0x302114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302118: 0xffbf0050
    ctx->pc = 0x302118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30211c: 0xa0882d
    ctx->pc = 0x30211cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302120: 0xffb00000
    ctx->pc = 0x302120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302124: 0x262a0014
    ctx->pc = 0x302124u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x302128: 0xffb20020
    ctx->pc = 0x302128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30212c: 0x140382d
    ctx->pc = 0x30212cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302130: 0x8e320010
    ctx->pc = 0x302130u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x302134: 0x0
    ctx->pc = 0x302134u;
    // NOP
label_302138:
    // 0x302138: 0x8ce30000
    ctx->pc = 0x302138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30213c: 0x25290001
    ctx->pc = 0x30213cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x302140: 0x132302a
    ctx->pc = 0x302140u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 18)));
    // 0x302144: 0x3064ffff
    ctx->pc = 0x302144u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x302148: 0x881018
    ctx->pc = 0x302148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x30214c: 0x31c02
    ctx->pc = 0x30214cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x302150: 0x681818
    ctx->pc = 0x302150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x302154: 0x532021
    ctx->pc = 0x302154u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x302158: 0x42c02
    ctx->pc = 0x302158u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 16));
    // 0x30215c: 0x651821
    ctx->pc = 0x30215cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x302160: 0x3084ffff
    ctx->pc = 0x302160u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x302164: 0x31400
    ctx->pc = 0x302164u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x302168: 0x39c02
    ctx->pc = 0x302168u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 16));
    // 0x30216c: 0x441021
    ctx->pc = 0x30216cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x302170: 0xace20000
    ctx->pc = 0x302170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x302174: 0x14c0fff0
    ctx->pc = 0x302174u;
    {
        const bool branch_taken_0x302174 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x302178u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x302174) {
            ctx->pc = 0x302138u;
            goto label_302138;
        }
    }
    ctx->pc = 0x30217Cu;
    // 0x30217c: 0x1260001b
    ctx->pc = 0x30217Cu;
    {
        const bool branch_taken_0x30217c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x302180u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30217c) {
            ctx->pc = 0x3021ECu;
            goto label_3021ec;
        }
    }
    ctx->pc = 0x302184u;
    // 0x302184: 0x8e220008
    ctx->pc = 0x302184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x302188: 0x242102a
    ctx->pc = 0x302188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x30218c: 0x14400012
    ctx->pc = 0x30218Cu;
    {
        const bool branch_taken_0x30218c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x302190u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x30218c) {
            ctx->pc = 0x3021D8u;
            goto label_3021d8;
        }
    }
    ctx->pc = 0x302194u;
    // 0x302194: 0x8e250004
    ctx->pc = 0x302194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x302198: 0x280202d
    ctx->pc = 0x302198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30219c: 0xc0c0808
    ctx->pc = 0x30219Cu;
    SET_GPR_U32(ctx, 31, 0x3021A4u);
    ctx->pc = 0x3021A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021A4u; }
    }
    if (ctx->pc != 0x3021A4u) { return; }
    ctx->pc = 0x3021A4u;
    // 0x3021a4: 0x8e260010
    ctx->pc = 0x3021a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3021a8: 0x40802d
    ctx->pc = 0x3021a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021ac: 0x2625000c
    ctx->pc = 0x3021acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x3021b0: 0x2604000c
    ctx->pc = 0x3021b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x3021b4: 0x63080
    ctx->pc = 0x3021b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x3021b8: 0xc0bec59
    ctx->pc = 0x3021B8u;
    SET_GPR_U32(ctx, 31, 0x3021C0u);
    ctx->pc = 0x3021BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021C0u; }
    }
    if (ctx->pc != 0x3021C0u) { return; }
    ctx->pc = 0x3021C0u;
    // 0x3021c0: 0x220282d
    ctx->pc = 0x3021c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021c4: 0xc0c0832
    ctx->pc = 0x3021C4u;
    SET_GPR_U32(ctx, 31, 0x3021CCu);
    ctx->pc = 0x3021C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3021CCu; }
    }
    if (ctx->pc != 0x3021CCu) { return; }
    ctx->pc = 0x3021CCu;
    // 0x3021cc: 0x200882d
    ctx->pc = 0x3021ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021d0: 0x262a0014
    ctx->pc = 0x3021d0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 20));
    // 0x3021d4: 0x121080
    ctx->pc = 0x3021d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_3021d8:
    // 0x3021d8: 0x1421021
    ctx->pc = 0x3021d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3021dc: 0x26520001
    ctx->pc = 0x3021dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x3021e0: 0xac530000
    ctx->pc = 0x3021e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x3021e4: 0xae320010
    ctx->pc = 0x3021e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x3021e8: 0x220102d
    ctx->pc = 0x3021e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3021ec:
    // 0x3021ec: 0xdfbf0050
    ctx->pc = 0x3021ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3021f0: 0xdfb40040
    ctx->pc = 0x3021f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3021f4: 0xdfb30030
    ctx->pc = 0x3021f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3021f8: 0xdfb20020
    ctx->pc = 0x3021f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3021fc: 0xdfb10010
    ctx->pc = 0x3021fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302200: 0xdfb00000
    ctx->pc = 0x302200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302204: 0x3e00008
    ctx->pc = 0x302204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302138u: goto label_302138;
            case 0x3021D8u: goto label_3021d8;
            case 0x3021ECu: goto label_3021ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30220Cu;
}
