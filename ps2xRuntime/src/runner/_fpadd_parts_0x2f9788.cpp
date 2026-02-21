#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fpadd_parts
// Address: 0x2f9788 - 0x2f99bc
void _fpadd_parts_0x2f9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9788u;

    // 0x2f9788: 0x80482d
    ctx->pc = 0x2f9788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f978c: 0x8d240000
    ctx->pc = 0x2f978cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f9790: 0x2c820002
    ctx->pc = 0x2f9790u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x2f9794: 0x50400003
    ctx->pc = 0x2F9794u;
    {
        const bool branch_taken_0x2f9794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f9794) {
            ctx->pc = 0x2F9798u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x2F97A4u;
            goto label_2f97a4;
        }
    }
    ctx->pc = 0x2F979Cu;
label_2f979c:
    // 0x2f979c: 0x3e00008
    ctx->pc = 0x2F979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F979Cu: goto label_2f979c;
            case 0x2F97A4u: goto label_2f97a4;
            case 0x2F97B0u: goto label_2f97b0;
            case 0x2F97B8u: goto label_2f97b8;
            case 0x2F97E0u: goto label_2f97e0;
            case 0x2F9830u: goto label_2f9830;
            case 0x2F9870u: goto label_2f9870;
            case 0x2F9894u: goto label_2f9894;
            case 0x2F989Cu: goto label_2f989c;
            case 0x2F98A8u: goto label_2f98a8;
            case 0x2F98CCu: goto label_2f98cc;
            case 0x2F98E4u: goto label_2f98e4;
            case 0x2F98F0u: goto label_2f98f0;
            case 0x2F9904u: goto label_2f9904;
            case 0x2F991Cu: goto label_2f991c;
            case 0x2F992Cu: goto label_2f992c;
            case 0x2F9950u: goto label_2f9950;
            case 0x2F997Cu: goto label_2f997c;
            case 0x2F998Cu: goto label_2f998c;
            case 0x2F99B4u: goto label_2f99b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F97A4u;
label_2f97a4:
    // 0x2f97a4: 0x2c620002
    ctx->pc = 0x2f97a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2f97a8: 0x10400003
    ctx->pc = 0x2F97A8u;
    {
        const bool branch_taken_0x2f97a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F97ACu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x2f97a8) {
            ctx->pc = 0x2F97B8u;
            goto label_2f97b8;
        }
    }
    ctx->pc = 0x2F97B0u;
label_2f97b0:
    // 0x2f97b0: 0x3e00008
    ctx->pc = 0x2F97B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F979Cu: goto label_2f979c;
            case 0x2F97A4u: goto label_2f97a4;
            case 0x2F97B0u: goto label_2f97b0;
            case 0x2F97B8u: goto label_2f97b8;
            case 0x2F97E0u: goto label_2f97e0;
            case 0x2F9830u: goto label_2f9830;
            case 0x2F9870u: goto label_2f9870;
            case 0x2F9894u: goto label_2f9894;
            case 0x2F989Cu: goto label_2f989c;
            case 0x2F98A8u: goto label_2f98a8;
            case 0x2F98CCu: goto label_2f98cc;
            case 0x2F98E4u: goto label_2f98e4;
            case 0x2F98F0u: goto label_2f98f0;
            case 0x2F9904u: goto label_2f9904;
            case 0x2F991Cu: goto label_2f991c;
            case 0x2F992Cu: goto label_2f992c;
            case 0x2F9950u: goto label_2f9950;
            case 0x2F997Cu: goto label_2f997c;
            case 0x2F998Cu: goto label_2f998c;
            case 0x2F99B4u: goto label_2f99b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F97B8u;
