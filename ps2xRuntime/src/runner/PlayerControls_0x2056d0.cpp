#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerControls
// Address: 0x2056d0 - 0x205adc
void PlayerControls_0x2056d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2056d0u;

    // 0x2056d0: 0x27bdff60
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2056d4: 0xffbf0090
    ctx->pc = 0x2056d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2056d8: 0xffbe0080
    ctx->pc = 0x2056d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2056dc: 0xffb70070
    ctx->pc = 0x2056dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2056e0: 0xffb60060
    ctx->pc = 0x2056e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2056e4: 0xffb50050
    ctx->pc = 0x2056e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2056e8: 0xffb40040
    ctx->pc = 0x2056e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2056ec: 0xffb30030
    ctx->pc = 0x2056ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2056f0: 0xffb20020
    ctx->pc = 0x2056f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2056f4: 0xffb10010
    ctx->pc = 0x2056f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2056f8: 0xc08103a
    ctx->pc = 0x2056F8u;
    SET_GPR_U32(ctx, 31, 0x205700u);
    ctx->pc = 0x2056FCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2040E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ControlsUpdate_0x2040e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205700u; }
    }
    if (ctx->pc != 0x205700u) { return; }
    ctx->pc = 0x205700u;
    // 0x205700: 0x3c020031
    ctx->pc = 0x205700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205704: 0xac401d60
    ctx->pc = 0x205704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7520), GPR_U32(ctx, 0));
    // 0x205708: 0x3c020031
    ctx->pc = 0x205708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20570c: 0x8c421b04
    ctx->pc = 0x20570cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6916)));
    // 0x205710: 0x1040000b
    ctx->pc = 0x205710u;
    {
        const bool branch_taken_0x205710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205714u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205710) {
            ctx->pc = 0x205740u;
            goto label_205740;
        }
    }
    ctx->pc = 0x205718u;
    // 0x205718: 0x200202d
    ctx->pc = 0x205718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20571c: 0x0
    ctx->pc = 0x20571cu;
    // NOP
label_205720:
    // 0x205720: 0xc0816b8
    ctx->pc = 0x205720u;
    SET_GPR_U32(ctx, 31, 0x205728u);
    ctx->pc = 0x205724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerControl_0x205ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205728u; }
    }
    if (ctx->pc != 0x205728u) { return; }
    ctx->pc = 0x205728u;
    // 0x205728: 0x26100001
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20572c: 0x2a020004
    ctx->pc = 0x20572cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x205730: 0x1440fffb
    ctx->pc = 0x205730u;
    {
        const bool branch_taken_0x205730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205734u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205730) {
            ctx->pc = 0x205720u;
            goto label_205720;
        }
    }
    ctx->pc = 0x205738u;
    // 0x205738: 0x100000dd
    ctx->pc = 0x205738u;
    {
        const bool branch_taken_0x205738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20573Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x205738) {
            ctx->pc = 0x205AB0u;
            goto label_205ab0;
        }
    }
    ctx->pc = 0x205740u;
label_205740:
    // 0x205740: 0x3c030031
    ctx->pc = 0x205740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x205744: 0x24020190
    ctx->pc = 0x205744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 400));
    // 0x205748: 0xc0812c6
    ctx->pc = 0x205748u;
    SET_GPR_U32(ctx, 31, 0x205750u);
    ctx->pc = 0x20574Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    ctx->pc = 0x204B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadControls_0x204b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205750u; }
    }
    if (ctx->pc != 0x205750u) { return; }
    ctx->pc = 0x205750u;
    // 0x205750: 0xc081a92
    ctx->pc = 0x205750u;
    SET_GPR_U32(ctx, 31, 0x205758u);
    ctx->pc = 0x205754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_vibes_0x206a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205758u; }
    }
    if (ctx->pc != 0x205758u) { return; }
    ctx->pc = 0x205758u;
    // 0x205758: 0x3c150031
    ctx->pc = 0x205758u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x20575c: 0x2411003c
    ctx->pc = 0x20575cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 60));
    // 0x205760: 0x3c020031
    ctx->pc = 0x205760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205764: 0x24541aa0
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6816));
    // 0x205768: 0x3c020031
    ctx->pc = 0x205768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20576c: 0x24571bac
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7084));
    // 0x205770: 0x3c020031
    ctx->pc = 0x205770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205774: 0x24561bb0
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7088));
    // 0x205778: 0x2a0102d
    ctx->pc = 0x205778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20577c: 0x24521b90
    ctx->pc = 0x20577cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x205780: 0x3c02003c
    ctx->pc = 0x205780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205784: 0x245ec050
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294950992));
    // 0x205788: 0x3c020031
    ctx->pc = 0x205788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20578c: 0x24531bb8
    ctx->pc = 0x20578cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 7096));
    // 0x205790: 0x101080
    ctx->pc = 0x205790u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205794: 0x0
    ctx->pc = 0x205794u;
    // NOP
