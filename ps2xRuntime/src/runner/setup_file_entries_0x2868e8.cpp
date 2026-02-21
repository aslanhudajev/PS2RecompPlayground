#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_file_entries
// Address: 0x2868e8 - 0x286ac8
void setup_file_entries_0x2868e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2868e8u;

    // 0x2868e8: 0x27bdff60
    ctx->pc = 0x2868e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2868ec: 0xffbf0090
    ctx->pc = 0x2868ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2868f0: 0xffbe0080
    ctx->pc = 0x2868f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2868f4: 0xffb70070
    ctx->pc = 0x2868f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2868f8: 0xffb60060
    ctx->pc = 0x2868f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2868fc: 0xffb50050
    ctx->pc = 0x2868fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x286900: 0xffb40040
    ctx->pc = 0x286900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x286904: 0xffb30030
    ctx->pc = 0x286904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x286908: 0xffb20020
    ctx->pc = 0x286908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28690c: 0xffb10010
    ctx->pc = 0x28690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286910: 0xffb00000
    ctx->pc = 0x286910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286914: 0x80902d
    ctx->pc = 0x286914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286918: 0x24170001
    ctx->pc = 0x286918u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28691c: 0x8e502ae8
    ctx->pc = 0x28691cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 10984)));
    // 0x286920: 0x8e532aec
    ctx->pc = 0x286920u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 10988)));
    // 0x286924: 0x3c040031
    ctx->pc = 0x286924u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x286928: 0x24842280
    ctx->pc = 0x286928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8832));
    // 0x28692c: 0x131080
    ctx->pc = 0x28692cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x286930: 0x101900
    ctx->pc = 0x286930u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x286934: 0x431021
    ctx->pc = 0x286934u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286938: 0x441021
    ctx->pc = 0x286938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28693c: 0x8c420000
    ctx->pc = 0x28693cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286940: 0x14570003
    ctx->pc = 0x286940u;
    {
        const bool branch_taken_0x286940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x286944u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x286940) {
            ctx->pc = 0x286950u;
            goto label_286950;
        }
    }
    ctx->pc = 0x286948u;
    // 0x286948: 0x10000053
    ctx->pc = 0x286948u;
    {
        const bool branch_taken_0x286948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28694Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x286948) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x286950u;
label_286950:
    // 0x286950: 0x3c020031
    ctx->pc = 0x286950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x286954: 0x24422280
    ctx->pc = 0x286954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8832));
    // 0x286958: 0x132080
    ctx->pc = 0x286958u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28695c: 0x101900
    ctx->pc = 0x28695cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x286960: 0x832021
    ctx->pc = 0x286960u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286964: 0x821021
    ctx->pc = 0x286964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286968: 0x8c430000
    ctx->pc = 0x286968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28696c: 0x24020002
    ctx->pc = 0x28696cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x286970: 0x14620049
    ctx->pc = 0x286970u;
    {
        const bool branch_taken_0x286970 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x286974u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x286970) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x286978u;
    // 0x286978: 0x3c020031
    ctx->pc = 0x286978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28697c: 0x244222a0
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8864));
    // 0x286980: 0x821021
    ctx->pc = 0x286980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286984: 0x8c420000
    ctx->pc = 0x286984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286988: 0x14430043
    ctx->pc = 0x286988u;
    {
        const bool branch_taken_0x286988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x28698Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x286988) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x286990u;
    // 0x286990: 0x200202d
    ctx->pc = 0x286990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286994: 0xc0827f4
    ctx->pc = 0x286994u;
    SET_GPR_U32(ctx, 31, 0x28699Cu);
    ctx->pc = 0x286998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_vmu_directory_0x209fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28699Cu; }
    }
    if (ctx->pc != 0x28699Cu) { return; }
    ctx->pc = 0x28699Cu;
    // 0x28699c: 0x40a02d
    ctx->pc = 0x28699cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869a0: 0x680003d
    ctx->pc = 0x2869A0u;
    {
        const bool branch_taken_0x2869a0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2869A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2869a0) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x2869A8u;
    // 0x2869a8: 0x1a80002d
    ctx->pc = 0x2869A8u;
    {
        const bool branch_taken_0x2869a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2869ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2869a8) {
            ctx->pc = 0x286A60u;
            goto label_286a60;
        }
    }
    ctx->pc = 0x2869B0u;
    // 0x2869b0: 0x3c020035
    ctx->pc = 0x2869b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2869b4: 0x245eae70
    ctx->pc = 0x2869b4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294946416));
    // 0x2869b8: 0x24040210
    ctx->pc = 0x2869b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x2869bc: 0x2042018
    ctx->pc = 0x2869bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2869c0: 0x24030084
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 132));
    // 0x2869c4: 0x2631818
    ctx->pc = 0x2869c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2869c8: 0x3c020031
    ctx->pc = 0x2869c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2869cc: 0x24421e60
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7776));
    // 0x2869d0: 0x621821
    ctx->pc = 0x2869d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2869d4: 0x83b021
    ctx->pc = 0x2869d4u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2869d8: 0x2413ffff
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2869dc: 0x8e420000
    ctx->pc = 0x2869dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2869e0:
    // 0x2869e0: 0x24030144
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 324));
    // 0x2869e4: 0x431018
    ctx->pc = 0x2869e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2869e8: 0x24040024
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2869ec: 0x2242018
    ctx->pc = 0x2869ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2869f0: 0x9e1821
    ctx->pc = 0x2869f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2869f4: 0x438021
    ctx->pc = 0x2869f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2869f8: 0x111100
    ctx->pc = 0x2869f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2869fc: 0x2c21021
    ctx->pc = 0x2869fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x286a00: 0x24440008
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8));
    // 0x286a04: 0xae040000
    ctx->pc = 0x286a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x286a08: 0x262203e8
    ctx->pc = 0x286a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1000));
    // 0x286a0c: 0xae020004
    ctx->pc = 0x286a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x286a10: 0xae000020
    ctx->pc = 0x286a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x286a14: 0x24020004
    ctx->pc = 0x286a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x286a18: 0x16a00008
    ctx->pc = 0x286A18u;
    {
        const bool branch_taken_0x286a18 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x286A1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x286a18) {
            ctx->pc = 0x286A3Cu;
            goto label_286a3c;
        }
    }
    ctx->pc = 0x286A20u;
    // 0x286a20: 0x3c05003b
    ctx->pc = 0x286a20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x286a24: 0x24a5d3a0
    ctx->pc = 0x286a24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955936));
    // 0x286a28: 0xc0bf3c0
    ctx->pc = 0x286A28u;
    SET_GPR_U32(ctx, 31, 0x286A30u);
    ctx->pc = 0x286A2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A30u; }
    }
    if (ctx->pc != 0x286A30u) { return; }
    ctx->pc = 0x286A30u;
    // 0x286a30: 0x54400002
    ctx->pc = 0x286A30u;
    {
        const bool branch_taken_0x286a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x286a30) {
            ctx->pc = 0x286A34u;
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x286A3Cu;
            goto label_286a3c;
        }
    }
    ctx->pc = 0x286A38u;
    // 0x286a38: 0xae130020
    ctx->pc = 0x286a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_286a3c:
    // 0x286a3c: 0x240202d
    ctx->pc = 0x286a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a40: 0xc0a1a1c
    ctx->pc = 0x286A40u;
    SET_GPR_U32(ctx, 31, 0x286A48u);
    ctx->pc = 0x286A44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286870u;
    {
        const uint32_t __entryPc = ctx->pc;
        verify_vmu_file_ok_0x286870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A48u; }
    }
    if (ctx->pc != 0x286A48u) { return; }
    ctx->pc = 0x286A48u;
    // 0x286a48: 0x50400001
    ctx->pc = 0x286A48u;
    {
        const bool branch_taken_0x286a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x286a48) {
            ctx->pc = 0x286A4Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
            ctx->pc = 0x286A50u;
            goto label_286a50;
        }
    }
    ctx->pc = 0x286A50u;