label_2f97b8:
    // 0x2f97b8: 0x14400009
    ctx->pc = 0x2F97B8u;
    {
        const bool branch_taken_0x2f97b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F97BCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2f97b8) {
            ctx->pc = 0x2F97E0u;
            goto label_2f97e0;
        }
    }
    ctx->pc = 0x2F97C0u;
    // 0x2f97c0: 0x1440fff6
    ctx->pc = 0x2F97C0u;
    {
        const bool branch_taken_0x2f97c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f97c0) {
            ctx->pc = 0x2F979Cu;
            goto label_2f979c;
        }
    }
    ctx->pc = 0x2F97C8u;
    // 0x2f97c8: 0x8ca30004
    ctx->pc = 0x2f97c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f97cc: 0x8d220004
    ctx->pc = 0x2f97ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2f97d0: 0x1043fff2
    ctx->pc = 0x2F97D0u;
    {
        const bool branch_taken_0x2f97d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2F97D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
        if (branch_taken_0x2f97d0) {
            ctx->pc = 0x2F979Cu;
            goto label_2f979c;
        }
    }
    ctx->pc = 0x2F97D8u;
    // 0x2f97d8: 0x3e00008
    ctx->pc = 0x2F97D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15888));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F979Cu: goto label_2f979c;
            case 0x2F97A4u: goto label_2f97a4;
            case 0x2F97B0u: goto label_2f97b0;
            case 0x2F97B8u: goto label_2f97b8;
            case 0x2F97E0u: goto label_2f97e0;
            case 0x2F9830u: goto label_2f9830;
            case 0x2F9870u: goto label_2f9870;
            case 0x2F9894u: goto label_2f9894;
            case 0x2F989Cu: goto label_2f989c;
            case 0x2F98A8u: goto label_2f98a8;
            case 0x2F98CCu: goto label_2f98cc;
            case 0x2F98E4u: goto label_2f98e4;
            case 0x2F98F0u: goto label_2f98f0;
            case 0x2F9904u: goto label_2f9904;
            case 0x2F991Cu: goto label_2f991c;
            case 0x2F992Cu: goto label_2f992c;
            case 0x2F9950u: goto label_2f9950;
            case 0x2F997Cu: goto label_2f997c;
            case 0x2F998Cu: goto label_2f998c;
            case 0x2F99B4u: goto label_2f99b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F97E0u;
label_2f97e0:
    // 0x2f97e0: 0x1040fff3
    ctx->pc = 0x2F97E0u;
    {
        const bool branch_taken_0x2f97e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F97E4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f97e0) {
            ctx->pc = 0x2F97B0u;
            goto label_2f97b0;
        }
    }
    ctx->pc = 0x2F97E8u;
    // 0x2f97e8: 0x14400011
    ctx->pc = 0x2F97E8u;
    {
        const bool branch_taken_0x2f97e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F97ECu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2f97e8) {
            ctx->pc = 0x2F9830u;
            goto label_2f9830;
        }
    }
    ctx->pc = 0x2F97F0u;
    // 0x2f97f0: 0x1440ffea
    ctx->pc = 0x2F97F0u;
    {
        const bool branch_taken_0x2f97f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f97f0) {
            ctx->pc = 0x2F979Cu;
            goto label_2f979c;
        }
    }
    ctx->pc = 0x2F97F8u;
    // 0x2f97f8: 0x69220007
    ctx->pc = 0x2f97f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2f97fc: 0x6d220000
    ctx->pc = 0x2f97fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2f9800: 0x6923000f
    ctx->pc = 0x2f9800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2f9804: 0x6d230008
    ctx->pc = 0x2f9804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2f9808: 0xb0c20007
    ctx->pc = 0x2f9808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f980c: 0xb4c20000
    ctx->pc = 0x2f980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9810: 0xb0c3000f
    ctx->pc = 0x2f9810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9814: 0xb4c30008
    ctx->pc = 0x2f9814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f9818: 0x8d230004
    ctx->pc = 0x2f9818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2f981c: 0xc0102d
    ctx->pc = 0x2f981cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9820: 0x8ca40004
    ctx->pc = 0x2f9820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9824: 0x641824
    ctx->pc = 0x2f9824u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f9828: 0x3e00008
    ctx->pc = 0x2F9828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F982Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F979Cu: goto label_2f979c;
            case 0x2F97A4u: goto label_2f97a4;
            case 0x2F97B0u: goto label_2f97b0;
            case 0x2F97B8u: goto label_2f97b8;
            case 0x2F97E0u: goto label_2f97e0;
            case 0x2F9830u: goto label_2f9830;
            case 0x2F9870u: goto label_2f9870;
            case 0x2F9894u: goto label_2f9894;
            case 0x2F989Cu: goto label_2f989c;
            case 0x2F98A8u: goto label_2f98a8;
            case 0x2F98CCu: goto label_2f98cc;
            case 0x2F98E4u: goto label_2f98e4;
            case 0x2F98F0u: goto label_2f98f0;
            case 0x2F9904u: goto label_2f9904;
            case 0x2F991Cu: goto label_2f991c;
            case 0x2F992Cu: goto label_2f992c;
            case 0x2F9950u: goto label_2f9950;
            case 0x2F997Cu: goto label_2f997c;
            case 0x2F998Cu: goto label_2f998c;
            case 0x2F99B4u: goto label_2f99b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9830u;
