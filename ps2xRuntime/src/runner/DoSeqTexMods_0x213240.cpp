#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoSeqTexMods
// Address: 0x213240 - 0x213308
void DoSeqTexMods_0x213240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213240u;

    // 0x213240: 0x27bdffa0
    ctx->pc = 0x213240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x213244: 0xffbf0050
    ctx->pc = 0x213244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x213248: 0xffb40040
    ctx->pc = 0x213248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21324c: 0xffb30030
    ctx->pc = 0x21324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x213250: 0xffb20020
    ctx->pc = 0x213250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213254: 0xffb10010
    ctx->pc = 0x213254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x213258: 0xffb00000
    ctx->pc = 0x213258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21325c: 0x80982d
    ctx->pc = 0x21325cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213260: 0xa0902d
    ctx->pc = 0x213260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213264: 0xc0802d
    ctx->pc = 0x213264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213268: 0x86420028
    ctx->pc = 0x213268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x21326c: 0x1840001e
    ctx->pc = 0x21326Cu;
    {
        const bool branch_taken_0x21326c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213270u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21326c) {
            ctx->pc = 0x2132E8u;
            goto label_2132e8;
        }
    }
    ctx->pc = 0x213274u;
    // 0x213274: 0x24140058
    ctx->pc = 0x213274u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 88));
    // 0x213278: 0x2341818
    ctx->pc = 0x213278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21327c: 0x0
    ctx->pc = 0x21327cu;
    // NOP
label_213280:
    // 0x213280: 0x8e42002c
    ctx->pc = 0x213280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x213284: 0x622821
    ctx->pc = 0x213284u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213288: 0x84a3004c
    ctx->pc = 0x213288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x21328c: 0x8ca20050
    ctx->pc = 0x21328cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x213290: 0x621818
    ctx->pc = 0x213290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x213294: 0x70102a
    ctx->pc = 0x213294u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x213298: 0x1040000c
    ctx->pc = 0x213298u;
    {
        const bool branch_taken_0x213298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21329Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213298) {
            ctx->pc = 0x2132CCu;
            goto label_2132cc;
        }
    }
    ctx->pc = 0x2132A0u;
    // 0x2132a0: 0x86420024
    ctx->pc = 0x2132a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2132a4: 0x10400009
    ctx->pc = 0x2132A4u;
    {
        const bool branch_taken_0x2132a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2132A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x2132a4) {
            ctx->pc = 0x2132CCu;
            goto label_2132cc;
        }
    }
    ctx->pc = 0x2132ACu;
    // 0x2132ac: 0x14400007
    ctx->pc = 0x2132ACu;
    {
        const bool branch_taken_0x2132ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2132ac) {
            ctx->pc = 0x2132CCu;
            goto label_2132cc;
        }
    }
    ctx->pc = 0x2132B4u;
    // 0x2132b4: 0x203001a
    ctx->pc = 0x2132b4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2132b8: 0x1010
    ctx->pc = 0x2132b8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2132bc: 0x50600001
    ctx->pc = 0x2132BCu;
    {
        const bool branch_taken_0x2132bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2132bc) {
            ctx->pc = 0x2132C0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2132C4u;
            goto label_2132c4;
        }
    }
    ctx->pc = 0x2132C4u;
label_2132c4:
    // 0x2132c4: 0x40802d
    ctx->pc = 0x2132c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132c8: 0x260202d
    ctx->pc = 0x2132c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2132cc:
    // 0x2132cc: 0xc084352
    ctx->pc = 0x2132CCu;
    SET_GPR_U32(ctx, 31, 0x2132D4u);
    ctx->pc = 0x2132D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexModSeqSub_0x210d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2132D4u; }
    }
    if (ctx->pc != 0x2132D4u) { return; }
    ctx->pc = 0x2132D4u;
    // 0x2132d4: 0x26310001
    ctx->pc = 0x2132d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2132d8: 0x86420028
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2132dc: 0x222102a
    ctx->pc = 0x2132dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2132e0: 0x1440ffe7
    ctx->pc = 0x2132E0u;
    {
        const bool branch_taken_0x2132e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2132E4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2132e0) {
            ctx->pc = 0x213280u;
            goto label_213280;
        }
    }
    ctx->pc = 0x2132E8u;
label_2132e8:
    // 0x2132e8: 0xdfbf0050
    ctx->pc = 0x2132e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2132ec: 0xdfb40040
    ctx->pc = 0x2132ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2132f0: 0xdfb30030
    ctx->pc = 0x2132f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2132f4: 0xdfb20020
    ctx->pc = 0x2132f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2132f8: 0xdfb10010
    ctx->pc = 0x2132f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2132fc: 0xdfb00000
    ctx->pc = 0x2132fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213300: 0x3e00008
    ctx->pc = 0x213300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213280u: goto label_213280;
            case 0x2132C4u: goto label_2132c4;
            case 0x2132CCu: goto label_2132cc;
            case 0x2132E8u: goto label_2132e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213308u;
}
