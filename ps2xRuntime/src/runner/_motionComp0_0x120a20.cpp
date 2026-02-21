#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionComp0
// Address: 0x120a20 - 0x120d54
void _motionComp0_0x120a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120a20u;

    // 0x120a20: 0x3c020017
    ctx->pc = 0x120a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x120a24: 0x27bdffa0
    ctx->pc = 0x120a24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x120a28: 0x8c431928
    ctx->pc = 0x120a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6440)));
    // 0x120a2c: 0xffb40040
    ctx->pc = 0x120a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x120a30: 0x83001a
    ctx->pc = 0x120a30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x120a34: 0xffb30030
    ctx->pc = 0x120a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x120a38: 0xffb20020
    ctx->pc = 0x120a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120a3c: 0xa0982d
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a40: 0xffb10010
    ctx->pc = 0x120a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120a44: 0xffb00000
    ctx->pc = 0x120a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120a48: 0xffbf0050
    ctx->pc = 0x120a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x120a4c: 0xc0802d
    ctx->pc = 0x120a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a50: 0x50600001
    ctx->pc = 0x120A50u;
    {
        const bool branch_taken_0x120a50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x120a50) {
            ctx->pc = 0x120A54u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x120A58u;
            goto label_120a58;
        }
    }
    ctx->pc = 0x120A58u;
label_120a58:
    // 0x120a58: 0x32140001
    ctx->pc = 0x120a58u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 16), 1));
    // 0x120a5c: 0x1010
    ctx->pc = 0x120a5cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x120a60: 0x9012
    ctx->pc = 0x120a60u;
    SET_GPR_U32(ctx, 18, ctx->lo);
    // 0x120a64: 0x40882d
    ctx->pc = 0x120a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a68: 0x122900
    ctx->pc = 0x120a68u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 4));
    // 0x120a6c: 0x12800012
    ctx->pc = 0x120A6Cu;
    {
        const bool branch_taken_0x120a6c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x120A70u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x120a6c) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A74u;
    // 0x120a74: 0x3c0f0017
    ctx->pc = 0x120a74u;
    SET_GPR_U32(ctx, 15, ((uint32_t)23 << 16));
    // 0x120a78: 0x3c190017
    ctx->pc = 0x120a78u;
    SET_GPR_U32(ctx, 25, ((uint32_t)23 << 16));
    // 0x120a7c: 0x0
    ctx->pc = 0x120a7cu;
    // NOP
label_120a80:
    // 0x120a80: 0x3c021000
    ctx->pc = 0x120a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x120a84: 0x3442d400
    ctx->pc = 0x120a84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x120a88: 0x8c430000
    ctx->pc = 0x120a88u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x120a8c: 0x31a02
    ctx->pc = 0x120a8cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x120a90: 0x30630001
    ctx->pc = 0x120a90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x120a94: 0x1460fffa
    ctx->pc = 0x120A94u;
    {
        const bool branch_taken_0x120a94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x120a94) {
            ctx->pc = 0x120A80u;
            goto label_120a80;
        }
    }
    ctx->pc = 0x120A9Cu;
    // 0x120a9c: 0x25e21df8
    ctx->pc = 0x120a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120aa0: 0x24040140
    ctx->pc = 0x120aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120aa4: 0x8c430280
    ctx->pc = 0x120aa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120aa8: 0x642818
    ctx->pc = 0x120aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120aac: 0xa21821
    ctx->pc = 0x120aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120ab0: 0x10000063
    ctx->pc = 0x120AB0u;
    {
        const bool branch_taken_0x120ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120AB4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 0));
        if (branch_taken_0x120ab0) {
            ctx->pc = 0x120C40u;
            goto label_120c40;
        }
    }
    ctx->pc = 0x120AB8u;
label_120ab8:
    // 0x120ab8: 0x24e2ffff
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120abc: 0x2c420003
    ctx->pc = 0x120abcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x120ac0: 0x1440000a
    ctx->pc = 0x120AC0u;
    {
        const bool branch_taken_0x120ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x120ac0) {
            ctx->pc = 0x120AECu;
            goto label_120aec;
        }
    }
    ctx->pc = 0x120AC8u;
    // 0x120ac8: 0x3c040017
    ctx->pc = 0x120ac8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x120acc: 0xe0282d
    ctx->pc = 0x120accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ad0: 0xc047ffa
    ctx->pc = 0x120AD0u;
    SET_GPR_U32(ctx, 31, 0x120AD8u);
    ctx->pc = 0x120AD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19968));
    ctx->pc = 0x11FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AD8u; }
    }
    if (ctx->pc != 0x120AD8u) { return; }
    ctx->pc = 0x120AD8u;
    // 0x120ad8: 0x24020001
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x120adc: 0x3c030017
    ctx->pc = 0x120adcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x120ae0: 0xac621908
    ctx->pc = 0x120ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 2));
    // 0x120ae4: 0x10000093
    ctx->pc = 0x120AE4u;
    {
        const bool branch_taken_0x120ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120AE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x120ae4) {
            ctx->pc = 0x120D34u;
            goto label_120d34;
        }
    }
    ctx->pc = 0x120AECu;