label_205798:
    // 0x205798: 0x3c030031
    ctx->pc = 0x205798u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20579c: 0x24630e90
    ctx->pc = 0x20579cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3728));
    // 0x2057a0: 0x431021
    ctx->pc = 0x2057a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2057a4: 0x8c480000
    ctx->pc = 0x2057a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2057a8: 0x2402ffff
    ctx->pc = 0x2057a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2057ac: 0x11020082
    ctx->pc = 0x2057ACu;
    {
        const bool branch_taken_0x2057ac = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2057B0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 7056));
        if (branch_taken_0x2057ac) {
            ctx->pc = 0x2059B8u;
            goto label_2059b8;
        }
    }
    ctx->pc = 0x2057B4u;
    // 0x2057b4: 0x2113018
    ctx->pc = 0x2057b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2057b8: 0xc71021
    ctx->pc = 0x2057b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2057bc: 0x8c420000
    ctx->pc = 0x2057bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2057c0: 0x1440007e
    ctx->pc = 0x2057C0u;
    {
        const bool branch_taken_0x2057c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2057C4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2057c0) {
            ctx->pc = 0x2059BCu;
            goto label_2059bc;
        }
    }
    ctx->pc = 0x2057C8u;
    // 0x2057c8: 0xe62021
    ctx->pc = 0x2057c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2057cc: 0x82880
    ctx->pc = 0x2057ccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), 2));
    // 0x2057d0: 0x3c03003c
    ctx->pc = 0x2057d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2057d4: 0x2463b2c0
    ctx->pc = 0x2057d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x2057d8: 0xa31021
    ctx->pc = 0x2057d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2057dc: 0x8c430000
    ctx->pc = 0x2057dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2057e0: 0xac830004
    ctx->pc = 0x2057e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2057e4: 0x3c02003c
    ctx->pc = 0x2057e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2057e8: 0x2442b320
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x2057ec: 0xa21021
    ctx->pc = 0x2057ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2057f0: 0x8c420000
    ctx->pc = 0x2057f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2057f4: 0xac820008
    ctx->pc = 0x2057f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2057f8: 0x3c02003c
    ctx->pc = 0x2057f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2057fc: 0x2442b340
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x205800: 0xa21021
    ctx->pc = 0x205800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x205804: 0x8c420000
    ctx->pc = 0x205804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205808: 0xac82000c
    ctx->pc = 0x205808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x20580c: 0x306200f0
    ctx->pc = 0x20580cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
    // 0x205810: 0x21082
    ctx->pc = 0x205810u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x205814: 0x541021
    ctx->pc = 0x205814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x205818: 0x8c470000
    ctx->pc = 0x205818u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20581c: 0x3063000f
    ctx->pc = 0x20581cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x205820: 0x31880
    ctx->pc = 0x205820u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x205824: 0x741821
    ctx->pc = 0x205824u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x205828: 0x3c020031
    ctx->pc = 0x205828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20582c: 0x24421ce0
    ctx->pc = 0x20582cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7392));
    // 0x205830: 0xa21021
    ctx->pc = 0x205830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x205834: 0x3c013ea8
    ctx->pc = 0x205834u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16040 << 16));
    // 0x205838: 0x3421f5c3
    ctx->pc = 0x205838u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62915));
    // 0x20583c: 0x44810000
    ctx->pc = 0x20583cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x205840: 0xc4410000
    ctx->pc = 0x205840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205844: 0x46010034
    ctx->pc = 0x205844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205848: 0x0
    ctx->pc = 0x205848u;
    // NOP
    // 0x20584c: 0x4500000a
    ctx->pc = 0x20584Cu;
    {
        const bool branch_taken_0x20584c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205850u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x20584c) {
            ctx->pc = 0x205878u;
            goto label_205878;
        }
    }
    ctx->pc = 0x205854u;
    // 0x205854: 0xd71821
    ctx->pc = 0x205854u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x205858: 0x3c020031
    ctx->pc = 0x205858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20585c: 0x24421d00
    ctx->pc = 0x20585cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7424));
    // 0x205860: 0xa21021
    ctx->pc = 0x205860u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x205864: 0xc4400000
    ctx->pc = 0x205864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205868: 0xe4600000
    ctx->pc = 0x205868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20586c: 0xd61021
    ctx->pc = 0x20586cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x205870: 0x10000010
    ctx->pc = 0x205870u;
    {
        const bool branch_taken_0x205870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205874u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x205870) {
            ctx->pc = 0x2058B4u;
            goto label_2058b4;
        }
    }
    ctx->pc = 0x205878u;
