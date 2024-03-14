#patch backport-5.4 (come from openwrt/lede/target/linux/mediatek)
SRC_URI_append = " \
    file://010-Kbuild-don-t-hardcode-path-to-awk-in-scripts-ld-vers.patch \
    file://011-kbuild-export-SUBARCH.patch \
    file://030-modpost-add-a-helper-to-get-data-pointed-by-a-symbol.patch \
    file://031-modpost-refactor-namespace_from_kstrtabns-to-not-har.patch \
    file://041-v5.5-arm64-Implement-optimised-checksum-routine.patch \
    file://042-v5.5-arm64-csum-Fix-pathological-zero-length-calls.patch \
    file://080-wireguard-0001-crypto-lib-tidy-up-lib-crypto-Kconfig-and-Makefile.patch \
    file://080-wireguard-0002-crypto-chacha-move-existing-library-code-into-lib-cr.patch \
    file://080-wireguard-0003-crypto-x86-chacha-depend-on-generic-chacha-library-i.patch \
    file://080-wireguard-0004-crypto-x86-chacha-expose-SIMD-ChaCha-routine-as-libr.patch \
    file://080-wireguard-0005-crypto-arm64-chacha-depend-on-generic-chacha-library.patch \
    file://080-wireguard-0006-crypto-arm64-chacha-expose-arm64-ChaCha-routine-as-l.patch \
    file://080-wireguard-0007-crypto-arm-chacha-import-Eric-Biggers-s-scalar-accel.patch \
    file://080-wireguard-0008-crypto-arm-chacha-remove-dependency-on-generic-ChaCh.patch \
    file://080-wireguard-0009-crypto-arm-chacha-expose-ARM-ChaCha-routine-as-libra.patch \
    file://080-wireguard-0010-crypto-mips-chacha-import-32r2-ChaCha-code-from-Zinc.patch \
    file://080-wireguard-0011-crypto-mips-chacha-wire-up-accelerated-32r2-code-fro.patch \
    file://080-wireguard-0012-crypto-chacha-unexport-chacha_generic-routines.patch \
    file://080-wireguard-0013-crypto-poly1305-move-core-routines-into-a-separate-l.patch \
    file://080-wireguard-0014-crypto-x86-poly1305-unify-Poly1305-state-struct-with.patch \
    file://080-wireguard-0015-crypto-poly1305-expose-init-update-final-library-int.patch \
    file://080-wireguard-0016-crypto-x86-poly1305-depend-on-generic-library-not-ge.patch \
    file://080-wireguard-0017-crypto-x86-poly1305-expose-existing-driver-as-poly13.patch \
    file://080-wireguard-0018-crypto-arm64-poly1305-incorporate-OpenSSL-CRYPTOGAMS.patch \
    file://080-wireguard-0019-crypto-arm-poly1305-incorporate-OpenSSL-CRYPTOGAMS-N.patch \
    file://080-wireguard-0020-crypto-mips-poly1305-incorporate-OpenSSL-CRYPTOGAMS-.patch \
    file://080-wireguard-0022-crypto-testmgr-add-test-cases-for-Blake2s.patch \
    file://080-wireguard-0023-crypto-blake2s-implement-generic-shash-driver.patch \
    file://080-wireguard-0024-crypto-blake2s-x86_64-SIMD-implementation.patch \
    file://080-wireguard-0025-crypto-curve25519-generic-C-library-implementations.patch \
    file://080-wireguard-0026-crypto-curve25519-add-kpp-selftest.patch \
    file://080-wireguard-0027-crypto-curve25519-implement-generic-KPP-driver.patch \
    file://080-wireguard-0028-crypto-lib-curve25519-work-around-Clang-stack-spilli.patch \
    file://080-wireguard-0029-crypto-curve25519-x86_64-library-and-KPP-implementat.patch \
    file://080-wireguard-0030-crypto-arm-curve25519-import-Bernstein-and-Schwabe-s.patch \
    file://080-wireguard-0031-crypto-arm-curve25519-wire-up-NEON-implementation.patch \
    file://080-wireguard-0032-crypto-chacha20poly1305-import-construction-and-self.patch \
    file://080-wireguard-0033-crypto-lib-chacha20poly1305-reimplement-crypt_from_s.patch \
    file://080-wireguard-0034-crypto-chacha_generic-remove-unnecessary-setkey-func.patch \
    file://080-wireguard-0035-crypto-x86-chacha-only-unregister-algorithms-if-regi.patch \
    file://080-wireguard-0036-crypto-lib-chacha20poly1305-use-chacha20_crypt.patch \
    file://080-wireguard-0037-crypto-arch-conditionalize-crypto-api-in-arch-glue-f.patch \
    file://080-wireguard-0038-crypto-chacha-fix-warning-message-in-header-file.patch \
    file://080-wireguard-0039-crypto-arm-curve25519-add-arch-specific-key-generati.patch \
    file://080-wireguard-0040-crypto-lib-curve25519-re-add-selftests.patch \
    file://080-wireguard-0041-crypto-poly1305-add-new-32-and-64-bit-generic-versio.patch \
    file://080-wireguard-0042-crypto-x86-poly1305-import-unmodified-cryptogams-imp.patch \
    file://080-wireguard-0043-crypto-x86-poly1305-wire-up-faster-implementations-f.patch \
    file://080-wireguard-0044-crypto-arm-arm64-mips-poly1305-remove-redundant-non-.patch \
    file://080-wireguard-0045-crypto-curve25519-Fix-selftest-build-error.patch \
    file://080-wireguard-0046-crypto-x86-poly1305-fix-.gitignore-typo.patch \
    file://080-wireguard-0047-crypto-chacha20poly1305-add-back-missing-test-vector.patch \
    file://080-wireguard-0048-crypto-x86-poly1305-emit-does-base-conversion-itself.patch \
    file://080-wireguard-0049-crypto-arm-chacha-fix-build-failured-when-kernel-mod.patch \
    file://080-wireguard-0050-crypto-Kconfig-allow-tests-to-be-disabled-when-manag.patch \
    file://080-wireguard-0051-crypto-chacha20poly1305-prevent-integer-overflow-on-.patch \
    file://080-wireguard-0052-crypto-x86-curve25519-support-assemblers-with-no-adx.patch \
    file://080-wireguard-0053-crypto-arm64-chacha-correctly-walk-through-blocks.patch \
    file://080-wireguard-0054-crypto-x86-curve25519-replace-with-formally-verified.patch \
    file://080-wireguard-0055-crypto-x86-curve25519-leave-r12-as-spare-register.patch \
    file://080-wireguard-0056-crypto-arm-64-poly1305-add-artifact-to-.gitignore-fi.patch \
    file://080-wireguard-0057-crypto-arch-lib-limit-simd-usage-to-4k-chunks.patch \
    file://080-wireguard-0058-crypto-lib-chacha20poly1305-Add-missing-function-dec.patch \
    file://080-wireguard-0059-crypto-x86-chacha-sse3-use-unaligned-loads-for-state.patch \
    file://080-wireguard-0060-crypto-x86-curve25519-Remove-unused-carry-variables.patch \
    file://080-wireguard-0061-crypto-arm-curve25519-include-linux-scatterlist.h.patch \
    file://080-wireguard-0062-crypto-arm-poly1305-Add-prototype-for-poly1305_block.patch \
    file://080-wireguard-0063-crypto-curve25519-x86_64-Use-XORL-r32-32.patch \
    file://080-wireguard-0064-crypto-poly1305-x86_64-Use-XORL-r32-32.patch \
    file://080-wireguard-0065-crypto-x86-poly1305-Remove-assignments-with-no-effec.patch \
    file://080-wireguard-0066-crypto-x86-poly1305-add-back-a-needed-assignment.patch \
    file://080-wireguard-0067-crypto-Kconfig-CRYPTO_MANAGER_EXTRA_TESTS-requires-t.patch \
    file://080-wireguard-0068-crypto-arm-chacha-neon-optimize-for-non-block-size-m.patch \
    file://080-wireguard-0069-crypto-arm64-chacha-simplify-tail-block-handling.patch \
    file://080-wireguard-0070-crypto-lib-chacha20poly1305-define-empty-module-exit.patch \
    file://080-wireguard-0071-crypto-arm-chacha-neon-add-missing-counter-increment.patch \
    file://080-wireguard-0072-net-WireGuard-secure-network-tunnel.patch \
    file://080-wireguard-0073-wireguard-selftests-import-harness-makefile-for-test.patch \
    file://080-wireguard-0074-wireguard-Kconfig-select-parent-dependency-for-crypt.patch \
    file://080-wireguard-0075-wireguard-global-fix-spelling-mistakes-in-comments.patch \
    file://080-wireguard-0076-wireguard-main-remove-unused-include-linux-version.h.patch \
    file://080-wireguard-0077-wireguard-allowedips-use-kfree_rcu-instead-of-call_r.patch \
    file://080-wireguard-0078-wireguard-selftests-remove-ancient-kernel-compatibil.patch \
    file://080-wireguard-0079-wireguard-queueing-do-not-account-for-pfmemalloc-whe.patch \
    file://080-wireguard-0080-wireguard-socket-mark-skbs-as-not-on-list-when-recei.patch \
    file://080-wireguard-0081-wireguard-allowedips-fix-use-after-free-in-root_remo.patch \
    file://080-wireguard-0082-wireguard-noise-reject-peers-with-low-order-public-k.patch \
    file://080-wireguard-0083-wireguard-selftests-ensure-non-addition-of-peers-wit.patch \
    file://080-wireguard-0084-wireguard-selftests-tie-socket-waiting-to-target-pid.patch \
    file://080-wireguard-0085-wireguard-device-use-icmp_ndo_send-helper.patch \
    file://080-wireguard-0086-wireguard-selftests-reduce-complexity-and-fix-make-r.patch \
    file://080-wireguard-0087-wireguard-receive-reset-last_under_load-to-zero.patch \
    file://080-wireguard-0088-wireguard-send-account-for-mtu-0-devices.patch \
    file://080-wireguard-0089-wireguard-socket-remove-extra-call-to-synchronize_ne.patch \
    file://080-wireguard-0090-wireguard-selftests-remove-duplicated-include-sys-ty.patch \
    file://080-wireguard-0091-wireguard-queueing-account-for-skb-protocol-0.patch \
    file://080-wireguard-0092-wireguard-receive-remove-dead-code-from-default-pack.patch \
    file://080-wireguard-0093-wireguard-noise-error-out-precomputed-DH-during-hand.patch \
    file://080-wireguard-0094-wireguard-send-remove-errant-newline-from-packet_enc.patch \
    file://080-wireguard-0095-wireguard-queueing-cleanup-ptr_ring-in-error-path-of.patch \
    file://080-wireguard-0096-wireguard-receive-use-tunnel-helpers-for-decapsulati.patch \
    file://080-wireguard-0097-wireguard-selftests-use-normal-kernel-stack-size-on-.patch \
    file://080-wireguard-0098-wireguard-socket-remove-errant-restriction-on-loopin.patch \
    file://080-wireguard-0099-wireguard-send-receive-cond_resched-when-processing-.patch \
    file://080-wireguard-0100-wireguard-selftests-initalize-ipv6-members-to-NULL-t.patch \
    file://080-wireguard-0101-wireguard-send-receive-use-explicit-unlikely-branch-.patch \
    file://080-wireguard-0102-wireguard-selftests-use-newer-iproute2-for-gcc-10.patch \
    file://080-wireguard-0103-wireguard-noise-read-preshared-key-while-taking-lock.patch \
    file://080-wireguard-0104-wireguard-queueing-preserve-flow-hash-across-packet-.patch \
    file://080-wireguard-0105-wireguard-noise-separate-receive-counter-from-send-c.patch \
    file://080-wireguard-0106-wireguard-noise-do-not-assign-initiation-time-in-if-.patch \
    file://080-wireguard-0107-wireguard-device-avoid-circular-netns-references.patch \
    file://080-wireguard-0108-wireguard-receive-account-for-napi_gro_receive-never.patch \
    file://080-wireguard-0109-net-ip_tunnel-add-header_ops-for-layer-3-devices.patch \
    file://080-wireguard-0110-wireguard-implement-header_ops-parse_protocol-for-AF.patch \
    file://080-wireguard-0111-wireguard-queueing-make-use-of-ip_tunnel_parse_proto.patch \
    file://080-wireguard-0112-netlink-consistently-use-NLA_POLICY_EXACT_LEN.patch \
    file://080-wireguard-0113-netlink-consistently-use-NLA_POLICY_MIN_LEN.patch \
    file://080-wireguard-0114-wireguard-noise-take-lock-when-removing-handshake-en.patch \
    file://080-wireguard-0115-wireguard-peerlookup-take-lock-before-checking-hash-.patch \
    file://080-wireguard-0116-wireguard-selftests-check-that-route_me_harder-packe.patch \
    file://080-wireguard-0117-wireguard-avoid-double-unlikely-notation-when-using-.patch \
    file://080-wireguard-0118-wireguard-socket-remove-bogus-__be32-annotation.patch \
    file://080-wireguard-0119-wireguard-selftests-test-multiple-parallel-streams.patch \
    file://080-wireguard-0120-wireguard-peer-put-frequently-used-members-above-cac.patch \
    file://080-wireguard-0121-wireguard-device-do-not-generate-ICMP-for-non-IP-pac.patch \
    file://080-wireguard-0122-wireguard-queueing-get-rid-of-per-peer-ring-buffers.patch \
    file://080-wireguard-0123-wireguard-kconfig-use-arm-chacha-even-with-no-neon.patch \
    file://080-wireguard-0124-crypto-mips-poly1305-enable-for-all-MIPS-processors.patch \
    file://080-wireguard-0125-crypto-mips-add-poly1305-core.S-to-.gitignore.patch \
    file://080-wireguard-0126-crypto-poly1305-fix-poly1305_core_setkey-declaration.patch \
    file://080-wireguard-0127-wireguard-selftests-remove-old-conntrack-kconfig-val.patch \
    file://080-wireguard-0128-wireguard-selftests-make-sure-rp_filter-is-disabled-.patch \
    file://080-wireguard-0129-wireguard-do-not-use-O3.patch \
    file://080-wireguard-0130-wireguard-use-synchronize_net-rather-than-synchroniz.patch \
    file://080-wireguard-0131-wireguard-peer-allocate-in-kmem_cache.patch \
    file://080-wireguard-0132-wireguard-allowedips-initialize-list-head-in-selftes.patch \
    file://080-wireguard-0133-wireguard-allowedips-remove-nodes-in-O-1.patch \
    file://080-wireguard-0134-wireguard-allowedips-allocate-nodes-in-kmem_cache.patch \
    file://080-wireguard-0135-wireguard-allowedips-free-empty-intermediate-nodes-w.patch \
    file://080-wireguard-0136-lib-crypto-blake2s-move-hmac-construction-into-wireg.patch \
    file://300-MIPS-Exclude-more-dsemul-code-when-CONFIG_MIPS_FP_SU.patch \
    file://310-mips-Kconfig-Add-ARCH_HAS_FORTIFY_SOURCE.patch \
    file://310-v5.6-mips-vdso-fix-jalr-t9-crash-in-vdso-code.patch \
    file://311-MIPS-Fix-exception-handler-memcpy.patch \
    file://343-netfilter-nft_flow_offload-handle-netdevice-events-f.patch \
    file://370-netfilter-nf_flow_table-fix-offloaded-connection-tim.patch \
    file://371-netfilter-nf_flow_table-fix-up-ct-state-of-flows-aft.patch \
    file://393-v5.5-sch_cake-drop-unused-variable-tin_quantum_prio.patch \
    file://395-v5.8-net-sch_cake-Take-advantage-of-skb-hash-where-appropriate.patch \
    file://399-5.9-sch_cake-add-RFC-8622-LE-PHB-support-to-CAKE-diffser.patch \
    file://400-v5.8-dt-bindings-mtd-partition-Document-the-slc-mode-prop.patch \
    file://401-v5.11-dt-bindings-mtd-convert-fixed-partitions-to-the-json.patch \
    file://402-v5.12-0001-dt-bindings-mtd-move-partition-binding-to-its-own-fi.patch \
    file://402-v5.12-0002-dt-bindings-mtd-add-binding-for-BCM4908-partitions.patch \
    file://403-v5.13-mtd-parsers-ofpart-support-BCM4908-fixed-partitions.patch \
    file://404-v5.13-mtd-parsers-ofpart-limit-parsing-of-deprecated-DT-sy.patch \
    file://405-v5.13-mtd-parsers-ofpart-make-symbol-bcm4908_partitions_qu.patch \
    file://406-v5.13-0001-mtd-core-add-nvmem-cells-compatible-to-parse-mtd-as-.patch \
    file://406-v5.13-0002-dt-bindings-nvmem-drop-nodename-restriction.patch \
    file://406-v5.13-0003-dt-bindings-mtd-Document-use-of-nvmem-cells-compatib.patch \
    file://407-v5.13-0001-dt-bindings-mtd-add-binding-for-Linksys-Northstar-pa.patch \
    file://407-v5.13-0002-mtd-parsers-ofpart-support-Linksys-Northstar-partiti.patch \
    file://410-mtd-fix-calculating-partition-end-address.patch \
    file://412-v5.19-mtd-call-of_platform_populate-for-MTD-partitions.patch \
    file://413-v6.0-mtd-next-mtd-core-introduce-of-support-for-dynamic-partitions.patch \
    file://414-v6.1-mtd-allow-getting-MTD-device-associated-with-a-speci.patch \
    file://415-v6.0-mtd-core-check-partition-before-dereference.patch \
    file://416-v6.1-mtd-core-add-missing-of_node_get-in-dynamic-partitio.patch \
    file://417-v6.2-0001-mtd-core-simplify-a-bit-code-find-partition-matching.patch \
    file://417-v6.2-0002-mtd-core-try-to-find-OF-node-for-every-MTD-partition.patch \
    file://420-v6.2-mtd-parsers-add-TP-Link-SafeLoader-partitions-table-.patch \
    file://600-v5.12-net-extract-napi-poll-functionality-to-__napi_poll.patch \
    file://601-v5.12-net-implement-threaded-able-napi-poll-loop-support.patch \
    file://602-v5.12-net-add-sysfs-attribute-to-control-napi-threaded-mod.patch \
    file://603-v5.12-net-fix-race-between-napi-kthread-mode-and-busy-poll.patch \
    file://604-v5.12-net-fix-hangup-on-napi_disable-for-threaded-napi.patch \
    file://610-v5.18-netfilter-flowtable-add-check_dst-in-packet-path.patch \
    file://610-v5.9-net-bridge-clear-bridge-s-private-skb-space-on-xmit.patch \
    file://700-v5.5-net-core-allow-fast-GRO-for-skbs-with-Ethernet-heade.patch \
    file://701-v5.7-net-dsa-Implement-flow-dissection-for-tag_brcm.c.patch \
    file://703-v5.5-0001-net-dsa-b53-Add-support-for-MDB.patch \
    file://703-v5.5-0002-net-dsa-bcm_sf2-Wire-up-MDB-operations.patch \
    file://703-v5.5-0003-net-dsa-bcm_sf2-Add-support-for-optional-reset-contr.patch \
    file://704-v5.6-net-dsa-Get-information-about-stacked-DSA-protocol.patch \
    file://705-v5.6-0001-net-dsa-b53-Enable-Broadcom-tags-for-531x5-539x-fami.patch \
    file://707-v5.7-0001-net-dsa-bcm_sf2-Also-configure-Port-5-for-2Gb-sec-on.patch \
    file://707-v5.7-0002-Revert-net-dsa-bcm_sf2-Also-configure-Port-5-for-2Gb.patch \
    file://707-v5.7-0005-net-dsa-b53-Restore-VLAN-entries-upon-re-configurati.patch \
    file://707-v5.7-0006-net-dsa-b53-Prevent-tagged-VLAN-on-port-7-for-7278.patch \
    file://707-v5.7-0007-net-dsa-b53-Deny-enslaving-port-7-for-7278-into-a-br.patch \
    file://707-v5.7-0008-net-dsa-bcm_sf2-Disable-learning-for-ASP-port.patch \
    file://707-v5.7-0009-net-dsa-bcm_sf2-Check-earlier-for-FLOW_EXT-and-FLOW_.patch \
    file://707-v5.7-0010-net-dsa-bcm_sf2-Move-writing-of-CFP_DATA-5-into-slic.patch \
    file://707-v5.7-0011-net-dsa-bcm_sf2-Add-support-for-matching-VLAN-TCI.patch \
    file://707-v5.7-0012-net-dsa-bcm_sf2-Support-specifying-VLAN-tag-egress-r.patch \
    file://707-v5.7-0016-net-dsa-b53-Fix-valid-setting-for-MDB-entries.patch \
    file://709-v5.8-0001-net-dsa-b53-per-port-interrupts-are-optional.patch \
    file://709-v5.8-0002-net-dsa-b53-Rename-num_arl_entries-to-num_arl_bins.patch \
    file://709-v5.8-0003-net-dsa-b53-Provide-number-of-ARL-buckets.patch \
    file://709-v5.8-0004-net-dsa-b53-Bound-check-ARL-searches.patch \
    file://709-v5.8-0005-net-dsa-b53-Remove-is_static-argument-to-b53_read_op.patch \
    file://709-v5.8-0006-net-dsa-b53-remove-redundant-premature-assignment-to.patch \
    file://710-v5.16-0001-net-bgmac-improve-handling-PHY.patch \
    file://710-v5.16-0002-net-bgmac-support-MDIO-described-in-DT.patch \
    file://712-v6.5-net-bgmac-postpone-turning-IRQs-off-to-avoid-SoC-han.patch \
    file://716-v5.5-net-sfp-move-fwnode-parsing-into-sfp-bus-layer.patch \
    file://717-v5.5-net-sfp-rework-upstream-interface.patch \
    file://718-v5.5-net-sfp-fix-sfp_bus_put-kernel-documentation.patch \
    file://719-v5.5-net-sfp-fix-sfp_bus_add_upstream-warning.patch \
    file://720-v5.5-net-sfp-move-sfp-sub-state-machines-into-separate-fu.patch \
    file://721-v5.5-net-sfp-move-tx-disable-on-device-down-to-main-state.patch \
    file://722-v5.5-net-sfp-rename-sfp_sm_ins_next-as-sfp_sm_mod_next.patch \
    file://723-v5.5-net-sfp-handle-module-remove-outside-state-machine.patch \
    file://724-v5.5-net-sfp-rename-T_PROBE_WAIT-to-T_SERIAL.patch \
    file://725-v5.5-net-sfp-parse-SFP-power-requirement-earlier.patch \
    file://726-v5.5-net-sfp-avoid-power-switch-on-address-change-modules.patch \
    file://727-v5.5-net-sfp-control-TX_DISABLE-and-phy-only-from-main-st.patch \
    file://728-v5.5-net-sfp-split-the-PHY-probe-from-sfp_sm_mod_init.patch \
    file://729-v5.5-net-sfp-eliminate-mdelay-from-PHY-probe.patch \
    file://730-v5.5-net-sfp-allow-fault-processing-to-transition-to-othe.patch \
    file://731-v5.5-net-sfp-ensure-TX_FAULT-has-deasserted-before-probin.patch \
    file://732-v5.5-net-sfp-track-upstream-s-attachment-state-in-state-m.patch \
    file://733-v5.5-net-sfp-split-power-mode-switching-from-probe.patch \
    file://734-v5.5-net-sfp-move-module-insert-reporting-out-of-probe.patch \
    file://735-v5.5-net-sfp-allow-sfp-to-probe-slow-to-initialise-GPON-m.patch \
    file://736-v5.5-net-sfp-allow-modules-with-slow-diagnostics-to-probe.patch \
    file://737-v5.5-net-phy-add-core-phylib-sfp-support.patch \
    file://738-v5.5-net-phy-marvell10g-add-SFP-support.patch \
    file://739-v5.5-net-phylink-update-to-use-phy_support_asym_pause.patch \
    file://744-v5.5-net-sfp-soft-status-and-control-support.patch \
    file://745-v5.7-net-dsa-mt7530-add-support-for-port-mirroring.patch \
    file://746-v5.5-net-dsa-mv88e6xxx-Split-monitor-port-configuration.patch \
    file://747-v5.5-net-dsa-mv88e6xxx-Add-support-for-port-mirroring.patch \
    file://748-v5.5-net-dsa-mv88e6xxx-fix-broken-if-statement-because-of.patch \
    file://749-v5.5-net-dsa-mv88e6xxx-Fix-masking-of-egress-port.patch \
    file://750-v5.5-net-phy-add-support-for-clause-37-auto-negotiation.patch \
    file://751-v5.6-net-mvmdio-avoid-error-message-for-optional-IRQ.patch \
    file://752-v5.8-net-dsa-provide-an-option-for-drivers-to-always-rece.patch \
    file://753-v5.8-net-dsa-mt7530-fix-VLAN-setup.patch \
    file://756-v5.8-net-dsa-rtl8366-Pass-GENMASK-signed-bits.patch \
    file://757-v5.8-net-dsa-tag_rtl4_a-Implement-Realtek-4-byte-A-tag.patch \
    file://758-v5.8-net-dsa-rtl8366rb-Support-the-CPU-DSA-tag.patch \
    file://765-v5.12-net-dsa-automatically-bring-up-DSA-master-when-openi.patch \
    file://768-net-sfp-cope-with-SFPs-that-set-both-LOS-normal-and-.patch \
    file://770-v5.12-net-bridge-notify-switchdev-of-disappearance-of-old-.patch \
    file://771-v5.12-net-dsa-be-louder-when-a-non-legacy-FDB-operation-fa.patch \
    file://772-v5.12-net-dsa-don-t-use-switchdev_notifier_fdb_info-in-dsa.patch \
    file://773-v5.12-net-dsa-move-switchdev-event-implementation-under-th.patch \
    file://774-v5.12-net-dsa-exit-early-in-dsa_slave_switchdev_event-if-w.patch \
    file://775-v5.12-net-dsa-listen-for-SWITCHDEV_-FDB-DEL-_ADD_TO_DEVICE.patch \
    file://780-net-dsa-mt7530-setup-core-clock-even-in-TRGMII-mode.patch \
    file://781-v5.18-1-net-dsa-Move-VLAN-filtering-syncing-out-of-dsa_switc.patch \
    file://781-v5.18-2-net-dsa-Avoid-cross-chip-syncing-of-VLAN-filtering.patch \
    file://800-v5.5-iio-imu-Add-support-for-the-FXOS8700-IMU.patch \
    file://800-v5.5-scsi-core-Add-sysfs-attributes-for-VPD-pages-0h-and-.patch \
    file://801-v5.19-nvmem-core-support-passing-DT-node-in-cell-info.patch \
    file://801-v5.5-hwmon-Driver-for-disk-and-solid-state-drives-with-te.patch \
    file://801-v5.6-leds-populate-the-device-s-of_node.patch \
    file://802-v6.1-0001-nvmem-add-driver-handling-U-Boot-environment-variabl.patch \
    file://802-v6.1-0002-nvmem-u-boot-env-find-Device-Tree-nodes-for-NVMEM-ce.patch \
    file://802-v6.1-0003-nvmem-u-boot-env-fix-crc32-casting-type.patch \
    file://803-v5.8-i2c-pxa-use-official-address-byte-helper.patch \
    file://804-v5.8-i2c-pxa-remove-unneeded-includes.patch \
    file://805-v5.8-i2c-pxa-re-arrange-includes-to-be-in-alphabetical-or.patch \
    file://806-v5.8-i2c-pxa-re-arrange-functions-to-flow-better.patch \
    file://807-v5.8-i2c-pxa-re-arrange-register-field-definitions.patch \
    file://808-v5.8-i2c-pxa-add-and-use-definitions-for-IBMR-register.patch \
    file://809-v5.8-i2c-pxa-always-set-fm-and-hs-members-for-each-type.patch \
    file://810-v5.8-i2c-pxa-move-private-definitions-to-i2c-pxa.c.patch \
    file://811-v5.8-i2c-pxa-move-DT-IDs-along-side-platform-IDs.patch \
    file://813-v5.8-i2c-pxa-clean-up-decode_bits.patch \
    file://814-v5.8-i2c-pxa-fix-i2c_pxa_wait_bus_not_busy-boundary-condi.patch \
    file://815-v5.8-i2c-pxa-consolidate-i2c_pxa_-xfer-implementations.patch \
    file://816-v5.8-i2c-pxa-avoid-complaints-with-non-responsive-slaves.patch \
    file://817-v5.8-i2c-pxa-ensure-timeout-messages-are-unique.patch \
    file://818-v5.8-i2c-pxa-remove-some-unnecessary-debug.patch \
    file://820-v5.8-i2c-pxa-use-master-abort-for-device-probes.patch \
    file://821-v5.8-i2c-pxa-implement-generic-i2c-bus-recovery.patch \
    file://822-v6.2-0001-nvmem-u-boot-env-fix-crc32_data_offset-on-redundant-.patch \
    file://822-v6.2-0002-nvmem-u-boot-env-align-endianness-of-crc32-values.patch \
    file://822-v6.2-0003-nvmem-u-boot-env-add-Broadcom-format-support.patch \
    file://825-v5.8-spi-rb4xx-null-pointer-bug-fix.patch \
    file://826-v5.8-spi-rb4xx-update-driver-to-be-device-tree-aware.patch \
    file://831-v5.13-0001-firmware-bcm47xx_nvram-rename-finding-function-and-i.patch \
    file://831-v5.13-0002-firmware-bcm47xx_nvram-add-helper-checking-for-NVRAM.patch \
    file://831-v5.13-0003-firmware-bcm47xx_nvram-extract-code-copying-NVRAM.patch \
    file://831-v5.13-0004-firmware-bcm47xx_nvram-look-for-NVRAM-with-for-inste.patch \
    file://831-v5.13-0005-firmware-bcm47xx_nvram-inline-code-checking-NVRAM-si.patch \
    file://845-v6.0-0001-dt-bindings-leds-add-Broadcom-s-BCM63138-controller.patch \
    file://845-v6.0-0002-leds-bcm63138-add-support-for-BCM63138-controller.patch \
    file://846-v6.0-0001-dt-bindings-leds-leds-bcm63138-unify-full-stops-in-d.patch \
    file://846-v6.0-0002-leds-add-help-info-about-BCM63138-module-name.patch \
    file://846-v6.0-0003-leds-leds-bcm63138-get-rid-of-LED_OFF.patch \
    file://852-v5.10-0001-net-sfp-VSOL-V2801F-CarlitoxxPro-CPGOS03-0490-v2.0-w.patch \
    file://852-v5.10-0002-net-sfp-add-workaround-for-Realtek-RTL8672-and-RTL96.patch \
    file://900-v5.9-0001-dt-bindings-Add-multicolor-class-dt-bindings-documen.patch \
    file://900-v5.9-0002-leds-Add-multicolor-ID-to-the-color-ID-list.patch \
    file://900-v5.9-0003-leds-add-RGB-color-option-as-that-is-different-from-.patch \
    file://999-2360-v5.16-spi-add-power-control-when-set_cs.patch \
    file://999-2700-v5.7-iopoll-introduce-read_poll_timeout-macro.patch \
    file://999-2701-v5.8-net-phy-add-concept-of-shared-storage-for-PHYs.patch \
    file://999-2702-v5.9-net-phy-add-support-for-a-common-probe-between-shared-PHYs.patch;apply=no \
    file://999-2703-net-phy-backport-v5.4-mediatek-ge-and-v6.4-mediatek-ge-soc.patch \
    file://999-update-uapi-header-files-for-bridger.patch \
    "