label_120aec:
    // 0x120aec: 0xc048356
    ctx->pc = 0x120AECu;
    SET_GPR_U32(ctx, 31, 0x120AF4u);
    ctx->pc = 0x120AF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getAllRefs_0x120d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120AF4u; }
    }
    if (ctx->pc != 0x120AF4u) { return; }
    ctx->pc = 0x120AF4u;
    // 0x120af4: 0x3c031000
    ctx->pc = 0x120af4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x120af8: 0x3c180017
    ctx->pc = 0x120af8u;
    SET_GPR_U32(ctx, 24, ((uint32_t)23 << 16));
    // 0x120afc: 0x3c0f0017
    ctx->pc = 0x120afcu;
    SET_GPR_U32(ctx, 15, ((uint32_t)23 << 16));
    // 0x120b00: 0x3c190017
    ctx->pc = 0x120b00u;
    SET_GPR_U32(ctx, 25, ((uint32_t)23 << 16));
    // 0x120b04: 0x3463d400
    ctx->pc = 0x120b04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54272));
label_120b08:
    // 0x120b08: 0x8c620000
    ctx->pc = 0x120b08u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x120b0c: 0x21202
    ctx->pc = 0x120b0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x120b10: 0x30420001
    ctx->pc = 0x120b10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x120b14: 0x0
    ctx->pc = 0x120b14u;
    // NOP
    // 0x120b18: 0x0
    ctx->pc = 0x120b18u;
    // NOP
    // 0x120b1c: 0x1440fffa
    ctx->pc = 0x120B1Cu;
    {
        const bool branch_taken_0x120b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x120b1c) {
            ctx->pc = 0x120B08u;
            goto label_120b08;
        }
    }
    ctx->pc = 0x120B24u;
    // 0x120b24: 0x25e61df8
    ctx->pc = 0x120b24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120b28: 0x24070140
    ctx->pc = 0x120b28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120b2c: 0x8cc40280
    ctx->pc = 0x120b2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120b30: 0x3c020fff
    ctx->pc = 0x120b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x120b34: 0x8f0317b4
    ctx->pc = 0x120b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 6068)));
    // 0x120b38: 0x3442ffff
    ctx->pc = 0x120b38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120b3c: 0x872818
    ctx->pc = 0x120b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120b40: 0x582d
    ctx->pc = 0x120b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b44: 0x621824
    ctx->pc = 0x120b44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120b48: 0xa62021
    ctx->pc = 0x120b48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x120b4c: 0x3c052000
    ctx->pc = 0x120b4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8192 << 16));
    // 0x120b50: 0x8c8d012c
    ctx->pc = 0x120b50u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x120b54: 0x19a00022
    ctx->pc = 0x120B54u;
    {
        const bool branch_taken_0x120b54 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x120B58u;
        SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        if (branch_taken_0x120b54) {
            ctx->pc = 0x120BE0u;
            goto label_120be0;
        }
    }
    ctx->pc = 0x120B5Cu;
    // 0x120b5c: 0x25aeffff
    ctx->pc = 0x120b5cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 13), 4294967295));
label_120b60:
    // 0x120b60: 0x25e61df8
    ctx->pc = 0x120b60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120b64: 0x24040140
    ctx->pc = 0x120b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120b68: 0x8cc20280
    ctx->pc = 0x120b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120b6c: 0xb1880
    ctx->pc = 0x120b6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 2));
    // 0x120b70: 0x3c070fff
    ctx->pc = 0x120b70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x120b74: 0x16e4026
    ctx->pc = 0x120b74u;
    SET_GPR_U32(ctx, 8, XOR32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x120b78: 0x441018
    ctx->pc = 0x120b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x120b7c: 0x34e7ffff
    ctx->pc = 0x120b7cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x120b80: 0x24050003
    ctx->pc = 0x120b80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x120b84: 0x3c0a3000
    ctx->pc = 0x120b84u;
    SET_GPR_U32(ctx, 10, ((uint32_t)12288 << 16));
    // 0x120b88: 0x354a0030
    ctx->pc = 0x120b88u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 48));
    // 0x120b8c: 0x8280a
    ctx->pc = 0x120b8cu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x120b90: 0x24090030
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x120b94: 0x52f38
    ctx->pc = 0x120b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x120b98: 0x256b0001
    ctx->pc = 0x120b98u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x120b9c: 0x621821
    ctx->pc = 0x120b9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120ba0: 0x16d402a
    ctx->pc = 0x120ba0u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 13)));
    // 0x120ba4: 0xc32021
    ctx->pc = 0x120ba4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x120ba8: 0x80302d
    ctx->pc = 0x120ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bac: 0x8c820018
    ctx->pc = 0x120bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x120bb0: 0x8cc30008
    ctx->pc = 0x120bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x120bb4: 0x471024
    ctx->pc = 0x120bb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x120bb8: 0x671824
    ctx->pc = 0x120bb8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x120bbc: 0x2103c
    ctx->pc = 0x120bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120bc0: 0x451025
    ctx->pc = 0x120bc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x120bc4: 0x3183c
    ctx->pc = 0x120bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120bc8: 0x6a1825
    ctx->pc = 0x120bc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x120bcc: 0x491025
    ctx->pc = 0x120bccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x120bd0: 0xfd830000
    ctx->pc = 0x120bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x120bd4: 0xfd820010
    ctx->pc = 0x120bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x120bd8: 0x1500ffe1
    ctx->pc = 0x120BD8u;
    {
        const bool branch_taken_0x120bd8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x120BDCu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 32));
        if (branch_taken_0x120bd8) {
            ctx->pc = 0x120B60u;
            goto label_120b60;
        }
    }
    ctx->pc = 0x120BE0u;
