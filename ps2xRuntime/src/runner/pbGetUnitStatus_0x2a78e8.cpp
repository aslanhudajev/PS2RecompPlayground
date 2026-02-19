#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetUnitStatus
// Address: 0x2a78e8 - 0x2a7c00
void pbGetUnitStatus_0x2a78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a78e8u;

    // 0x2a78e8: 0x27bdff80
    ctx->pc = 0x2a78e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a78ec: 0xffbf0070
    ctx->pc = 0x2a78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a78f0: 0xffbe0060
    ctx->pc = 0x2a78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2a78f4: 0xffb00050
    ctx->pc = 0x2a78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a78f8: 0x3a0f02d
    ctx->pc = 0x2a78f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78fc: 0x3c100036
    ctx->pc = 0x2a78fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a7900: 0x8e10dee0
    ctx->pc = 0x2a7900u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a7904: 0x3c021001
    ctx->pc = 0x2a7904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7908: 0x8c428000
    ctx->pc = 0x2a7908u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294934528))); // MMIO: 0x10008000
    // 0x2a790c: 0xafc20004
    ctx->pc = 0x2a790cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2a7910: 0x3c021001
    ctx->pc = 0x2a7910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7914: 0x8c429000
    ctx->pc = 0x2a7914u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294938624))); // MMIO: 0x10009000
    // 0x2a7918: 0xafc20008
    ctx->pc = 0x2a7918u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a791c: 0x3c021001
    ctx->pc = 0x2a791cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7920: 0x8c42a000
    ctx->pc = 0x2a7920u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x2a7924: 0xafc2000c
    ctx->pc = 0x2a7924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a7928: 0x3c021001
    ctx->pc = 0x2a7928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a792c: 0x8c42b000
    ctx->pc = 0x2a792cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294946816))); // MMIO: 0x1000b000
    // 0x2a7930: 0xafc20010
    ctx->pc = 0x2a7930u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a7934: 0x3c021001
    ctx->pc = 0x2a7934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7938: 0x8c42b400
    ctx->pc = 0x2a7938u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294947840))); // MMIO: 0x1000b400
    // 0x2a793c: 0xafc20014
    ctx->pc = 0x2a793cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x2a7940: 0x3c021001
    ctx->pc = 0x2a7940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7944: 0x8c42c000
    ctx->pc = 0x2a7944u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294950912))); // MMIO: 0x1000c000
    // 0x2a7948: 0xafc20018
    ctx->pc = 0x2a7948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x2a794c: 0x3c021001
    ctx->pc = 0x2a794cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7950: 0x8c42c400
    ctx->pc = 0x2a7950u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294951936))); // MMIO: 0x1000c400
    // 0x2a7954: 0xafc2001c
    ctx->pc = 0x2a7954u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x2a7958: 0x3c021001
    ctx->pc = 0x2a7958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a795c: 0x8c42c800
    ctx->pc = 0x2a795cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294952960))); // MMIO: 0x1000c800
    // 0x2a7960: 0xafc20020
    ctx->pc = 0x2a7960u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x2a7964: 0x3c021001
    ctx->pc = 0x2a7964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7968: 0x8c42d000
    ctx->pc = 0x2a7968u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294955008))); // MMIO: 0x1000d000
    // 0x2a796c: 0xafc20024
    ctx->pc = 0x2a796cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x2a7970: 0x3c021001
    ctx->pc = 0x2a7970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x2a7974: 0x8c42d400
    ctx->pc = 0x2a7974u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294956032))); // MMIO: 0x1000d400
    // 0x2a7978: 0xafc20028
    ctx->pc = 0x2a7978u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x2a797c: 0x3c021000
    ctx->pc = 0x2a797cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a7980: 0x8c423800
    ctx->pc = 0x2a7980u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 14336))); // MMIO: 0x10003800
    // 0x2a7984: 0xafc2002c
    ctx->pc = 0x2a7984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x2a7988: 0x3c021000
    ctx->pc = 0x2a7988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a798c: 0x8c423c00
    ctx->pc = 0x2a798cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 15360))); // MMIO: 0x10003c00
    // 0x2a7990: 0xafc20030
    ctx->pc = 0x2a7990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x2a7994: 0xc0ace26
    ctx->pc = 0x2A7994u;
    SET_GPR_U32(ctx, 31, 0x2A799Cu);
    ctx->pc = 0x2B3898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuStat_0x2b3898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A799Cu; }
    }
    if (ctx->pc != 0x2A799Cu) { return; }
    ctx->pc = 0x2A799Cu;
    // 0x2a799c: 0xafc20034
    ctx->pc = 0x2a799cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x2a79a0: 0x3c021000
    ctx->pc = 0x2a79a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a79a4: 0x8c423020
    ctx->pc = 0x2a79a4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 12320))); // MMIO: 0x10003020
    // 0x2a79a8: 0xafc2003c
    ctx->pc = 0x2a79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x2a79ac: 0x3c021200
    ctx->pc = 0x2a79acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2a79b0: 0xdc421000
    ctx->pc = 0x2a79b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x2a79b4: 0x2183c
    ctx->pc = 0x2a79b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a79b8: 0x3183f
    ctx->pc = 0x2a79b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a79bc: 0xafc30040
    ctx->pc = 0x2a79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 3));
    // 0x2a79c0: 0xafc00000
    ctx->pc = 0x2a79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2a79c4: 0x8fc20000
    ctx->pc = 0x2a79c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a79c8: 0x8e030020
    ctx->pc = 0x2a79c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a79cc: 0x8c64001c
    ctx->pc = 0x2a79ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2a79d0: 0x10800002
    ctx->pc = 0x2A79D0u;
    {
        const bool branch_taken_0x2a79d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a79d0) {
            ctx->pc = 0x2A79DCu;
            goto label_2a79dc;
        }
    }
    ctx->pc = 0x2A79D8u;
    // 0x2a79d8: 0x34420040
    ctx->pc = 0x2a79d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_2a79dc:
    // 0x2a79dc: 0xafc20000
    ctx->pc = 0x2a79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a79e0: 0x8fc20000
    ctx->pc = 0x2a79e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a79e4: 0x8e030020
    ctx->pc = 0x2a79e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a79e8: 0x8c640034
    ctx->pc = 0x2a79e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a79ec: 0x10800002
    ctx->pc = 0x2A79ECu;
    {
        const bool branch_taken_0x2a79ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a79ec) {
            ctx->pc = 0x2A79F8u;
            goto label_2a79f8;
        }
    }
    ctx->pc = 0x2A79F4u;
    // 0x2a79f4: 0x34420080
    ctx->pc = 0x2a79f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
