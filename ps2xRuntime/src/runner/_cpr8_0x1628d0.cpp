#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _cpr8
// Address: 0x1628d0 - 0x162abc
void _cpr8_0x1628d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_cpr8");


    ctx->pc = 0x1628d0u;

    // 0x1628d0: 0x3c030023
    ctx->pc = 0x1628d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1628d4: 0x80602d
    ctx->pc = 0x1628d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628d8: 0x8c64a21c
    ctx->pc = 0x1628d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294943260)));
    // 0x1628dc: 0x3c020fff
    ctx->pc = 0x1628dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1628e0: 0x3c030023
    ctx->pc = 0x1628e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1628e4: 0x8d850000
    ctx->pc = 0x1628e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1628e8: 0x8c980040
    ctx->pc = 0x1628e8u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1628ec: 0x3442ffff
    ctx->pc = 0x1628ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1628f0: 0x8c66a3ec
    ctx->pc = 0x1628f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294943724)));
    // 0x1628f4: 0xa24824
    ctx->pc = 0x1628f4u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1628f8: 0x8f0300d8
    ctx->pc = 0x1628f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 216)));
    // 0x1628fc: 0x24040003
    ctx->pc = 0x1628fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x162900: 0x10c40006
    ctx->pc = 0x162900u;
    {
        const bool branch_taken_0x162900 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x162904u;
        SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x162900) {
            ctx->pc = 0x16291Cu;
            goto label_16291c;
        }
    }
    ctx->pc = 0x162908u;
    // 0x162908: 0x8f0400e0
    ctx->pc = 0x162908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x16290c: 0x1480000f
    ctx->pc = 0x16290Cu;
    {
        const bool branch_taken_0x16290c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x162910u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16290c) {
            ctx->pc = 0x16294Cu;
            goto label_16294c;
        }
    }
    ctx->pc = 0x162914u;
    // 0x162914: 0x10000003
    ctx->pc = 0x162914u;
    {
        const bool branch_taken_0x162914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162918u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
        if (branch_taken_0x162914) {
            ctx->pc = 0x162924u;
            goto label_162924;
        }
    }
    ctx->pc = 0x16291Cu;
label_16291c:
    // 0x16291c: 0x8f0300e0
    ctx->pc = 0x16291cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x162920: 0x8d820010
    ctx->pc = 0x162920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_162924:
    // 0x162924: 0x24040180
    ctx->pc = 0x162924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 384));
    // 0x162928: 0x445818
    ctx->pc = 0x162928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)(uint32_t)result); }
    // 0x16292c: 0x10600004
    ctx->pc = 0x16292Cu;
    {
        const bool branch_taken_0x16292c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x162930u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        if (branch_taken_0x16292c) {
            ctx->pc = 0x162940u;
            goto label_162940;
        }
    }
    ctx->pc = 0x162934u;
    // 0x162934: 0x31103
    ctx->pc = 0x162934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x162938: 0x10000002
    ctx->pc = 0x162938u;
    {
        const bool branch_taken_0x162938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16293Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
        if (branch_taken_0x162938) {
            ctx->pc = 0x162944u;
            goto label_162944;
        }
    }
    ctx->pc = 0x162940u;
label_162940:
    // 0x162940: 0x160702d
    ctx->pc = 0x162940u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_162944:
    // 0x162944: 0x1000000a
    ctx->pc = 0x162944u;
    {
        const bool branch_taken_0x162944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162948u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162944) {
            ctx->pc = 0x162970u;
            goto label_162970;
        }
    }
    ctx->pc = 0x16294Cu;
label_16294c:
    // 0x16294c: 0x8d820010
    ctx->pc = 0x16294cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x162950: 0x24050180
    ctx->pc = 0x162950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 384));
    // 0x162954: 0x42103
    ctx->pc = 0x162954u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x162958: 0x240300c0
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x16295c: 0x21043
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x162960: 0x837018
    ctx->pc = 0x162960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x162964: 0x70455818
    ctx->pc = 0x162964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x162968: 0x24190002
    ctx->pc = 0x162968u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16296c: 0xb5103
    ctx->pc = 0x16296cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