label_2f9830:
    // 0x2f9830: 0x1040ffdf
    ctx->pc = 0x2F9830u;
    {
        const bool branch_taken_0x2f9830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2f9830) {
            ctx->pc = 0x2F97B0u;
            goto label_2f97b0;
        }
    }
    ctx->pc = 0x2F9838u;
    // 0x2f9838: 0x8d270008
    ctx->pc = 0x2f9838u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2f983c: 0x8ca80008
    ctx->pc = 0x2f983cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f9840: 0x8d2b000c
    ctx->pc = 0x2f9840u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2f9844: 0xe81823
    ctx->pc = 0x2f9844u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f9848: 0x43102a
    ctx->pc = 0x2f9848u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2f984c: 0x32023
    ctx->pc = 0x2f984cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2f9850: 0x82180a
    ctx->pc = 0x2f9850u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x2f9854: 0x28630020
    ctx->pc = 0x2f9854u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 32));
    // 0x2f9858: 0x1060001c
    ctx->pc = 0x2F9858u;
    {
        const bool branch_taken_0x2f9858 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F985Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
        if (branch_taken_0x2f9858) {
            ctx->pc = 0x2F98CCu;
            goto label_2f98cc;
        }
    }
    ctx->pc = 0x2F9860u;
    // 0x2f9860: 0x107102a
    ctx->pc = 0x2f9860u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x2f9864: 0x1040000b
    ctx->pc = 0x2F9864u;
    {
        const bool branch_taken_0x2f9864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9868u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x2f9864) {
            ctx->pc = 0x2F9894u;
            goto label_2f9894;
        }
    }
    ctx->pc = 0x2F986Cu;
    // 0x2f986c: 0x8ca50004
    ctx->pc = 0x2f986cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f9870:
    // 0x2f9870: 0xa1042
    ctx->pc = 0x2f9870u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 10), 1));
    // 0x2f9874: 0x25080001
    ctx->pc = 0x2f9874u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f9878: 0x31430001
    ctx->pc = 0x2f9878u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x2f987c: 0x107202a
    ctx->pc = 0x2f987cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x2f9880: 0x625025
    ctx->pc = 0x2f9880u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9884: 0x1480fffa
    ctx->pc = 0x2F9884u;
    {
        const bool branch_taken_0x2f9884 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f9884) {
            ctx->pc = 0x2F9870u;
            goto label_2f9870;
        }
    }
    ctx->pc = 0x2F988Cu;
    // 0x2f988c: 0x10000003
    ctx->pc = 0x2F988Cu;
    {
        const bool branch_taken_0x2f988c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9890u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
        if (branch_taken_0x2f988c) {
            ctx->pc = 0x2F989Cu;
            goto label_2f989c;
        }
    }
    ctx->pc = 0x2F9894u;