label_2a79f8:
    // 0x2a79f8: 0xafc20000
    ctx->pc = 0x2a79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a79fc: 0x8fc20000
    ctx->pc = 0x2a79fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a00: 0x8e030020
    ctx->pc = 0x2a7a00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a7a04: 0x8c64004c
    ctx->pc = 0x2a7a04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a7a08: 0x10800002
    ctx->pc = 0x2A7A08u;
    {
        const bool branch_taken_0x2a7a08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7a08) {
            ctx->pc = 0x2A7A14u;
            goto label_2a7a14;
        }
    }
    ctx->pc = 0x2A7A10u;
    // 0x2a7a10: 0x34420100
    ctx->pc = 0x2a7a10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
label_2a7a14:
    // 0x2a7a14: 0xafc20000
    ctx->pc = 0x2a7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a18: 0x8fc20000
    ctx->pc = 0x2a7a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a1c: 0x8fc40004
    ctx->pc = 0x2a7a1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a7a20: 0x30830100
    ctx->pc = 0x2a7a20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7a24: 0x10600002
    ctx->pc = 0x2A7A24u;
    {
        const bool branch_taken_0x2a7a24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7a24) {
            ctx->pc = 0x2A7A30u;
            goto label_2a7a30;
        }
    }
    ctx->pc = 0x2A7A2Cu;
    // 0x2a7a2c: 0x34420040
    ctx->pc = 0x2a7a2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