label_205878:
    // 0x205878: 0x2112018
    ctx->pc = 0x205878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20587c: 0x972821
    ctx->pc = 0x20587cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x205880: 0x31880
    ctx->pc = 0x205880u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x205884: 0x2402001c
    ctx->pc = 0x205884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x205888: 0xe21018
    ctx->pc = 0x205888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20588c: 0x621821
    ctx->pc = 0x20588cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205890: 0x3c06003c
    ctx->pc = 0x205890u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x205894: 0x24c6bf88
    ctx->pc = 0x205894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950792));
    // 0x205898: 0x661021
    ctx->pc = 0x205898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20589c: 0xc4400000
    ctx->pc = 0x20589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2058a0: 0xe4a00000
    ctx->pc = 0x2058a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2058a4: 0x962021
    ctx->pc = 0x2058a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2058a8: 0x7e1821
    ctx->pc = 0x2058a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2058ac: 0xc4600000
    ctx->pc = 0x2058acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2058b0: 0xe4800000
    ctx->pc = 0x2058b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2058b4:
    // 0x2058b4: 0x26a61b90
    ctx->pc = 0x2058b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 7056));
    // 0x2058b8: 0x2112018
    ctx->pc = 0x2058b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2058bc: 0xc41021
    ctx->pc = 0x2058bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2058c0: 0x8c43002c
    ctx->pc = 0x2058c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2058c4: 0x24020003
    ctx->pc = 0x2058c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2058c8: 0x1462004f
    ctx->pc = 0x2058C8u;
    {
        const bool branch_taken_0x2058c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2058CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 7056));
        if (branch_taken_0x2058c8) {
            ctx->pc = 0x205A08u;
            goto label_205a08;
        }
    }
    ctx->pc = 0x2058D0u;
    // 0x2058d0: 0x3c020031
    ctx->pc = 0x2058d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2058d4: 0x24421d20
    ctx->pc = 0x2058d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7456));
    // 0x2058d8: 0x82880
    ctx->pc = 0x2058d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), 2));
    // 0x2058dc: 0xa21021
    ctx->pc = 0x2058dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2058e0: 0xc4410000
    ctx->pc = 0x2058e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2058e4: 0x3c013f00
    ctx->pc = 0x2058e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2058e8: 0x44810000
    ctx->pc = 0x2058e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2058ec: 0x46010034
    ctx->pc = 0x2058ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2058f0: 0x0
    ctx->pc = 0x2058f0u;
    // NOP
    // 0x2058f4: 0x45000009
    ctx->pc = 0x2058F4u;
    {
        const bool branch_taken_0x2058f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2058F8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x2058f4) {
            ctx->pc = 0x20591Cu;
            goto label_20591c;
        }
    }
    ctx->pc = 0x2058FCu;
    // 0x2058fc: 0x3c020031
    ctx->pc = 0x2058fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205900: 0x24421d40
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7488));
    // 0x205904: 0xa21021
    ctx->pc = 0x205904u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x205908: 0xc4400000
    ctx->pc = 0x205908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20590c: 0xe4600024
    ctx->pc = 0x20590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x205910: 0x931021
    ctx->pc = 0x205910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x205914: 0x1000003b
    ctx->pc = 0x205914u;
    {
        const bool branch_taken_0x205914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205918u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x205914) {
            ctx->pc = 0x205A04u;
            goto label_205a04;
        }
    }
    ctx->pc = 0x20591Cu;
