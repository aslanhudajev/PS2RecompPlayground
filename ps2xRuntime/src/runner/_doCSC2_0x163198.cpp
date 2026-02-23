#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _doCSC2
// Address: 0x163198 - 0x163358
void _doCSC2_0x163198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_doCSC2");


    ctx->pc = 0x163198u;

    // 0x163198: 0x240603ff
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1023));
    // 0x16319c: 0x27bdffa0
    ctx->pc = 0x16319cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1631a0: 0xa6001a
    ctx->pc = 0x1631a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1631a4: 0xffb00020
    ctx->pc = 0x1631a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1631a8: 0x3c03000f
    ctx->pc = 0x1631a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x1631ac: 0x80802d
    ctx->pc = 0x1631acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631b0: 0x3463fc00
    ctx->pc = 0x1631b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64512));
    // 0x1631b4: 0x3c020fff
    ctx->pc = 0x1631b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1631b8: 0x3442ffff
    ctx->pc = 0x1631b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1631bc: 0x2031821
    ctx->pc = 0x1631bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1631c0: 0xffb20040
    ctx->pc = 0x1631c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1631c4: 0x621824
    ctx->pc = 0x1631c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1631c8: 0xffbf0050
    ctx->pc = 0x1631c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1631cc: 0x3c02002e
    ctx->pc = 0x1631ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1631d0: 0xffb10030
    ctx->pc = 0x1631d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1631d4: 0x3c08002e
    ctx->pc = 0x1631d4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
    // 0x1631d8: 0x50c00001
    ctx->pc = 0x1631D8u;
    {
        const bool branch_taken_0x1631d8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1631d8) {
            ctx->pc = 0x1631DCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1631E0u;
            goto label_1631e0;
        }
    }
    ctx->pc = 0x1631E0u;
label_1631e0:
    // 0x1631e0: 0x3c120023
    ctx->pc = 0x1631e0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1631e4: 0x3c06002e
    ctx->pc = 0x1631e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x1631e8: 0x3c040023
    ctx->pc = 0x1631e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1631ec: 0xac45c140
    ctx->pc = 0x1631ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951232), GPR_U32(ctx, 5));
    // 0x1631f0: 0x3c051000
    ctx->pc = 0x1631f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1631f4: 0xacc3c144
    ctx->pc = 0x1631f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951236), GPR_U32(ctx, 3));
    // 0x1631f8: 0xac80a200
    ctx->pc = 0x1631f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943232), GPR_U32(ctx, 0));
    // 0x1631fc: 0x34a52010
    ctx->pc = 0x1631fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x163200: 0xae40a1f8
    ctx->pc = 0x163200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943224), GPR_U32(ctx, 0));
    // 0x163204: 0x3812
    ctx->pc = 0x163204u;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x163208: 0x24e70001
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x16320c: 0xad07c148
    ctx->pc = 0x16320cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294951240), GPR_U32(ctx, 7));
label_163210:
    // 0x163210: 0x8ca20000
    ctx->pc = 0x163210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163214: 0x0
    ctx->pc = 0x163214u;
    // NOP
    // 0x163218: 0x0
    ctx->pc = 0x163218u;
    // NOP
    // 0x16321c: 0x0
    ctx->pc = 0x16321cu;
    // NOP
    // 0x163220: 0x0
    ctx->pc = 0x163220u;
    // NOP
    // 0x163224: 0x440fffa
    ctx->pc = 0x163224u;
    {
        const bool branch_taken_0x163224 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x163224) {
            ctx->pc = 0x163210u;
            goto label_163210;
        }
    }
    ctx->pc = 0x16322Cu;
    // 0x16322c: 0x3c050016
    ctx->pc = 0x16322cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
    // 0x163230: 0x24040003
    ctx->pc = 0x163230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x163234: 0x24a53050
    ctx->pc = 0x163234u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12368));
    // 0x163238: 0xc05517c
    ctx->pc = 0x163238u;
    SET_GPR_U32(ctx, 31, 0x163240u);
    ctx->pc = 0x16323Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1545F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x1545f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163240u; }
        else if (ctx->pc != 0x163240u) { ctx->pc = 0x163240u; }
    }
    if (ctx->pc != 0x163240u) { return; }
    ctx->pc = 0x163240u;
    // 0x163240: 0x40882d
    ctx->pc = 0x163240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163244: 0x24030008
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x163248: 0x3c021000
    ctx->pc = 0x163248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x16324c: 0x24040003
    ctx->pc = 0x16324cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x163250: 0x3442e010
    ctx->pc = 0x163250u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57360));
    // 0x163254: 0xc055510
    ctx->pc = 0x163254u;
    SET_GPR_U32(ctx, 31, 0x16325Cu);
    ctx->pc = 0x163258u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x155440u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x155440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16325Cu; }
        else if (ctx->pc != 0x16325Cu) { ctx->pc = 0x16325Cu; }
    }
    if (ctx->pc != 0x16325Cu) { return; }
    ctx->pc = 0x16325Cu;
    // 0x16325c: 0x3c030fff
    ctx->pc = 0x16325cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4095 << 16));
    // 0x163260: 0x3c021000
    ctx->pc = 0x163260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x163264: 0x3463ffff
    ctx->pc = 0x163264u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x163268: 0x3442b010
    ctx->pc = 0x163268u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x16326c: 0x2031824
    ctx->pc = 0x16326cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x163270: 0x3c041000
    ctx->pc = 0x163270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x163274: 0xac430000
    ctx->pc = 0x163274u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x163278: 0x3484b020
    ctx->pc = 0x163278u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x16327c: 0x3402ffc0
    ctx->pc = 0x16327cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65472));
    // 0x163280: 0x3c051000
    ctx->pc = 0x163280u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x163284: 0xac820000
    ctx->pc = 0x163284u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x163288: 0x34a5b000
    ctx->pc = 0x163288u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 45056));
    // 0x16328c: 0x24040100
    ctx->pc = 0x16328cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 256));
    // 0x163290: 0x3c031000
    ctx->pc = 0x163290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x163294: 0x3c027000
    ctx->pc = 0x163294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x163298: 0xaca40000
    ctx->pc = 0x163298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x16329c: 0x344203ff
    ctx->pc = 0x16329cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1023));
    // 0x1632a0: 0x34632000
    ctx->pc = 0x1632a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8192));
    // 0x1632a4: 0xac620000
    ctx->pc = 0x1632a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x1632a8: 0x24040004
    ctx->pc = 0x1632a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1632ac: 0xafa40000
    ctx->pc = 0x1632acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1632b0: 0x3c020023
    ctx->pc = 0x1632b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1632b4: 0x8c44a21c
    ctx->pc = 0x1632b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x1632b8: 0xc058eec
    ctx->pc = 0x1632B8u;
    SET_GPR_U32(ctx, 31, 0x1632C0u);
    ctx->pc = 0x1632BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632C0u; }
        else if (ctx->pc != 0x1632C0u) { ctx->pc = 0x1632C0u; }
    }
    if (ctx->pc != 0x1632C0u) { return; }
    ctx->pc = 0x1632C0u;
    // 0x1632c0: 0x3c02002e
    ctx->pc = 0x1632c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1632c4: 0x3c040023
    ctx->pc = 0x1632c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1632c8: 0x8c43c148
    ctx->pc = 0x1632c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294951240)));
    // 0x1632cc: 0x0
    ctx->pc = 0x1632ccu;
    // NOP