label_162970:
    // 0x162970: 0x13200050
    ctx->pc = 0x162970u;
    {
        const bool branch_taken_0x162970 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x162974u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162970) {
            ctx->pc = 0x162AB4u;
            goto label_162ab4;
        }
    }
    ctx->pc = 0x162978u;
    // 0x162978: 0x8d87000c
    ctx->pc = 0x162978u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16297c: 0x0
    ctx->pc = 0x16297cu;
    // NOP
label_162980:
    // 0x162980: 0x1e0402d
    ctx->pc = 0x162980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162984: 0x18e00043
    ctx->pc = 0x162984u;
    {
        const bool branch_taken_0x162984 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x162988u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162984) {
            ctx->pc = 0x162A94u;
            goto label_162a94;
        }
    }
    ctx->pc = 0x16298Cu;
    // 0x16298c: 0x24ad0001
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
label_162990:
    // 0x162990: 0x3c021000
    ctx->pc = 0x162990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x162994: 0x3c041000
    ctx->pc = 0x162994u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x162998: 0x3442d480
    ctx->pc = 0x162998u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54400));
    // 0x16299c: 0x3484d410
    ctx->pc = 0x16299cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54288));
    // 0x1629a0: 0xac400000
    ctx->pc = 0x1629a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1629a4: 0x3c031000
    ctx->pc = 0x1629a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1629a8: 0xac890000
    ctx->pc = 0x1629a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x1629ac: 0x3463d420
    ctx->pc = 0x1629acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54304));
    // 0x1629b0: 0x3c041000
    ctx->pc = 0x1629b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1629b4: 0xac6a0000
    ctx->pc = 0x1629b4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x1629b8: 0x3484d400
    ctx->pc = 0x1629b8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54272));
    // 0x1629bc: 0x24020101
    ctx->pc = 0x1629bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x1629c0: 0x3c031000
    ctx->pc = 0x1629c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1629c4: 0x12b2821
    ctx->pc = 0x1629c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1629c8: 0xac820000
    ctx->pc = 0x1629c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1629cc: 0x24c60001
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1629d0: 0x10e4821
    ctx->pc = 0x1629d0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1629d4: 0x3463d400
    ctx->pc = 0x1629d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54272));
label_1629d8:
    // 0x1629d8: 0x8c620000
    ctx->pc = 0x1629d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1629dc: 0x30420100
    ctx->pc = 0x1629dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1629e0: 0x0
    ctx->pc = 0x1629e0u;
    // NOP
    // 0x1629e4: 0x0
    ctx->pc = 0x1629e4u;
    // NOP
    // 0x1629e8: 0x0
    ctx->pc = 0x1629e8u;
    // NOP
    // 0x1629ec: 0x1440fffa
    ctx->pc = 0x1629ECu;
    {
        const bool branch_taken_0x1629ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1629ec) {
            ctx->pc = 0x1629D8u;
            goto label_1629d8;
        }
    }
    ctx->pc = 0x1629F4u;
    // 0x1629f4: 0x3c021000
    ctx->pc = 0x1629f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1629f8: 0x3c041000
    ctx->pc = 0x1629f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1629fc: 0x3442d080
    ctx->pc = 0x1629fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53376));
    // 0x162a00: 0x3484d010
    ctx->pc = 0x162a00u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 53264));
    // 0x162a04: 0xac400000
    ctx->pc = 0x162a04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x162a08: 0x3c031000
    ctx->pc = 0x162a08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162a0c: 0xac880000
    ctx->pc = 0x162a0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x162a10: 0x3463d020
    ctx->pc = 0x162a10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53280));
    // 0x162a14: 0x3c041000
    ctx->pc = 0x162a14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x162a18: 0xac6a0000
    ctx->pc = 0x162a18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x162a1c: 0x3484d000
    ctx->pc = 0x162a1cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 53248));
    // 0x162a20: 0x24020100
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x162a24: 0xac820000
    ctx->pc = 0x162a24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x162a28: 0x3c031000
    ctx->pc = 0x162a28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162a2c: 0x3463d000
    ctx->pc = 0x162a2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53248));
    // 0x162a30: 0x8d87000c
    ctx->pc = 0x162a30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x162a34: 0x0
    ctx->pc = 0x162a34u;
    // NOP