label_20591c:
    // 0x20591c: 0x101080
    ctx->pc = 0x20591cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205920: 0x3c030031
    ctx->pc = 0x205920u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x205924: 0x24630e90
    ctx->pc = 0x205924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3728));
    // 0x205928: 0x431021
    ctx->pc = 0x205928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20592c: 0x8c430000
    ctx->pc = 0x20592cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205930: 0x3c02003c
    ctx->pc = 0x205930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205934: 0x2442b300
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x205938: 0x31880
    ctx->pc = 0x205938u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20593c: 0x621821
    ctx->pc = 0x20593cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205940: 0x8c630000
    ctx->pc = 0x205940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205944: 0x10600018
    ctx->pc = 0x205944u;
    {
        const bool branch_taken_0x205944 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x205948u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
        if (branch_taken_0x205944) {
            ctx->pc = 0x2059A8u;
            goto label_2059a8;
        }
    }
    ctx->pc = 0x20594Cu;
    // 0x20594c: 0x21082
    ctx->pc = 0x20594cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x205950: 0x541021
    ctx->pc = 0x205950u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x205954: 0x8c450000
    ctx->pc = 0x205954u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205958: 0x3062000f
    ctx->pc = 0x205958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x20595c: 0x21080
    ctx->pc = 0x20595cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x205960: 0x541021
    ctx->pc = 0x205960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x205964: 0x8c430000
    ctx->pc = 0x205964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205968: 0x2112018
    ctx->pc = 0x205968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20596c: 0x2443021
    ctx->pc = 0x20596cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x205970: 0x31880
    ctx->pc = 0x205970u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x205974: 0x2402001c
    ctx->pc = 0x205974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x205978: 0xa22818
    ctx->pc = 0x205978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20597c: 0x651821
    ctx->pc = 0x20597cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x205980: 0x3c05003c
    ctx->pc = 0x205980u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x205984: 0x24a5bf88
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950792));
    // 0x205988: 0x651021
    ctx->pc = 0x205988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20598c: 0xc4400000
    ctx->pc = 0x20598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205990: 0xe4c00024
    ctx->pc = 0x205990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x205994: 0x932021
    ctx->pc = 0x205994u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x205998: 0x7e1821
    ctx->pc = 0x205998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x20599c: 0xc4600000
    ctx->pc = 0x20599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2059a0: 0x10000018
    ctx->pc = 0x2059A0u;
    {
        const bool branch_taken_0x2059a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2059A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2059a0) {
            ctx->pc = 0x205A04u;
            goto label_205a04;
        }
    }
    ctx->pc = 0x2059A8u;
label_2059a8:
    // 0x2059a8: 0x2111818
    ctx->pc = 0x2059a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2059ac: 0x731021
    ctx->pc = 0x2059acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2059b0: 0x10000014
    ctx->pc = 0x2059B0u;
    {
        const bool branch_taken_0x2059b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2059B4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2059b0) {
            ctx->pc = 0x205A04u;
            goto label_205a04;
        }
    }
    ctx->pc = 0x2059B8u;
label_2059b8:
    // 0x2059b8: 0x2111018
    ctx->pc = 0x2059b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2059bc:
    // 0x2059bc: 0x521821
    ctx->pc = 0x2059bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2059c0: 0x8c620000
    ctx->pc = 0x2059c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2059c4: 0x10400002
    ctx->pc = 0x2059C4u;
    {
        const bool branch_taken_0x2059c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2059C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2059c4) {
            ctx->pc = 0x2059D0u;
            goto label_2059d0;
        }
    }
    ctx->pc = 0x2059CCu;
    // 0x2059cc: 0xac620000
    ctx->pc = 0x2059ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2059d0:
    // 0x2059d0: 0x2111818
    ctx->pc = 0x2059d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2059d4: 0x2431021
    ctx->pc = 0x2059d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2059d8: 0xac400004
    ctx->pc = 0x2059d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2059dc: 0xac400008
    ctx->pc = 0x2059dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2059e0: 0xac40000c
    ctx->pc = 0x2059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2059e4: 0x771021
    ctx->pc = 0x2059e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2059e8: 0xac400000
    ctx->pc = 0x2059e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2059ec: 0x761021
    ctx->pc = 0x2059ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2059f0: 0xac400000
    ctx->pc = 0x2059f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2059f4: 0x2431021
    ctx->pc = 0x2059f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2059f8: 0xac400024
    ctx->pc = 0x2059f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2059fc: 0x731821
    ctx->pc = 0x2059fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x205a00: 0xac600000
    ctx->pc = 0x205a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_205a04:
    // 0x205a04: 0x26a51b90
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 7056));
label_205a08:
    // 0x205a08: 0x2112018
    ctx->pc = 0x205a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205a0c: 0x24a20010
    ctx->pc = 0x205a0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
    // 0x205a10: 0x821821
    ctx->pc = 0x205a10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205a14: 0x8c620000
    ctx->pc = 0x205a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205a18: 0x18400006
    ctx->pc = 0x205A18u;
    {
        const bool branch_taken_0x205a18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205A1Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x205a18) {
            ctx->pc = 0x205A34u;
            goto label_205a34;
        }
    }
    ctx->pc = 0x205A20u;
    // 0x205a20: 0xac400014
    ctx->pc = 0x205a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x205a24: 0x8c620000
    ctx->pc = 0x205a24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205a28: 0x2442ffff
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205a2c: 0x1000000b
    ctx->pc = 0x205A2Cu;
    {
        const bool branch_taken_0x205a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205A30u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x205a2c) {
            ctx->pc = 0x205A5Cu;
            goto label_205a5c;
        }
    }
    ctx->pc = 0x205A34u;