label_2f9894:
    // 0x2f9894: 0x8ca50004
    ctx->pc = 0x2f9894u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9898: 0xe8102a
    ctx->pc = 0x2f9898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_2f989c:
    // 0x2f989c: 0x10400014
    ctx->pc = 0x2F989Cu;
    {
        const bool branch_taken_0x2f989c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f989c) {
            ctx->pc = 0x2F98F0u;
            goto label_2f98f0;
        }
    }
    ctx->pc = 0x2F98A4u;
    // 0x2f98a4: 0x1073823
    ctx->pc = 0x2f98a4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2f98a8:
    // 0x2f98a8: 0xb1842
    ctx->pc = 0x2f98a8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 1));
    // 0x2f98ac: 0x31620001
    ctx->pc = 0x2f98acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x2f98b0: 0x435825
    ctx->pc = 0x2f98b0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f98b4: 0x24e7ffff
    ctx->pc = 0x2f98b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f98b8: 0x0
    ctx->pc = 0x2f98b8u;
    // NOP
    // 0x2f98bc: 0x14e0fffa
    ctx->pc = 0x2F98BCu;
    {
        const bool branch_taken_0x2f98bc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f98bc) {
            ctx->pc = 0x2F98A8u;
            goto label_2f98a8;
        }
    }
    ctx->pc = 0x2F98C4u;
    // 0x2f98c4: 0x1000000a
    ctx->pc = 0x2F98C4u;
    {
        const bool branch_taken_0x2f98c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F98C8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f98c4) {
            ctx->pc = 0x2F98F0u;
            goto label_2f98f0;
        }
    }
    ctx->pc = 0x2F98CCu;
label_2f98cc:
    // 0x2f98cc: 0x107102a
    ctx->pc = 0x2f98ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x2f98d0: 0x10400004
    ctx->pc = 0x2F98D0u;
    {
        const bool branch_taken_0x2f98d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F98D4u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x2f98d0) {
            ctx->pc = 0x2F98E4u;
            goto label_2f98e4;
        }
    }
    ctx->pc = 0x2F98D8u;
    // 0x2f98d8: 0x502d
    ctx->pc = 0x2f98d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98dc: 0x10000004
    ctx->pc = 0x2F98DCu;
    {
        const bool branch_taken_0x2f98dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F98E0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x2f98dc) {
            ctx->pc = 0x2F98F0u;
            goto label_2f98f0;
        }
    }
    ctx->pc = 0x2F98E4u;
label_2f98e4:
    // 0x2f98e4: 0x100382d
    ctx->pc = 0x2f98e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98e8: 0x8ca50004
    ctx->pc = 0x2f98e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f98ec: 0x582d
    ctx->pc = 0x2f98ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f98f0:
    // 0x2f98f0: 0x11250022
    ctx->pc = 0x2F98F0u;
    {
        const bool branch_taken_0x2f98f0 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F98F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        if (branch_taken_0x2f98f0) {
            ctx->pc = 0x2F997Cu;
            goto label_2f997c;
        }
    }
    ctx->pc = 0x2F98F8u;
    // 0x2f98f8: 0x15200002
    ctx->pc = 0x2F98F8u;
    {
        const bool branch_taken_0x2f98f8 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F98FCu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        if (branch_taken_0x2f98f8) {
            ctx->pc = 0x2F9904u;
            goto label_2f9904;
        }
    }
    ctx->pc = 0x2F9900u;
    // 0x2f9900: 0x16a1023
    ctx->pc = 0x2f9900u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_2f9904:
    // 0x2f9904: 0x4400005
    ctx->pc = 0x2F9904u;
    {
        const bool branch_taken_0x2f9904 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F9908u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x2f9904) {
            ctx->pc = 0x2F991Cu;
            goto label_2f991c;
        }
    }
    ctx->pc = 0x2F990Cu;
    // 0x2f990c: 0xacc70008
    ctx->pc = 0x2f990cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f9910: 0xacc2000c
    ctx->pc = 0x2f9910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2f9914: 0x10000005
    ctx->pc = 0x2F9914u;
    {
        const bool branch_taken_0x2f9914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9918u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2f9914) {
            ctx->pc = 0x2F992Cu;
            goto label_2f992c;
        }
    }
    ctx->pc = 0x2F991Cu;
label_2f991c:
    // 0x2f991c: 0xacc70008
    ctx->pc = 0x2f991cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f9920: 0x24020001
    ctx->pc = 0x2f9920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9924: 0xacc3000c
    ctx->pc = 0x2f9924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2f9928: 0xacc20004
    ctx->pc = 0x2f9928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2f992c:
    // 0x2f992c: 0x8cc5000c
    ctx->pc = 0x2f992cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9930: 0x3c023fff
    ctx->pc = 0x2f9930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x2f9934: 0x3442fffe
    ctx->pc = 0x2f9934u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x2f9938: 0x24a3ffff
    ctx->pc = 0x2f9938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f993c: 0x43102b
    ctx->pc = 0x2f993cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9940: 0x14400012
    ctx->pc = 0x2F9940u;
    {
        const bool branch_taken_0x2f9940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9944u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9940) {
            ctx->pc = 0x2F998Cu;
            goto label_2f998c;
        }
    }
    ctx->pc = 0x2F9948u;
    // 0x2f9948: 0x3c053fff
    ctx->pc = 0x2f9948u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16383 << 16));
    // 0x2f994c: 0x34a5fffe
    ctx->pc = 0x2f994cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
