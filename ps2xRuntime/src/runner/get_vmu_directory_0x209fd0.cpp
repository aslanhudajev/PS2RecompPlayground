#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_vmu_directory
// Address: 0x209fd0 - 0x20a268
void get_vmu_directory_0x209fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209fd0u;

    // 0x209fd0: 0x27bdffc0
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209fd4: 0xffbf0030
    ctx->pc = 0x209fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209fd8: 0xffbe0020
    ctx->pc = 0x209fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x209fdc: 0x3a0f02d
    ctx->pc = 0x209fdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fe0: 0xafc40000
    ctx->pc = 0x209fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x209fe4: 0xafc50004
    ctx->pc = 0x209fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x209fe8: 0x8fc40000
    ctx->pc = 0x209fe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209fec: 0x8fc50004
    ctx->pc = 0x209fecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209ff0: 0xc0827aa
    ctx->pc = 0x209FF0u;
    SET_GPR_U32(ctx, 31, 0x209FF8u);
    ctx->pc = 0x209EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_vmu_directory_0x209ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FF8u; }
    }
    if (ctx->pc != 0x209FF8u) { return; }
    ctx->pc = 0x209FF8u;
    // 0x209ff8: 0xafc20010
    ctx->pc = 0x209ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x209ffc: 0x8fc20010
    ctx->pc = 0x209ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x20a000: 0x14400004
    ctx->pc = 0x20A000u;
    {
        const bool branch_taken_0x20a000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a000) {
            ctx->pc = 0x20A014u;
            goto label_20a014;
        }
    }
    ctx->pc = 0x20A008u;
    // 0x20a008: 0x2402ffff
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a00c: 0x10000090
    ctx->pc = 0x20A00Cu;
    {
        const bool branch_taken_0x20a00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a00c) {
            ctx->pc = 0x20A250u;
            goto label_20a250;
        }
    }
    ctx->pc = 0x20A014u;
label_20a014:
    // 0x20a014: 0xafc0000c
    ctx->pc = 0x20a014u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x20a018: 0xafc00008
    ctx->pc = 0x20a018u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x20a01c: 0x0
    ctx->pc = 0x20a01cu;
    // NOP
label_20a020:
    // 0x20a020: 0x8fc20008
    ctx->pc = 0x20a020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a024: 0x28430008
    ctx->pc = 0x20a024u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
    // 0x20a028: 0x14600003
    ctx->pc = 0x20A028u;
    {
        const bool branch_taken_0x20a028 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a028) {
            ctx->pc = 0x20A038u;
            goto label_20a038;
        }
    }
    ctx->pc = 0x20A030u;
    // 0x20a030: 0x10000083
    ctx->pc = 0x20A030u;
    {
        const bool branch_taken_0x20a030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a030) {
            ctx->pc = 0x20A240u;
            goto label_20a240;
        }
    }
    ctx->pc = 0x20A038u;
label_20a038:
    // 0x20a038: 0x8fc20008
    ctx->pc = 0x20a038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a03c: 0x40182d
    ctx->pc = 0x20a03cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a040: 0x31100
    ctx->pc = 0x20a040u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a044: 0x8fc30004
    ctx->pc = 0x20a044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a048: 0x24040084
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a04c: 0x641818
    ctx->pc = 0x20a04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a050: 0x431021
    ctx->pc = 0x20a050u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a054: 0x8fc30000
    ctx->pc = 0x20a054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a058: 0x24040210
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a05c: 0x641818
    ctx->pc = 0x20a05cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a060: 0x431021
    ctx->pc = 0x20a060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a064: 0x3c030031
    ctx->pc = 0x20a064u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a068: 0x24631e60
    ctx->pc = 0x20a068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7776));
    // 0x20a06c: 0x621021
    ctx->pc = 0x20a06cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a070: 0x8c430000
    ctx->pc = 0x20a070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a074: 0x2402ffff
    ctx->pc = 0x20a074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a078: 0x10620014
    ctx->pc = 0x20A078u;
    {
        const bool branch_taken_0x20a078 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20a078) {
            ctx->pc = 0x20A0CCu;
            goto label_20a0cc;
        }
    }
    ctx->pc = 0x20A080u;
    // 0x20a080: 0x8fc20008
    ctx->pc = 0x20a080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a084: 0x40182d
    ctx->pc = 0x20a084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a088: 0x31100
    ctx->pc = 0x20a088u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a08c: 0x8fc30004
    ctx->pc = 0x20a08cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a090: 0x24040084
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a094: 0x641818
    ctx->pc = 0x20a094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a098: 0x431021
    ctx->pc = 0x20a098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a09c: 0x8fc30000
    ctx->pc = 0x20a09cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a0a0: 0x24040210
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a0a4: 0x641818
    ctx->pc = 0x20a0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a0a8: 0x431021
    ctx->pc = 0x20a0a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a0ac: 0x3c030031
    ctx->pc = 0x20a0acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a0b0: 0x24631e60
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7776));
    // 0x20a0b4: 0x431021
    ctx->pc = 0x20a0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a0b8: 0x80430008
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20a0bc: 0x14600019
    ctx->pc = 0x20A0BCu;
    {
        const bool branch_taken_0x20a0bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a0bc) {
            ctx->pc = 0x20A124u;
            goto label_20a124;
        }
    }
    ctx->pc = 0x20A0C4u;
    // 0x20a0c4: 0x10000001
    ctx->pc = 0x20A0C4u;
    {
        const bool branch_taken_0x20a0c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a0c4) {
            ctx->pc = 0x20A0CCu;
            goto label_20a0cc;
        }
    }
    ctx->pc = 0x20A0CCu;