label_2a7a30:
    // 0x2a7a30: 0xafc20000
    ctx->pc = 0x2a7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a34: 0x8fc20000
    ctx->pc = 0x2a7a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a38: 0x8fc40008
    ctx->pc = 0x2a7a38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7a3c: 0x30830100
    ctx->pc = 0x2a7a3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7a40: 0x10600002
    ctx->pc = 0x2A7A40u;
    {
        const bool branch_taken_0x2a7a40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7a40) {
            ctx->pc = 0x2A7A4Cu;
            goto label_2a7a4c;
        }
    }
    ctx->pc = 0x2A7A48u;
    // 0x2a7a48: 0x34420080
    ctx->pc = 0x2a7a48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
label_2a7a4c:
    // 0x2a7a4c: 0xafc20000
    ctx->pc = 0x2a7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a50: 0x8fc3000c
    ctx->pc = 0x2a7a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a7a54: 0x30620100
    ctx->pc = 0x2a7a54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a7a58: 0x8fc30000
    ctx->pc = 0x2a7a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a5c: 0x621025
    ctx->pc = 0x2a7a5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7a60: 0xafc20000
    ctx->pc = 0x2a7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a64: 0x8fc20000
    ctx->pc = 0x2a7a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a68: 0x8fc40010
    ctx->pc = 0x2a7a68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a7a6c: 0x30830100
    ctx->pc = 0x2a7a6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7a70: 0x10600002
    ctx->pc = 0x2A7A70u;
    {
        const bool branch_taken_0x2a7a70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7a70) {
            ctx->pc = 0x2A7A7Cu;
            goto label_2a7a7c;
        }
    }
    ctx->pc = 0x2A7A78u;
    // 0x2a7a78: 0x34420200
    ctx->pc = 0x2a7a78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
label_2a7a7c:
    // 0x2a7a7c: 0xafc20000
    ctx->pc = 0x2a7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a80: 0x8fc20000
    ctx->pc = 0x2a7a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7a84: 0x8fc40014
    ctx->pc = 0x2a7a84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a7a88: 0x30830100
    ctx->pc = 0x2a7a88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7a8c: 0x10600002
    ctx->pc = 0x2A7A8Cu;
    {
        const bool branch_taken_0x2a7a8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7a8c) {
            ctx->pc = 0x2A7A98u;
            goto label_2a7a98;
        }
    }
    ctx->pc = 0x2A7A94u;
    // 0x2a7a94: 0x34420400
    ctx->pc = 0x2a7a94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1024));
label_2a7a98:
    // 0x2a7a98: 0xafc20000
    ctx->pc = 0x2a7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7a9c: 0x8fc20000
    ctx->pc = 0x2a7a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7aa0: 0x8fc40018
    ctx->pc = 0x2a7aa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x2a7aa4: 0x30830100
    ctx->pc = 0x2a7aa4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7aa8: 0x10600002
    ctx->pc = 0x2A7AA8u;
    {
        const bool branch_taken_0x2a7aa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7aa8) {
            ctx->pc = 0x2A7AB4u;
            goto label_2a7ab4;
        }
    }
    ctx->pc = 0x2A7AB0u;
    // 0x2a7ab0: 0x34420800
    ctx->pc = 0x2a7ab0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_2a7ab4:
    // 0x2a7ab4: 0xafc20000
    ctx->pc = 0x2a7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7ab8: 0x8fc20000
    ctx->pc = 0x2a7ab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7abc: 0x8fc4001c
    ctx->pc = 0x2a7abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2a7ac0: 0x30830100
    ctx->pc = 0x2a7ac0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7ac4: 0x10600002
    ctx->pc = 0x2A7AC4u;
    {
        const bool branch_taken_0x2a7ac4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ac4) {
            ctx->pc = 0x2A7AD0u;
            goto label_2a7ad0;
        }
    }
    ctx->pc = 0x2A7ACCu;
    // 0x2a7acc: 0x34421000
    ctx->pc = 0x2a7accu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