label_205a34:
    // 0x205a34: 0x3c020031
    ctx->pc = 0x205a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205a38: 0x24421b20
    ctx->pc = 0x205a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6944));
    // 0x205a3c: 0x101880
    ctx->pc = 0x205a3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205a40: 0x621821
    ctx->pc = 0x205a40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205a44: 0x200202d
    ctx->pc = 0x205a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a48: 0xc08120c
    ctx->pc = 0x205A48u;
    SET_GPR_U32(ctx, 31, 0x205A50u);
    ctx->pc = 0x205A4Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x204830u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckSpecials_0x204830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A50u; }
    }
    if (ctx->pc != 0x205A50u) { return; }
    ctx->pc = 0x205A50u;
    // 0x205a50: 0x2112018
    ctx->pc = 0x205a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205a54: 0x921821
    ctx->pc = 0x205a54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x205a58: 0xac620014
    ctx->pc = 0x205a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_205a5c:
    // 0x205a5c: 0x26a61b90
    ctx->pc = 0x205a5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 7056));
    // 0x205a60: 0x2112018
    ctx->pc = 0x205a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205a64: 0x24c20014
    ctx->pc = 0x205a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 20));
    // 0x205a68: 0x822821
    ctx->pc = 0x205a68u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x205a6c: 0x8ca20000
    ctx->pc = 0x205a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205a70: 0x10400005
    ctx->pc = 0x205A70u;
    {
        const bool branch_taken_0x205a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205A74u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x205a70) {
            ctx->pc = 0x205A88u;
            goto label_205a88;
        }
    }
    ctx->pc = 0x205A78u;
    // 0x205a78: 0x2402000a
    ctx->pc = 0x205a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x205a7c: 0xac620010
    ctx->pc = 0x205a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x205a80: 0x8ca20000
    ctx->pc = 0x205a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205a84: 0xac620018
    ctx->pc = 0x205a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_205a88:
    // 0x205a88: 0x26100001
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x205a8c: 0x2a020004
    ctx->pc = 0x205a8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x205a90: 0x1440ff41
    ctx->pc = 0x205A90u;
    {
        const bool branch_taken_0x205a90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205A94u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x205a90) {
            ctx->pc = 0x205798u;
            goto label_205798;
        }
    }
    ctx->pc = 0x205A98u;
    // 0x205a98: 0xc082716
    ctx->pc = 0x205A98u;
    SET_GPR_U32(ctx, 31, 0x205AA0u);
    ctx->pc = 0x209C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_memcard_0x209c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205AA0u; }
    }
    if (ctx->pc != 0x205AA0u) { return; }
    ctx->pc = 0x205AA0u;
    // 0x205aa0: 0x3c030031
    ctx->pc = 0x205aa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x205aa4: 0x240201f3
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 499));
    // 0x205aa8: 0xac620f0c
    ctx->pc = 0x205aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x205aac: 0xdfbf0090
    ctx->pc = 0x205aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_205ab0:
    // 0x205ab0: 0xdfbe0080
    ctx->pc = 0x205ab0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x205ab4: 0xdfb70070
    ctx->pc = 0x205ab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205ab8: 0xdfb60060
    ctx->pc = 0x205ab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205abc: 0xdfb50050
    ctx->pc = 0x205abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205ac0: 0xdfb40040
    ctx->pc = 0x205ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205ac4: 0xdfb30030
    ctx->pc = 0x205ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205ac8: 0xdfb20020
    ctx->pc = 0x205ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205acc: 0xdfb10010
    ctx->pc = 0x205accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205ad0: 0xdfb00000
    ctx->pc = 0x205ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205ad4: 0x3e00008
    ctx->pc = 0x205AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205AD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205720u: goto label_205720;
            case 0x205740u: goto label_205740;
            case 0x205798u: goto label_205798;
            case 0x205878u: goto label_205878;
            case 0x2058B4u: goto label_2058b4;
            case 0x20591Cu: goto label_20591c;
            case 0x2059A8u: goto label_2059a8;
            case 0x2059B8u: goto label_2059b8;
            case 0x2059BCu: goto label_2059bc;
            case 0x2059D0u: goto label_2059d0;
            case 0x205A04u: goto label_205a04;
            case 0x205A08u: goto label_205a08;
            case 0x205A34u: goto label_205a34;
            case 0x205A5Cu: goto label_205a5c;
            case 0x205A88u: goto label_205a88;
            case 0x205AB0u: goto label_205ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205ADCu;
}