label_162a38:
    // 0x162a38: 0x8c620000
    ctx->pc = 0x162a38u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x162a3c: 0x30420100
    ctx->pc = 0x162a3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x162a40: 0x0
    ctx->pc = 0x162a40u;
    // NOP
    // 0x162a44: 0x0
    ctx->pc = 0x162a44u;
    // NOP
    // 0x162a48: 0x0
    ctx->pc = 0x162a48u;
    // NOP
    // 0x162a4c: 0x1440fffa
    ctx->pc = 0x162A4Cu;
    {
        const bool branch_taken_0x162a4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x162a4c) {
            ctx->pc = 0x162A38u;
            goto label_162a38;
        }
    }
    ctx->pc = 0x162A54u;
    // 0x162a54: 0x3c031000
    ctx->pc = 0x162a54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x162a58: 0x3463d020
    ctx->pc = 0x162a58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53280));
    // 0x162a5c: 0x0
    ctx->pc = 0x162a5cu;
    // NOP
label_162a60:
    // 0x162a60: 0x8c620000
    ctx->pc = 0x162a60u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x162a64: 0x0
    ctx->pc = 0x162a64u;
    // NOP
    // 0x162a68: 0x0
    ctx->pc = 0x162a68u;
    // NOP
    // 0x162a6c: 0x0
    ctx->pc = 0x162a6cu;
    // NOP
    // 0x162a70: 0x0
    ctx->pc = 0x162a70u;
    // NOP
    // 0x162a74: 0x1440fffa
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162A60u;
            goto label_162a60;
        }
    }
    ctx->pc = 0x162A7Cu;
    // 0x162a7c: 0x120402d
    ctx->pc = 0x162a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a80: 0xc7102a
    ctx->pc = 0x162a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x162a84: 0x1440ffc2
    ctx->pc = 0x162A84u;
    {
        const bool branch_taken_0x162a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162A88u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162a84) {
            ctx->pc = 0x162990u;
            goto label_162990;
        }
    }
    ctx->pc = 0x162A8Cu;
    // 0x162a8c: 0x10000003
    ctx->pc = 0x162A8Cu;
    {
        const bool branch_taken_0x162a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162A90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
        if (branch_taken_0x162a8c) {
            ctx->pc = 0x162A9Cu;
            goto label_162a9c;
        }
    }
    ctx->pc = 0x162A94u;
label_162a94:
    // 0x162a94: 0x24ad0001
    ctx->pc = 0x162a94u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
    // 0x162a98: 0x8f0200e4
    ctx->pc = 0x162a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
label_162a9c:
    // 0x162a9c: 0x240300c0
    ctx->pc = 0x162a9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x162aa0: 0x1a0282d
    ctx->pc = 0x162aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162aa4: 0x433018
    ctx->pc = 0x162aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x162aa8: 0xb9202a
    ctx->pc = 0x162aa8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 25)));
    // 0x162aac: 0x1480ffb4
    ctx->pc = 0x162AACu;
    {
        const bool branch_taken_0x162aac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x162AB0u;
        SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        if (branch_taken_0x162aac) {
            ctx->pc = 0x162980u;
            goto label_162980;
        }
    }
    ctx->pc = 0x162AB4u;
label_162ab4:
    // 0x162ab4: 0x3e00008
    ctx->pc = 0x162AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16291Cu: goto label_16291c;
            case 0x162924u: goto label_162924;
            case 0x162940u: goto label_162940;
            case 0x162944u: goto label_162944;
            case 0x16294Cu: goto label_16294c;
            case 0x162970u: goto label_162970;
            case 0x162980u: goto label_162980;
            case 0x162990u: goto label_162990;
            case 0x1629D8u: goto label_1629d8;
            case 0x162A38u: goto label_162a38;
            case 0x162A60u: goto label_162a60;
            case 0x162A94u: goto label_162a94;
            case 0x162A9Cu: goto label_162a9c;
            case 0x162AB4u: goto label_162ab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162ABCu;
}