label_20a0cc:
    // 0x20a0cc: 0x8fc20000
    ctx->pc = 0x20a0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a0d0: 0x24030210
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a0d4: 0x431018
    ctx->pc = 0x20a0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a0d8: 0x8fc30004
    ctx->pc = 0x20a0d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a0dc: 0x24040084
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a0e0: 0x641818
    ctx->pc = 0x20a0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a0e4: 0x3c040031
    ctx->pc = 0x20a0e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20a0e8: 0x24841e60
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x20a0ec: 0x641821
    ctx->pc = 0x20a0ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a0f0: 0x431021
    ctx->pc = 0x20a0f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a0f4: 0x8fc30008
    ctx->pc = 0x20a0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a0f8: 0x60202d
    ctx->pc = 0x20a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0fc: 0x41900
    ctx->pc = 0x20a0fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a100: 0x431021
    ctx->pc = 0x20a100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a104: 0x24430008
    ctx->pc = 0x20a104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x20a108: 0x60202d
    ctx->pc = 0x20a108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a10c: 0x3c05003a
    ctx->pc = 0x20a10cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20a110: 0x24a54dd0
    ctx->pc = 0x20a110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19920));
    // 0x20a114: 0xc0bf2c1
    ctx->pc = 0x20A114u;
    SET_GPR_U32(ctx, 31, 0x20A11Cu);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A11Cu; }
    }
    if (ctx->pc != 0x20A11Cu) { return; }
    ctx->pc = 0x20A11Cu;
    // 0x20a11c: 0x10000043
    ctx->pc = 0x20A11Cu;
    {
        const bool branch_taken_0x20a11c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a11c) {
            ctx->pc = 0x20A22Cu;
            goto label_20a22c;
        }
    }
    ctx->pc = 0x20A124u;
label_20a124:
    // 0x20a124: 0x8fc20000
    ctx->pc = 0x20a124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a128: 0x24030210
    ctx->pc = 0x20a128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a12c: 0x431018
    ctx->pc = 0x20a12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a130: 0x8fc30004
    ctx->pc = 0x20a130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a134: 0x24040084
    ctx->pc = 0x20a134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a138: 0x641818
    ctx->pc = 0x20a138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a13c: 0x3c040031
    ctx->pc = 0x20a13cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20a140: 0x24841e60
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x20a144: 0x641821
    ctx->pc = 0x20a144u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a148: 0x431021
    ctx->pc = 0x20a148u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a14c: 0x8fc30008
    ctx->pc = 0x20a14cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a150: 0x60202d
    ctx->pc = 0x20a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a154: 0x41900
    ctx->pc = 0x20a154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a158: 0x431021
    ctx->pc = 0x20a158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a15c: 0x24430008
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x20a160: 0x60202d
    ctx->pc = 0x20a160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a164: 0x3c05003a
    ctx->pc = 0x20a164u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20a168: 0x24a54dd0
    ctx->pc = 0x20a168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19920));
    // 0x20a16c: 0xc0bf270
    ctx->pc = 0x20A16Cu;
    SET_GPR_U32(ctx, 31, 0x20A174u);
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A174u; }
    }
    if (ctx->pc != 0x20A174u) { return; }
    ctx->pc = 0x20A174u;
    // 0x20a174: 0x10400019
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A1DCu;
            goto label_20a1dc;
        }
    }
    ctx->pc = 0x20A17Cu;
    // 0x20a17c: 0x8fc20000
    ctx->pc = 0x20a17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a180: 0x24030210
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a184: 0x431018
    ctx->pc = 0x20a184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a188: 0x8fc30004
    ctx->pc = 0x20a188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a18c: 0x24040084
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a190: 0x641818
    ctx->pc = 0x20a190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a194: 0x3c040031
    ctx->pc = 0x20a194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20a198: 0x24841e60
    ctx->pc = 0x20a198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x20a19c: 0x641821
    ctx->pc = 0x20a19cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a1a0: 0x431021
    ctx->pc = 0x20a1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a1a4: 0x8fc30008
    ctx->pc = 0x20a1a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a1a8: 0x60202d
    ctx->pc = 0x20a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1ac: 0x41900
    ctx->pc = 0x20a1acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a1b0: 0x431021
    ctx->pc = 0x20a1b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a1b4: 0x24430008
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x20a1b8: 0x60202d
    ctx->pc = 0x20a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1bc: 0x3c05003a
    ctx->pc = 0x20a1bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20a1c0: 0x24a54ff0
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20464));
    // 0x20a1c4: 0xc0bf270
    ctx->pc = 0x20A1C4u;
    SET_GPR_U32(ctx, 31, 0x20A1CCu);
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1CCu; }
    }
    if (ctx->pc != 0x20A1CCu) { return; }
    ctx->pc = 0x20A1CCu;
    // 0x20a1cc: 0x14400017
    ctx->pc = 0x20A1CCu;
    {
        const bool branch_taken_0x20a1cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a1cc) {
            ctx->pc = 0x20A22Cu;
            goto label_20a22c;
        }
    }
    ctx->pc = 0x20A1D4u;
    // 0x20a1d4: 0x10000001
    ctx->pc = 0x20A1D4u;
    {
        const bool branch_taken_0x20a1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a1d4) {
            ctx->pc = 0x20A1DCu;
            goto label_20a1dc;
        }
    }
    ctx->pc = 0x20A1DCu;