label_2a7ad0:
    // 0x2a7ad0: 0xafc20000
    ctx->pc = 0x2a7ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7ad4: 0x8fc20000
    ctx->pc = 0x2a7ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7ad8: 0x8fc40020
    ctx->pc = 0x2a7ad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2a7adc: 0x30830100
    ctx->pc = 0x2a7adcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7ae0: 0x10600002
    ctx->pc = 0x2A7AE0u;
    {
        const bool branch_taken_0x2a7ae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ae0) {
            ctx->pc = 0x2A7AECu;
            goto label_2a7aec;
        }
    }
    ctx->pc = 0x2A7AE8u;
    // 0x2a7ae8: 0x34422000
    ctx->pc = 0x2a7ae8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
label_2a7aec:
    // 0x2a7aec: 0xafc20000
    ctx->pc = 0x2a7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7af0: 0x8fc20000
    ctx->pc = 0x2a7af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7af4: 0x8fc40024
    ctx->pc = 0x2a7af4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2a7af8: 0x30830100
    ctx->pc = 0x2a7af8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7afc: 0x10600002
    ctx->pc = 0x2A7AFCu;
    {
        const bool branch_taken_0x2a7afc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7afc) {
            ctx->pc = 0x2A7B08u;
            goto label_2a7b08;
        }
    }
    ctx->pc = 0x2A7B04u;
    // 0x2a7b04: 0x34424000
    ctx->pc = 0x2a7b04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
label_2a7b08:
    // 0x2a7b08: 0xafc20000
    ctx->pc = 0x2a7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b0c: 0x8fc20000
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b10: 0x8fc40028
    ctx->pc = 0x2a7b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2a7b14: 0x30830100
    ctx->pc = 0x2a7b14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7b18: 0x10600002
    ctx->pc = 0x2A7B18u;
    {
        const bool branch_taken_0x2a7b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7b18) {
            ctx->pc = 0x2A7B24u;
            goto label_2a7b24;
        }
    }
    ctx->pc = 0x2A7B20u;
    // 0x2a7b20: 0x34428000
    ctx->pc = 0x2a7b20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_2a7b24:
    // 0x2a7b24: 0xafc20000
    ctx->pc = 0x2a7b24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b28: 0x8fc3002c
    ctx->pc = 0x2a7b28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x2a7b2c: 0x30620003
    ctx->pc = 0x2a7b2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a7b30: 0x2102b
    ctx->pc = 0x2a7b30u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a7b34: 0x8fc30000
    ctx->pc = 0x2a7b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b38: 0x431025
    ctx->pc = 0x2a7b38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a7b3c: 0xafc20000
    ctx->pc = 0x2a7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b40: 0x8fc20000
    ctx->pc = 0x2a7b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b44: 0x8fc40030
    ctx->pc = 0x2a7b44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x2a7b48: 0x30830003
    ctx->pc = 0x2a7b48u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 3));
    // 0x2a7b4c: 0x10600002
    ctx->pc = 0x2A7B4Cu;
    {
        const bool branch_taken_0x2a7b4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7b4c) {
            ctx->pc = 0x2A7B58u;
            goto label_2a7b58;
        }
    }
    ctx->pc = 0x2A7B54u;
    // 0x2a7b54: 0x34420002
    ctx->pc = 0x2a7b54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_2a7b58:
    // 0x2a7b58: 0xafc20000
    ctx->pc = 0x2a7b58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b5c: 0x8fc20000
    ctx->pc = 0x2a7b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b60: 0x8fc40034
    ctx->pc = 0x2a7b60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x2a7b64: 0x30830001
    ctx->pc = 0x2a7b64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x2a7b68: 0x10600002
    ctx->pc = 0x2A7B68u;
    {
        const bool branch_taken_0x2a7b68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7b68) {
            ctx->pc = 0x2A7B74u;
            goto label_2a7b74;
        }
    }
    ctx->pc = 0x2A7B70u;
    // 0x2a7b70: 0x34420008
    ctx->pc = 0x2a7b70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_2a7b74:
    // 0x2a7b74: 0xafc20000
    ctx->pc = 0x2a7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b78: 0x8fc20000
    ctx->pc = 0x2a7b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b7c: 0x8fc40034
    ctx->pc = 0x2a7b7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x2a7b80: 0x30830100
    ctx->pc = 0x2a7b80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 256));
    // 0x2a7b84: 0x10600002
    ctx->pc = 0x2A7B84u;
    {
        const bool branch_taken_0x2a7b84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7b84) {
            ctx->pc = 0x2A7B90u;
            goto label_2a7b90;
        }
    }
    ctx->pc = 0x2A7B8Cu;
    // 0x2a7b8c: 0x34420010
    ctx->pc = 0x2a7b8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