label_1632d0:
    // 0x1632d0: 0x8c82a200
    ctx->pc = 0x1632d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943232)));
    // 0x1632d4: 0x43102a
    ctx->pc = 0x1632d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1632d8: 0x0
    ctx->pc = 0x1632d8u;
    // NOP
    // 0x1632dc: 0x0
    ctx->pc = 0x1632dcu;
    // NOP
    // 0x1632e0: 0x0
    ctx->pc = 0x1632e0u;
    // NOP
    // 0x1632e4: 0x1440fffa
    ctx->pc = 0x1632E4u;
    {
        const bool branch_taken_0x1632e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1632e4) {
            ctx->pc = 0x1632D0u;
            goto label_1632d0;
        }
    }
    ctx->pc = 0x1632ECu;
    // 0x1632ec: 0x8e42a1f8
    ctx->pc = 0x1632ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294943224)));
    // 0x1632f0: 0x10400005
    ctx->pc = 0x1632F0u;
    {
        const bool branch_taken_0x1632f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1632F4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x1632f0) {
            ctx->pc = 0x163308u;
            goto label_163308;
        }
    }
    ctx->pc = 0x1632F8u;
    // 0x1632f8: 0x3c04002c
    ctx->pc = 0x1632f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1632fc: 0xc059112
    ctx->pc = 0x1632FCu;
    SET_GPR_U32(ctx, 31, 0x163304u);
    ctx->pc = 0x163300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937936));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163304u; }
        else if (ctx->pc != 0x163304u) { ctx->pc = 0x163304u; }
    }
    if (ctx->pc != 0x163304u) { return; }
    ctx->pc = 0x163304u;
    // 0x163304: 0x3c031000
    ctx->pc = 0x163304u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_163308:
    // 0x163308: 0x34632010
    ctx->pc = 0x163308u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x16330c: 0x0
    ctx->pc = 0x16330cu;
    // NOP
label_163310:
    // 0x163310: 0x8c620000
    ctx->pc = 0x163310u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x163314: 0x0
    ctx->pc = 0x163314u;
    // NOP
    // 0x163318: 0x0
    ctx->pc = 0x163318u;
    // NOP
    // 0x16331c: 0x0
    ctx->pc = 0x16331cu;
    // NOP
    // 0x163320: 0x0
    ctx->pc = 0x163320u;
    // NOP
    // 0x163324: 0x440fffa
    ctx->pc = 0x163324u;
    {
        const bool branch_taken_0x163324 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x163324) {
            ctx->pc = 0x163310u;
            goto label_163310;
        }
    }
    ctx->pc = 0x16332Cu;
    // 0x16332c: 0xc0554f6
    ctx->pc = 0x16332Cu;
    SET_GPR_U32(ctx, 31, 0x163334u);
    ctx->pc = 0x163330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1553D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x1553d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163334u; }
        else if (ctx->pc != 0x163334u) { ctx->pc = 0x163334u; }
    }
    if (ctx->pc != 0x163334u) { return; }
    ctx->pc = 0x163334u;
    // 0x163334: 0x220282d
    ctx->pc = 0x163334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163338: 0xc055184
    ctx->pc = 0x163338u;
    SET_GPR_U32(ctx, 31, 0x163340u);
    ctx->pc = 0x16333Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x154610u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x154610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163340u; }
        else if (ctx->pc != 0x163340u) { ctx->pc = 0x163340u; }
    }
    if (ctx->pc != 0x163340u) { return; }
    ctx->pc = 0x163340u;
    // 0x163340: 0xdfbf0050
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163344: 0xdfb20040
    ctx->pc = 0x163344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163348: 0xdfb10030
    ctx->pc = 0x163348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16334c: 0xdfb00020
    ctx->pc = 0x16334cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163350: 0x3e00008
    ctx->pc = 0x163350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163354u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1631E0u: goto label_1631e0;
            case 0x163210u: goto label_163210;
            case 0x1632D0u: goto label_1632d0;
            case 0x163308u: goto label_163308;
            case 0x163310u: goto label_163310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163358u;
}