label_120be0:
    // 0x120be0: 0xf
    ctx->pc = 0x120be0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x120be4: 0x25e91df8
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120be8: 0x24020140
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120bec: 0x8d240280
    ctx->pc = 0x120becu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 640)));
    // 0x120bf0: 0x3c071000
    ctx->pc = 0x120bf0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x120bf4: 0x34e7d480
    ctx->pc = 0x120bf4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 54400));
    // 0x120bf8: 0x3c081000
    ctx->pc = 0x120bf8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x120bfc: 0x822018
    ctx->pc = 0x120bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x120c00: 0x3508d430
    ctx->pc = 0x120c00u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 54320));
    // 0x120c04: 0x3c051000
    ctx->pc = 0x120c04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x120c08: 0x3c061000
    ctx->pc = 0x120c08u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x120c0c: 0x34a5d420
    ctx->pc = 0x120c0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 54304));
    // 0x120c10: 0x34c6d400
    ctx->pc = 0x120c10u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 54272));
    // 0x120c14: 0x240a0105
    ctx->pc = 0x120c14u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 261));
    // 0x120c18: 0x240b0001
    ctx->pc = 0x120c18u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x120c1c: 0x891821
    ctx->pc = 0x120c1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x120c20: 0x8c620000
    ctx->pc = 0x120c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120c24: 0x1244821
    ctx->pc = 0x120c24u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x120c28: 0xace20000
    ctx->pc = 0x120c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x120c2c: 0x8f0317b4
    ctx->pc = 0x120c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 6068)));
    // 0x120c30: 0xad030000
    ctx->pc = 0x120c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x120c34: 0xaca00000
    ctx->pc = 0x120c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x120c38: 0xacca0000
    ctx->pc = 0x120c38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x120c3c: 0xad2b0138
    ctx->pc = 0x120c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 11));
label_120c40:
    // 0x120c40: 0x24020001
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x120c44: 0x1662000a
    ctx->pc = 0x120C44u;
    {
        const bool branch_taken_0x120c44 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x120C48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 7672));
        if (branch_taken_0x120c44) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C4Cu;
    // 0x120c4c: 0x32020002
    ctx->pc = 0x120c4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
    // 0x120c50: 0x10400007
    ctx->pc = 0x120C50u;
    {
        const bool branch_taken_0x120c50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120C54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 7672));
        if (branch_taken_0x120c50) {
            ctx->pc = 0x120C70u;
            goto label_120c70;
        }
    }
    ctx->pc = 0x120C58u;
    // 0x120c58: 0x24040140
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c5c: 0x8c430280
    ctx->pc = 0x120c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120c60: 0x642818
    ctx->pc = 0x120c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120c64: 0xa21821
    ctx->pc = 0x120c64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120c68: 0x10000006
    ctx->pc = 0x120C68u;
    {
        const bool branch_taken_0x120c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120C6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        if (branch_taken_0x120c68) {
            ctx->pc = 0x120C84u;
            goto label_120c84;
        }
    }
    ctx->pc = 0x120C70u;