label_20a1dc:
    // 0x20a1dc: 0x8fc20000
    ctx->pc = 0x20a1dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a1e0: 0x24030210
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a1e4: 0x431018
    ctx->pc = 0x20a1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a1e8: 0x8fc30004
    ctx->pc = 0x20a1e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a1ec: 0x24040084
    ctx->pc = 0x20a1ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a1f0: 0x641818
    ctx->pc = 0x20a1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a1f4: 0x3c040031
    ctx->pc = 0x20a1f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20a1f8: 0x24841e60
    ctx->pc = 0x20a1f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x20a1fc: 0x641821
    ctx->pc = 0x20a1fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a200: 0x431021
    ctx->pc = 0x20a200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a204: 0x8fc30008
    ctx->pc = 0x20a204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a208: 0x60202d
    ctx->pc = 0x20a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a20c: 0x41900
    ctx->pc = 0x20a20cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a210: 0x431021
    ctx->pc = 0x20a210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a214: 0x24430008
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x20a218: 0x60202d
    ctx->pc = 0x20a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a21c: 0x3c05003a
    ctx->pc = 0x20a21cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20a220: 0x24a54ff8
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20472));
    // 0x20a224: 0xc0bf2c1
    ctx->pc = 0x20A224u;
    SET_GPR_U32(ctx, 31, 0x20A22Cu);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A22Cu; }
    }
    if (ctx->pc != 0x20A22Cu) { return; }
    ctx->pc = 0x20A22Cu;
label_20a22c:
    // 0x20a22c: 0x8fc20008
    ctx->pc = 0x20a22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a230: 0x24430001
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a234: 0xafc30008
    ctx->pc = 0x20a234u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x20a238: 0x1000ff79
    ctx->pc = 0x20A238u;
    {
        const bool branch_taken_0x20a238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a238) {
            ctx->pc = 0x20A020u;
            goto label_20a020;
        }
    }
    ctx->pc = 0x20A240u;
label_20a240:
    // 0x20a240: 0x8fc30008
    ctx->pc = 0x20a240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a244: 0x60102d
    ctx->pc = 0x20a244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a248: 0x10000001
    ctx->pc = 0x20A248u;
    {
        const bool branch_taken_0x20a248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a248) {
            ctx->pc = 0x20A250u;
            goto label_20a250;
        }
    }
    ctx->pc = 0x20A250u;
label_20a250:
    // 0x20a250: 0x3c0e82d
    ctx->pc = 0x20a250u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a254: 0xdfbf0030
    ctx->pc = 0x20a254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a258: 0xdfbe0020
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a25c: 0x27bd0040
    ctx->pc = 0x20a25cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20a260: 0x3e00008
    ctx->pc = 0x20A260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A014u: goto label_20a014;
            case 0x20A020u: goto label_20a020;
            case 0x20A038u: goto label_20a038;
            case 0x20A0CCu: goto label_20a0cc;
            case 0x20A124u: goto label_20a124;
            case 0x20A1DCu: goto label_20a1dc;
            case 0x20A22Cu: goto label_20a22c;
            case 0x20A240u: goto label_20a240;
            case 0x20A250u: goto label_20a250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A268u;
}