label_2f9950:
    // 0x2f9950: 0x8cc20008
    ctx->pc = 0x2f9950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f9954: 0x72040
    ctx->pc = 0x2f9954u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 1));
    // 0x2f9958: 0x2483ffff
    ctx->pc = 0x2f9958u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f995c: 0xacc4000c
    ctx->pc = 0x2f995cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2f9960: 0x2442ffff
    ctx->pc = 0x2f9960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9964: 0xa3182b
    ctx->pc = 0x2f9964u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f9968: 0xacc20008
    ctx->pc = 0x2f9968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2f996c: 0x1060fff8
    ctx->pc = 0x2F996Cu;
    {
        const bool branch_taken_0x2f996c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9970u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f996c) {
            ctx->pc = 0x2F9950u;
            goto label_2f9950;
        }
    }
    ctx->pc = 0x2F9974u;
    // 0x2f9974: 0x10000005
    ctx->pc = 0x2F9974u;
    {
        const bool branch_taken_0x2f9974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9978u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9974) {
            ctx->pc = 0x2F998Cu;
            goto label_2f998c;
        }
    }
    ctx->pc = 0x2F997Cu;
label_2f997c:
    // 0x2f997c: 0xacc90004
    ctx->pc = 0x2f997cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x2f9980: 0xacc70008
    ctx->pc = 0x2f9980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2f9984: 0x40282d
    ctx->pc = 0x2f9984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9988: 0xacc2000c
    ctx->pc = 0x2f9988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2f998c:
    // 0x2f998c: 0x24020003
    ctx->pc = 0x2f998cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9990: 0x4a10008
    ctx->pc = 0x2F9990u;
    {
        const bool branch_taken_0x2f9990 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F9994u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9990) {
            ctx->pc = 0x2F99B4u;
            goto label_2f99b4;
        }
    }
    ctx->pc = 0x2F9998u;
    // 0x2f9998: 0x8cc20008
    ctx->pc = 0x2f9998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f999c: 0x52042
    ctx->pc = 0x2f999cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2f99a0: 0x30a30001
    ctx->pc = 0x2f99a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x2f99a4: 0x641825
    ctx->pc = 0x2f99a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f99a8: 0x24420001
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f99ac: 0xacc3000c
    ctx->pc = 0x2f99acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2f99b0: 0xacc20008
    ctx->pc = 0x2f99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_2f99b4:
    // 0x2f99b4: 0x3e00008
    ctx->pc = 0x2F99B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F99B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F979Cu: goto label_2f979c;
            case 0x2F97A4u: goto label_2f97a4;
            case 0x2F97B0u: goto label_2f97b0;
            case 0x2F97B8u: goto label_2f97b8;
            case 0x2F97E0u: goto label_2f97e0;
            case 0x2F9830u: goto label_2f9830;
            case 0x2F9870u: goto label_2f9870;
            case 0x2F9894u: goto label_2f9894;
            case 0x2F989Cu: goto label_2f989c;
            case 0x2F98A8u: goto label_2f98a8;
            case 0x2F98CCu: goto label_2f98cc;
            case 0x2F98E4u: goto label_2f98e4;
            case 0x2F98F0u: goto label_2f98f0;
            case 0x2F9904u: goto label_2f9904;
            case 0x2F991Cu: goto label_2f991c;
            case 0x2F992Cu: goto label_2f992c;
            case 0x2F9950u: goto label_2f9950;
            case 0x2F997Cu: goto label_2f997c;
            case 0x2F998Cu: goto label_2f998c;
            case 0x2F99B4u: goto label_2f99b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F99BCu;
}