label_120c70:
    // 0x120c70: 0x24040140
    ctx->pc = 0x120c70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c74: 0x8c430280
    ctx->pc = 0x120c74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x120c78: 0x642818
    ctx->pc = 0x120c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120c7c: 0xa21821
    ctx->pc = 0x120c7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120c80: 0xac600134
    ctx->pc = 0x120c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_120c84:
    // 0x120c84: 0x25e71df8
    ctx->pc = 0x120c84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120c88: 0x24080140
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120c8c: 0x8ce20280
    ctx->pc = 0x120c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x120c90: 0x24030003
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x120c94: 0x8f2419ac
    ctx->pc = 0x120c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 25), 6572)));
    // 0x120c98: 0x482818
    ctx->pc = 0x120c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120c9c: 0xa71021
    ctx->pc = 0x120c9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x120ca0: 0x1483000f
    ctx->pc = 0x120CA0u;
    {
        const bool branch_taken_0x120ca0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x120CA4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        if (branch_taken_0x120ca0) {
            ctx->pc = 0x120CE0u;
            goto label_120ce0;
        }
    }
    ctx->pc = 0x120CA8u;
    // 0x120ca8: 0x3c020017
    ctx->pc = 0x120ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x120cac: 0x8ce40280
    ctx->pc = 0x120cacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x120cb0: 0x8c451a44
    ctx->pc = 0x120cb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x120cb4: 0x24060180
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    // 0x120cb8: 0x881018
    ctx->pc = 0x120cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x120cbc: 0x8ca30000
    ctx->pc = 0x120cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120cc0: 0x472021
    ctx->pc = 0x120cc0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x120cc4: 0x8ca20010
    ctx->pc = 0x120cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x120cc8: 0x2222818
    ctx->pc = 0x120cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x120ccc: 0xb21021
    ctx->pc = 0x120cccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x120cd0: 0x461018
    ctx->pc = 0x120cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x120cd4: 0x621821
    ctx->pc = 0x120cd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120cd8: 0x10000015
    ctx->pc = 0x120CD8u;
    {
        const bool branch_taken_0x120cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120CDCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        if (branch_taken_0x120cd8) {
            ctx->pc = 0x120D30u;
            goto label_120d30;
        }
    }
    ctx->pc = 0x120CE0u;
label_120ce0:
    // 0x120ce0: 0x24020002
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x120ce4: 0x54820004
    ctx->pc = 0x120CE4u;
    {
        const bool branch_taken_0x120ce4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x120ce4) {
            ctx->pc = 0x120CE8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
            ctx->pc = 0x120CF8u;
            goto label_120cf8;
        }
    }
    ctx->pc = 0x120CECu;
    // 0x120cec: 0x3c020017
    ctx->pc = 0x120cecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x120cf0: 0x10000002
    ctx->pc = 0x120CF0u;
    {
        const bool branch_taken_0x120cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120CF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6732)));
        if (branch_taken_0x120cf0) {
            ctx->pc = 0x120CFCu;
            goto label_120cfc;
        }
    }
    ctx->pc = 0x120CF8u;
label_120cf8:
    // 0x120cf8: 0x8c421a48
    ctx->pc = 0x120cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6728)));
label_120cfc:
    // 0x120cfc: 0x8c440010
    ctx->pc = 0x120cfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x120d00: 0x25e61df8
    ctx->pc = 0x120d00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 15), 7672));
    // 0x120d04: 0x8cc50280
    ctx->pc = 0x120d04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x120d08: 0x24070180
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 384));
    // 0x120d0c: 0x2241818
    ctx->pc = 0x120d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x120d10: 0x8c420000
    ctx->pc = 0x120d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120d14: 0x722021
    ctx->pc = 0x120d14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x120d18: 0x24030140
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x120d1c: 0x872018
    ctx->pc = 0x120d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x120d20: 0xa34018
    ctx->pc = 0x120d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x120d24: 0x441021
    ctx->pc = 0x120d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120d28: 0x1062821
    ctx->pc = 0x120d28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x120d2c: 0xaca20128
    ctx->pc = 0x120d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
label_120d30:
    // 0x120d30: 0x24020001
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_120d34:
    // 0x120d34: 0xdfbf0050
    ctx->pc = 0x120d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120d38: 0xdfb40040
    ctx->pc = 0x120d38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120d3c: 0xdfb30030
    ctx->pc = 0x120d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120d40: 0xdfb20020
    ctx->pc = 0x120d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120d44: 0xdfb10010
    ctx->pc = 0x120d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120d48: 0xdfb00000
    ctx->pc = 0x120d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120d4c: 0x3e00008
    ctx->pc = 0x120D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120A58u: goto label_120a58;
            case 0x120A80u: goto label_120a80;
            case 0x120AB8u: goto label_120ab8;
            case 0x120AECu: goto label_120aec;
            case 0x120B08u: goto label_120b08;
            case 0x120B60u: goto label_120b60;
            case 0x120BE0u: goto label_120be0;
            case 0x120C40u: goto label_120c40;
            case 0x120C70u: goto label_120c70;
            case 0x120C84u: goto label_120c84;
            case 0x120CE0u: goto label_120ce0;
            case 0x120CF8u: goto label_120cf8;
            case 0x120CFCu: goto label_120cfc;
            case 0x120D30u: goto label_120d30;
            case 0x120D34u: goto label_120d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120D54u;
}