label_2a7b90:
    // 0x2a7b90: 0xafc20000
    ctx->pc = 0x2a7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7b94: 0x8fc20000
    ctx->pc = 0x2a7b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b98: 0x8fc4003c
    ctx->pc = 0x2a7b98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x2a7b9c: 0x30830608
    ctx->pc = 0x2a7b9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1544));
    // 0x2a7ba0: 0x10600002
    ctx->pc = 0x2A7BA0u;
    {
        const bool branch_taken_0x2a7ba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ba0) {
            ctx->pc = 0x2A7BACu;
            goto label_2a7bac;
        }
    }
    ctx->pc = 0x2A7BA8u;
    // 0x2a7ba8: 0x34420004
    ctx->pc = 0x2a7ba8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_2a7bac:
    // 0x2a7bac: 0xafc20000
    ctx->pc = 0x2a7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7bb0: 0x8fc20000
    ctx->pc = 0x2a7bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7bb4: 0x8fc40040
    ctx->pc = 0x2a7bb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x2a7bb8: 0x41b82
    ctx->pc = 0x2a7bb8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 14));
    // 0x2a7bbc: 0x30640003
    ctx->pc = 0x2a7bbcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a7bc0: 0x24030001
    ctx->pc = 0x2a7bc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7bc4: 0x10830002
    ctx->pc = 0x2A7BC4u;
    {
        const bool branch_taken_0x2a7bc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2a7bc4) {
            ctx->pc = 0x2A7BD0u;
            goto label_2a7bd0;
        }
    }
    ctx->pc = 0x2A7BCCu;
    // 0x2a7bcc: 0x34420020
    ctx->pc = 0x2a7bccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
label_2a7bd0:
    // 0x2a7bd0: 0xafc20000
    ctx->pc = 0x2a7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2a7bd4: 0x8fc30000
    ctx->pc = 0x2a7bd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7bd8: 0x60102d
    ctx->pc = 0x2a7bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bdc: 0x10000001
    ctx->pc = 0x2A7BDCu;
    {
        const bool branch_taken_0x2a7bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7bdc) {
            ctx->pc = 0x2A7BE4u;
            goto label_2a7be4;
        }
    }
    ctx->pc = 0x2A7BE4u;
label_2a7be4:
    // 0x2a7be4: 0x3c0e82d
    ctx->pc = 0x2a7be4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7be8: 0xdfbf0070
    ctx->pc = 0x2a7be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7bec: 0xdfbe0060
    ctx->pc = 0x2a7becu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7bf0: 0xdfb00050
    ctx->pc = 0x2a7bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7bf4: 0x27bd0080
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7bf8: 0x3e00008
    ctx->pc = 0x2A7BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A79DCu: goto label_2a79dc;
            case 0x2A79F8u: goto label_2a79f8;
            case 0x2A7A14u: goto label_2a7a14;
            case 0x2A7A30u: goto label_2a7a30;
            case 0x2A7A4Cu: goto label_2a7a4c;
            case 0x2A7A7Cu: goto label_2a7a7c;
            case 0x2A7A98u: goto label_2a7a98;
            case 0x2A7AB4u: goto label_2a7ab4;
            case 0x2A7AD0u: goto label_2a7ad0;
            case 0x2A7AECu: goto label_2a7aec;
            case 0x2A7B08u: goto label_2a7b08;
            case 0x2A7B24u: goto label_2a7b24;
            case 0x2A7B58u: goto label_2a7b58;
            case 0x2A7B74u: goto label_2a7b74;
            case 0x2A7B90u: goto label_2a7b90;
            case 0x2A7BACu: goto label_2a7bac;
            case 0x2A7BD0u: goto label_2a7bd0;
            case 0x2A7BE4u: goto label_2a7be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A7C00u;
}