label_286a50:
    // 0x286a50: 0x26310001
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x286a54: 0x234102a
    ctx->pc = 0x286a54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x286a58: 0x5440ffe1
    ctx->pc = 0x286A58u;
    {
        const bool branch_taken_0x286a58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x286a58) {
            ctx->pc = 0x286A5Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2869E0u;
            goto label_2869e0;
        }
    }
    ctx->pc = 0x286A60u;
label_286a60:
    // 0x286a60: 0x3c050035
    ctx->pc = 0x286a60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x286a64: 0x24a5ae70
    ctx->pc = 0x286a64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946416));
    // 0x286a68: 0x24020024
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x286a6c: 0x2221018
    ctx->pc = 0x286a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286a70: 0x8e430000
    ctx->pc = 0x286a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x286a74: 0x24040144
    ctx->pc = 0x286a74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 324));
    // 0x286a78: 0x641818
    ctx->pc = 0x286a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286a7c: 0x431021
    ctx->pc = 0x286a7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286a80: 0x451021
    ctx->pc = 0x286a80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x286a84: 0x16a00003
    ctx->pc = 0x286A84u;
    {
        const bool branch_taken_0x286a84 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x286A88u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x286a84) {
            ctx->pc = 0x286A94u;
            goto label_286a94;
        }
    }
    ctx->pc = 0x286A8Cu;
    // 0x286a8c: 0x16e00002
    ctx->pc = 0x286A8Cu;
    {
        const bool branch_taken_0x286a8c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x286A90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x286a8c) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x286A94u;
label_286a94:
    // 0x286a94: 0x24020001
    ctx->pc = 0x286a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_286a98:
    // 0x286a98: 0xdfbf0090
    ctx->pc = 0x286a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286a9c: 0xdfbe0080
    ctx->pc = 0x286a9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286aa0: 0xdfb70070
    ctx->pc = 0x286aa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286aa4: 0xdfb60060
    ctx->pc = 0x286aa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286aa8: 0xdfb50050
    ctx->pc = 0x286aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286aac: 0xdfb40040
    ctx->pc = 0x286aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286ab0: 0xdfb30030
    ctx->pc = 0x286ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286ab4: 0xdfb20020
    ctx->pc = 0x286ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286ab8: 0xdfb10010
    ctx->pc = 0x286ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286abc: 0xdfb00000
    ctx->pc = 0x286abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286ac0: 0x3e00008
    ctx->pc = 0x286AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286950u: goto label_286950;
            case 0x2869E0u: goto label_2869e0;
            case 0x286A3Cu: goto label_286a3c;
            case 0x286A50u: goto label_286a50;
            case 0x286A60u: goto label_286a60;
            case 0x286A94u: goto label_286a94;
            case 0x286A98u: goto label_286a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286AC8u;
}
